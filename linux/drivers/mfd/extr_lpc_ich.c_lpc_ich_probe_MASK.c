
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_device_id {size_t driver_data; } ;
struct pci_dev {int dev; } ;
struct lpc_ich_priv {size_t chipset; int actrl_pbase_save; int abase_save; int gctrl_save; int gctrl; int gbase; int actrl_pbase; int abase; } ;
struct TYPE_2__ {scalar_t__ spi_type; scalar_t__ gpio_version; scalar_t__ iTCO_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int FUNC_0 (int *,char*) ;
 struct lpc_ich_priv* FUNC_1 (int *,int,int ) ;
 TYPE_1__* VAR_10 ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,struct lpc_ich_priv*) ;

__attribute__((used)) static int FUNC_7(struct pci_dev *VAR_11,
    const struct pci_device_id *VAR_12)
{
 struct lpc_ich_priv *VAR_13;
 int VAR_14;
 bool VAR_15 = 0;

 VAR_13 = FUNC_1(&VAR_11->dev,
       sizeof(struct lpc_ich_priv), VAR_4);
 if (!VAR_13)
  return -VAR_3;

 VAR_13->chipset = VAR_12->driver_data;

 VAR_13->actrl_pbase_save = -1;
 VAR_13->abase_save = -1;

 VAR_13->abase = VAR_0;
 VAR_13->actrl_pbase = VAR_1;

 VAR_13->gctrl_save = -1;
 if (VAR_13->chipset <= VAR_9) {
  VAR_13->gbase = VAR_5;
  VAR_13->gctrl = VAR_7;
 } else {
  VAR_13->gbase = VAR_6;
  VAR_13->gctrl = VAR_8;
 }

 FUNC_6(VAR_11, VAR_13);

 if (VAR_10[VAR_13->chipset].iTCO_version) {
  VAR_14 = FUNC_4(VAR_11);
  if (!VAR_14)
   VAR_15 = 1;
 }

 if (VAR_10[VAR_13->chipset].gpio_version) {
  VAR_14 = FUNC_2(VAR_11);
  if (!VAR_14)
   VAR_15 = 1;
 }

 if (VAR_10[VAR_13->chipset].spi_type) {
  VAR_14 = FUNC_3(VAR_11);
  if (!VAR_14)
   VAR_15 = 1;
 }





 if (!VAR_15) {
  FUNC_0(&VAR_11->dev, "No MFD cells added\n");
  FUNC_5(VAR_11);
  return -VAR_2;
 }

 return 0;
}
