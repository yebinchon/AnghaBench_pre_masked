
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct mfd_cell {int pdata_size; struct itco_wdt_platform_data* platform_data; } ;
struct lpc_ich_priv {size_t chipset; } ;
struct lpc_ich_info {int name; int iTCO_version; } ;
struct itco_wdt_platform_data {int name; int version; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct itco_wdt_platform_data* FUNC_0 (int *,int,int ) ;
 struct lpc_ich_info* VAR_2 ;
 struct mfd_cell VAR_3 ;
 struct lpc_ich_priv* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct pci_dev *VAR_4)
{
 struct itco_wdt_platform_data *VAR_5;
 struct lpc_ich_priv *VAR_6 = FUNC_1(VAR_4);
 struct lpc_ich_info *VAR_7;
 struct mfd_cell *VAR_8 = &VAR_3;

 VAR_5 = FUNC_0(&VAR_4->dev, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_7 = &VAR_2[VAR_6->chipset];

 VAR_5->version = VAR_7->iTCO_version;
 FUNC_2(VAR_5->name, VAR_7->name, sizeof(VAR_5->name));

 VAR_8->platform_data = VAR_5;
 VAR_8->pdata_size = sizeof(*VAR_5);
 return 0;
}
