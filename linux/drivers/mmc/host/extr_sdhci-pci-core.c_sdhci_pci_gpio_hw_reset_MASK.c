
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_pci_slot {int rst_n_gpio; } ;
struct sdhci_host {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 struct sdhci_pci_slot* FUNC_2 (struct sdhci_host*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static void FUNC_5(struct sdhci_host *VAR_0)
{
 struct sdhci_pci_slot *VAR_1 = FUNC_2(VAR_0);
 int VAR_2 = VAR_1->rst_n_gpio;

 if (!FUNC_0(VAR_2))
  return;
 FUNC_1(VAR_2, 0);

 FUNC_3(10);
 FUNC_1(VAR_2, 1);

 FUNC_4(300, 1000);
}
