
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_pci {int link_ctl; int pdev; } ;
struct ath10k {int dummy; } ;
typedef enum ath10k_firmware_mode { ____Placeholder_ath10k_firmware_mode } ath10k_firmware_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ath10k*,int ,char*) ;
 int FUNC_1 (struct ath10k*,char*,int) ;
 int FUNC_2 (struct ath10k*) ;
 int FUNC_3 (struct ath10k*) ;
 int FUNC_4 (struct ath10k*) ;
 int FUNC_5 (struct ath10k*) ;
 scalar_t__ FUNC_6 (struct ath10k*) ;
 int FUNC_7 (struct ath10k*) ;
 int FUNC_8 (struct ath10k*) ;
 struct ath10k_pci* FUNC_9 (struct ath10k*) ;
 int FUNC_10 (struct ath10k*) ;
 int FUNC_11 (struct ath10k*,char*) ;
 int FUNC_12 (int ,int ,int*) ;
 int FUNC_13 (int ,int ,int) ;

__attribute__((used)) static int FUNC_14(struct ath10k *VAR_3,
       enum ath10k_firmware_mode VAR_4)
{
 struct ath10k_pci *VAR_5 = FUNC_9(VAR_3);
 int VAR_6;

 FUNC_0(VAR_3, VAR_0, "boot hif power up\n");

 FUNC_12(VAR_5->pdev, VAR_1,
      &VAR_5->link_ctl);
 FUNC_13(VAR_5->pdev, VAR_1,
       VAR_5->link_ctl & ~VAR_2);
 VAR_6 = FUNC_3(VAR_3);
 if (VAR_6) {
  if (FUNC_6(VAR_3)) {
   FUNC_11(VAR_3, "firmware crashed during chip reset\n");
   FUNC_4(VAR_3);
   FUNC_5(VAR_3);
  }

  FUNC_1(VAR_3, "failed to reset chip: %d\n", VAR_6);
  goto err_sleep;
 }

 VAR_6 = FUNC_8(VAR_3);
 if (VAR_6) {
  FUNC_1(VAR_3, "failed to initialize CE: %d\n", VAR_6);
  goto err_sleep;
 }

 VAR_6 = FUNC_7(VAR_3);
 if (VAR_6) {
  FUNC_1(VAR_3, "failed to setup init config: %d\n", VAR_6);
  goto err_ce;
 }

 VAR_6 = FUNC_10(VAR_3);
 if (VAR_6) {
  FUNC_1(VAR_3, "could not wake up target CPU: %d\n", VAR_6);
  goto err_ce;
 }

 return 0;

err_ce:
 FUNC_2(VAR_3);

err_sleep:
 return VAR_6;
}
