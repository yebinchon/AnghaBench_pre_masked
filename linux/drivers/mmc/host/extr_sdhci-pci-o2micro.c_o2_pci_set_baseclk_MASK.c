
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdhci_pci_chip {int pdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct sdhci_pci_chip *VAR_1, u32 VAR_2)
{
 u32 VAR_3;

 FUNC_0(VAR_1->pdev,
         VAR_0, &VAR_3);

 VAR_3 &= 0x0000FFFF;
 VAR_3 |= VAR_2;

 FUNC_1(VAR_1->pdev,
          VAR_0, VAR_3);
}
