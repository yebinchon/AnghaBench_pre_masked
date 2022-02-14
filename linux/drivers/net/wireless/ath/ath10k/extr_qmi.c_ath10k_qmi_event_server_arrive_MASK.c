
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath10k_qmi {scalar_t__ fw_ready; struct ath10k* ar; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k_qmi*) ;
 int FUNC_1 (struct ath10k_qmi*) ;
 int FUNC_2 (struct ath10k_qmi*) ;
 int FUNC_3 (struct ath10k_qmi*) ;
 int FUNC_4 (struct ath10k_qmi*) ;
 int FUNC_5 (struct ath10k_qmi*) ;
 int FUNC_6 (struct ath10k_qmi*) ;
 int FUNC_7 (struct ath10k*,int ) ;

__attribute__((used)) static void FUNC_8(struct ath10k_qmi *VAR_1)
{
 struct ath10k *VAR_2 = VAR_1->ar;
 int VAR_3;

 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3)
  return;

 if (VAR_1->fw_ready) {
  FUNC_7(VAR_2, VAR_0);
  return;
 }

 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3)
  return;

 VAR_3 = FUNC_3(VAR_1);
 if (VAR_3)
  return;

 VAR_3 = FUNC_6(VAR_1);
 if (VAR_3)
  return;

 VAR_3 = FUNC_4(VAR_1);
 if (VAR_3)
  goto err_setup_msa;

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3)
  goto err_setup_msa;

 return;

err_setup_msa:
 FUNC_5(VAR_1);
}
