
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct resource {int start; int end; } ;
struct pci_dev {int dev; struct pci_bus* bus; } ;
struct pci_bus {int dummy; } ;
struct lpc_ich_priv {size_t chipset; } ;
struct intel_spi_boardinfo {int type; int writeable; } ;
struct TYPE_5__ {int spi_type; } ;
struct TYPE_4__ {int pdata_size; struct intel_spi_boardinfo* platform_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;
 unsigned int FUNC_0 (int,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 struct intel_spi_boardinfo* FUNC_1 (int *,int,int ) ;
 struct resource* VAR_15 ;
 TYPE_3__* VAR_16 ;
 TYPE_1__ VAR_17 ;
 int FUNC_2 (int *,int ,TYPE_1__*,int,int *,int ,int *) ;
 int FUNC_3 (struct pci_bus*,unsigned int,int ,int*) ;
 int FUNC_4 (struct pci_bus*,unsigned int,int,int) ;
 struct lpc_ich_priv* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,int ,int*) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static int FUNC_8(struct pci_dev *VAR_18)
{
 struct lpc_ich_priv *VAR_19 = FUNC_5(VAR_18);
 struct resource *VAR_20 = &VAR_15[0];
 struct intel_spi_boardinfo *VAR_21;
 u32 VAR_22, VAR_23, VAR_24;

 VAR_21 = FUNC_1(&VAR_18->dev, sizeof(*VAR_21), VAR_5);
 if (!VAR_21)
  return -VAR_4;

 VAR_21->type = VAR_16[VAR_19->chipset].spi_type;

 switch (VAR_21->type) {
 case 129:
  FUNC_6(VAR_18, VAR_10, &VAR_22);
  if (VAR_22 & VAR_11) {
   VAR_20->start = VAR_22 & ~(VAR_12 - 1);
   VAR_20->end = VAR_20->start + VAR_12 - 1;
  }
  break;

 case 128:
  FUNC_6(VAR_18, VAR_8, &VAR_23);
  if (VAR_23 & 1) {
   VAR_22 = FUNC_7(VAR_23, VAR_14);
   VAR_20->start = VAR_22 + VAR_13;
   VAR_20->end = VAR_20->start + VAR_14 - 1;

   FUNC_6(VAR_18, VAR_0, &VAR_24);
   VAR_21->writeable = !!(VAR_24 & VAR_1);
  }
  break;

 case 130: {
  unsigned int VAR_25 = FUNC_0(13, 0);
  unsigned int VAR_26 = FUNC_0(13, 2);
  struct pci_bus *VAR_27 = VAR_18->bus;






  FUNC_4(VAR_27, VAR_25, 0xe1, 0x0);
  FUNC_3(VAR_27, VAR_26, VAR_6,
       &VAR_22);
  if (VAR_22 != ~0) {
   VAR_20->start = VAR_22 & 0xfffffff0;
   VAR_20->end = VAR_20->start + VAR_9 - 1;

   FUNC_3(VAR_27, VAR_26, VAR_0, &VAR_24);
   VAR_21->writeable = !!(VAR_24 & VAR_1);
  }

  FUNC_4(VAR_27, VAR_25, 0xe1, 0x1);
  break;
 }

 default:
  return -VAR_2;
 }

 if (!VAR_20->start)
  return -VAR_3;

 VAR_17.platform_data = VAR_21;
 VAR_17.pdata_size = sizeof(*VAR_21);

 return FUNC_2(&VAR_18->dev, VAR_7,
          &VAR_17, 1, ((void*)0), 0, ((void*)0));
}
