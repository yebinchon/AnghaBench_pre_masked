
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k {int dummy; } ;
typedef enum ath10k_firmware_mode { ____Placeholder_ath10k_firmware_mode } ath10k_firmware_mode ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*) ;
 int FUNC_1 (struct ath10k*) ;
 int FUNC_2 (struct ath10k*,int ,char*) ;
 int FUNC_3 (struct ath10k*,char*,int) ;
 int FUNC_4 (struct ath10k*) ;
 int FUNC_5 (struct ath10k*) ;
 int FUNC_6 (struct ath10k*) ;

__attribute__((used)) static int FUNC_7(struct ath10k *VAR_1,
       enum ath10k_firmware_mode VAR_2)
{
 int VAR_3;

 FUNC_2(VAR_1, VAR_0, "boot ahb hif power up\n");

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3) {
  FUNC_3(VAR_1, "failed to reset chip: %d\n", VAR_3);
  goto out;
 }

 VAR_3 = FUNC_6(VAR_1);
 if (VAR_3) {
  FUNC_3(VAR_1, "failed to initialize CE: %d\n", VAR_3);
  goto out;
 }

 VAR_3 = FUNC_5(VAR_1);
 if (VAR_3) {
  FUNC_3(VAR_1, "failed to setup init config: %d\n", VAR_3);
  goto err_ce_deinit;
 }

 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3) {
  FUNC_3(VAR_1, "could not wake up target CPU: %d\n", VAR_3);
  goto err_ce_deinit;
 }

 return 0;

err_ce_deinit:
 FUNC_4(VAR_1);
out:
 return VAR_3;
}
