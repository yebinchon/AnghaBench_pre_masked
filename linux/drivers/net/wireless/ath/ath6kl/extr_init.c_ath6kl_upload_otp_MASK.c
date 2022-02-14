
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ app_start_override_addr; scalar_t__ app_load_addr; } ;
struct ath6kl {TYPE_1__ hw; int fw_otp_len; int * fw_otp; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath6kl*,scalar_t__,scalar_t__*) ;
 int FUNC_1 (struct ath6kl*,scalar_t__,int *,int ) ;
 int FUNC_2 (struct ath6kl*,int ,scalar_t__*) ;
 int FUNC_3 (int ,char*,char*,...) ;
 int FUNC_4 (char*,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(struct ath6kl *VAR_2)
{
 u32 VAR_3, VAR_4;
 bool VAR_5 = 0;
 int VAR_6;

 if (VAR_2->fw_otp == ((void*)0))
  return 0;

 VAR_3 = VAR_2->hw.app_load_addr;

 FUNC_3(VAR_0, "writing otp to 0x%x (%zd B)\n", VAR_3,
     VAR_2->fw_otp_len);

 VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_2->fw_otp,
           VAR_2->fw_otp_len);
 if (VAR_6) {
  FUNC_4("Failed to upload OTP file: %d\n", VAR_6);
  return VAR_6;
 }


 VAR_6 = FUNC_2(VAR_2, VAR_1, &VAR_3);

 if (VAR_6) {
  FUNC_4("Failed to read hi_app_start: %d\n", VAR_6);
  return VAR_6;
 }

 if (VAR_2->hw.app_start_override_addr == 0) {
  VAR_2->hw.app_start_override_addr = VAR_3;
  VAR_5 = 1;
 }

 FUNC_3(VAR_0, "app_start_override_addr%s 0x%x\n",
     VAR_5 ? " (from hw)" : "",
     VAR_2->hw.app_start_override_addr);


 FUNC_3(VAR_0, "executing OTP at 0x%x\n",
     VAR_2->hw.app_start_override_addr);
 VAR_4 = 0;
 FUNC_0(VAR_2, VAR_2->hw.app_start_override_addr, &VAR_4);

 return VAR_6;
}
