
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct mfd_cell {int pdata_size; int * platform_data; } ;
struct lpc_ich_priv {size_t chipset; } ;
struct lpc_ich_info {int dummy; } ;


 int * VAR_0 ;
 struct mfd_cell VAR_1 ;
 struct lpc_ich_priv* FUNC_0 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_1(struct pci_dev *VAR_2)
{
 struct lpc_ich_priv *VAR_3 = FUNC_0(VAR_2);
 struct mfd_cell *VAR_4 = &VAR_1;

 VAR_4->platform_data = &VAR_0[VAR_3->chipset];
 VAR_4->pdata_size = sizeof(struct lpc_ich_info);
}
