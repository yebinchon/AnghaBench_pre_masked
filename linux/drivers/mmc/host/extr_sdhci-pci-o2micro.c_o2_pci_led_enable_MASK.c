
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdhci_pci_chip {int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct sdhci_pci_chip *VAR_4)
{
 int VAR_5;
 u32 VAR_6;


 VAR_5 = FUNC_0(VAR_4->pdev,
        VAR_1, &VAR_6);
 if (VAR_5)
  return;

 VAR_6 &= ~VAR_0;
 FUNC_1(VAR_4->pdev,
          VAR_1, VAR_6);

 VAR_5 = FUNC_0(VAR_4->pdev,
        VAR_3, &VAR_6);
 if (VAR_5)
  return;

 VAR_6 |= VAR_2;
 FUNC_1(VAR_4->pdev,
          VAR_3, VAR_6);

}
