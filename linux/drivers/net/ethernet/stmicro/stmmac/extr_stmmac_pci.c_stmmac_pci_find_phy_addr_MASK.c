
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stmmac_pci_func_data {int func; int phy_addr; } ;
struct stmmac_pci_dmi_data {size_t nfuncs; struct stmmac_pci_func_data* func; } ;
struct pci_dev {int devfn; } ;
struct dmi_system_id {struct stmmac_pci_dmi_data* driver_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct dmi_system_id* FUNC_1 (struct dmi_system_id const*) ;

__attribute__((used)) static int FUNC_2(struct pci_dev *VAR_1,
        const struct dmi_system_id *VAR_2)
{
 const struct stmmac_pci_func_data *VAR_3;
 const struct stmmac_pci_dmi_data *VAR_4;
 const struct dmi_system_id *VAR_5;
 int VAR_6 = FUNC_0(VAR_1->devfn);
 size_t VAR_7;

 VAR_5 = FUNC_1(VAR_2);
 if (!VAR_5)
  return -VAR_0;

 VAR_4 = VAR_5->driver_data;
 VAR_3 = VAR_4->func;

 for (VAR_7 = 0; VAR_7 < VAR_4->nfuncs; VAR_7++, VAR_3++)
  if (VAR_3->func == VAR_6)
   return VAR_3->phy_addr;

 return -VAR_0;
}
