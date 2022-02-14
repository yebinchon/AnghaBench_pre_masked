
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_pcie {int pio; } ;
struct list_head {int dummy; } ;
struct pci_host_bridge {struct list_head windows; } ;


 int FUNC_0 (struct list_head*) ;
 struct pci_host_bridge* FUNC_1 (struct tegra_pcie*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct tegra_pcie *VAR_0)
{
 struct pci_host_bridge *VAR_1 = FUNC_1(VAR_0);
 struct list_head *VAR_2 = &VAR_1->windows;

 FUNC_2(&VAR_0->pio);
 FUNC_0(VAR_2);
}
