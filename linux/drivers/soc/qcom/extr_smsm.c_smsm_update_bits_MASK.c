
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct smsm_host {int ipc_bit; int ipc_offset; scalar_t__ ipc_regmap; } ;
struct qcom_smsm {size_t num_hosts; scalar_t__ subscription; struct smsm_host* hosts; int lock; scalar_t__ local_state; } ;


 int FUNC_0 (int ) ;
 size_t FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int ,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 () ;
 int FUNC_6 (size_t,scalar_t__) ;

__attribute__((used)) static int FUNC_7(void *VAR_0, u32 VAR_1, u32 VAR_2)
{
 struct qcom_smsm *VAR_3 = VAR_0;
 struct smsm_host *VAR_4;
 unsigned long VAR_5;
 u32 VAR_6;
 u32 VAR_7;
 u32 VAR_8;
 u32 VAR_9;

 FUNC_3(&VAR_3->lock, VAR_5);


 VAR_9 = VAR_8 = FUNC_1(VAR_3->local_state);
 VAR_9 &= ~VAR_1;
 VAR_9 |= VAR_2;


 VAR_6 = VAR_9 ^ VAR_8;
 if (!VAR_6) {
  FUNC_4(&VAR_3->lock, VAR_5);
  goto done;
 }


 FUNC_6(VAR_9, VAR_3->local_state);
 FUNC_4(&VAR_3->lock, VAR_5);


 FUNC_5();


 for (VAR_7 = 0; VAR_7 < VAR_3->num_hosts; VAR_7++) {
  VAR_4 = &VAR_3->hosts[VAR_7];

  VAR_9 = FUNC_1(VAR_3->subscription + VAR_7);
  if (VAR_9 & VAR_6 && VAR_4->ipc_regmap) {
   FUNC_2(VAR_4->ipc_regmap,
         VAR_4->ipc_offset,
         FUNC_0(VAR_4->ipc_bit));
  }
 }

done:
 return 0;
}
