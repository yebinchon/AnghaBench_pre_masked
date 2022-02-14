
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;
struct ath10k_pci {struct pci_dev* pdev; } ;
struct ath10k {int dummy; } ;


 int FUNC_0 (struct ath10k*,char*,int) ;
 int FUNC_1 (struct ath10k*) ;
 struct ath10k_pci* FUNC_2 (struct ath10k*) ;
 int FUNC_3 (struct pci_dev*,int,int*) ;
 int FUNC_4 (struct pci_dev*,int,int) ;

__attribute__((used)) static int FUNC_5(struct ath10k *VAR_0)
{
 struct ath10k_pci *VAR_1 = FUNC_2(VAR_0);
 struct pci_dev *VAR_2 = VAR_1->pdev;
 u32 VAR_3;
 int VAR_4 = 0;

 VAR_4 = FUNC_1(VAR_0);
 if (VAR_4) {
  FUNC_0(VAR_0, "failed to wake up target: %d\n", VAR_4);
  return VAR_4;
 }






 FUNC_3(VAR_2, 0x40, &VAR_3);
 if ((VAR_3 & 0x0000ff00) != 0)
  FUNC_4(VAR_2, 0x40, VAR_3 & 0xffff00ff);

 return VAR_4;
}
