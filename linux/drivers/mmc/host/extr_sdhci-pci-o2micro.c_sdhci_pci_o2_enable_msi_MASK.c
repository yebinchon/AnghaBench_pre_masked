
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_pci_chip {int pdev; } ;
struct sdhci_host {int irq; int mmc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static void FUNC_6(struct sdhci_pci_chip *VAR_3,
        struct sdhci_host *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_2(VAR_3->pdev, VAR_0);
 if (!VAR_5) {
  FUNC_5("%s: unsupport msi, use INTx irq\n",
   FUNC_0(VAR_4->mmc));
  return;
 }

 VAR_5 = FUNC_1(VAR_3->pdev, 1, 1,
        VAR_1 | VAR_2);
 if (VAR_5 < 0) {
  FUNC_4("%s: enable PCI MSI failed, err=%d\n",
         FUNC_0(VAR_4->mmc), VAR_5);
  return;
 }

 VAR_4->irq = FUNC_3(VAR_3->pdev, 0);
}
