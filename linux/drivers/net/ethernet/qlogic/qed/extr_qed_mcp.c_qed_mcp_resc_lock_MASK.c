
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct qed_resc_lock_params {scalar_t__ retry_num; scalar_t__ b_granted; int retry_interval; scalar_t__ sleep_b4_retry; } ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ptt*,struct qed_resc_lock_params*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

int
FUNC_4(struct qed_hwfn *VAR_0,
    struct qed_ptt *VAR_1, struct qed_resc_lock_params *VAR_2)
{
 u32 VAR_3 = 0;
 int VAR_4;

 do {

  if (VAR_3) {
   if (VAR_2->sleep_b4_retry) {
    u16 VAR_5 =
        FUNC_0(VAR_2->retry_interval,
       1000);

    FUNC_2(VAR_5);
   } else {
    FUNC_3(VAR_2->retry_interval);
   }
  }

  VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2);
  if (VAR_4)
   return VAR_4;

  if (VAR_2->b_granted)
   break;
 } while (VAR_3++ < VAR_2->retry_num);

 return 0;
}
