
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct ath10k_pci {int dummy; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*) ;
 int FUNC_1 (struct ath10k*) ;
 int FUNC_2 (struct ath10k*,int ,char*) ;
 int FUNC_3 (struct ath10k*) ;
 int FUNC_4 (struct ath10k*) ;
 struct ath10k_pci* FUNC_5 (struct ath10k*) ;
 int FUNC_6 (struct ath10k*) ;
 int FUNC_7 (struct ath10k*) ;
 int FUNC_8 (struct ath10k*) ;
 struct ath10k* FUNC_9 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_10(struct pci_dev *VAR_1)
{
 struct ath10k *VAR_2 = FUNC_9(VAR_1);
 struct ath10k_pci *VAR_3;

 FUNC_2(VAR_2, VAR_0, "pci remove\n");

 if (!VAR_2)
  return;

 VAR_3 = FUNC_5(VAR_2);

 if (!VAR_3)
  return;

 FUNC_1(VAR_2);
 FUNC_4(VAR_2);
 FUNC_3(VAR_2);
 FUNC_7(VAR_2);
 FUNC_8(VAR_2);
 FUNC_6(VAR_2);
 FUNC_0(VAR_2);
}
