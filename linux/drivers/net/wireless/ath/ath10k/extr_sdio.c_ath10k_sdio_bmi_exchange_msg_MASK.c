
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int htc_addr; } ;
struct ath10k_sdio {void* bmi_buf; TYPE_1__ mbox_info; } ;
struct ath10k {int dummy; } ;


 int FUNC_0 (struct ath10k*) ;
 int FUNC_1 (struct ath10k*) ;
 struct ath10k_sdio* FUNC_2 (struct ath10k*) ;
 int FUNC_3 (struct ath10k*,int ,void*,int ) ;
 int FUNC_4 (struct ath10k*,int ,void*,int ) ;
 int FUNC_5 (struct ath10k*,char*,int) ;
 int FUNC_6 (void*,void*,int ) ;

__attribute__((used)) static int FUNC_7(struct ath10k *VAR_0,
     void *VAR_1, u32 VAR_2,
     void *VAR_3, u32 *VAR_4)
{
 struct ath10k_sdio *VAR_5 = FUNC_2(VAR_0);
 u32 VAR_6;
 int VAR_7;

 if (VAR_1) {
  VAR_7 = FUNC_0(VAR_0);
  if (VAR_7)
   return VAR_7;

  VAR_6 = VAR_5->mbox_info.htc_addr;

  FUNC_6(VAR_5->bmi_buf, VAR_1, VAR_2);
  VAR_7 = FUNC_4(VAR_0, VAR_6, VAR_5->bmi_buf, VAR_2);
  if (VAR_7) {
   FUNC_5(VAR_0,
        "unable to send the bmi data to the device: %d\n",
        VAR_7);
   return VAR_7;
  }
 }

 if (!VAR_3 || !VAR_4)

  return 0;
 VAR_7 = FUNC_1(VAR_0);
 if (VAR_7)
  return VAR_7;


 VAR_6 = VAR_5->mbox_info.htc_addr;
 VAR_7 = FUNC_3(VAR_0, VAR_6, VAR_5->bmi_buf, *VAR_4);
 if (VAR_7) {
  FUNC_5(VAR_0,
       "unable to read the bmi data from the device: %d\n",
       VAR_7);
  return VAR_7;
 }

 FUNC_6(VAR_3, VAR_5->bmi_buf, *VAR_4);

 return 0;
}
