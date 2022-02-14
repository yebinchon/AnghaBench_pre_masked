
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct resource {scalar_t__ end; scalar_t__ start; } ;
struct pci_dev {int dev; } ;
struct lpc_ich_priv {size_t chipset; int abase; } ;
struct TYPE_5__ {int iTCO_version; } ;
struct TYPE_4__ {int num_resources; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *,char*) ;
 TYPE_3__* VAR_15 ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 TYPE_1__ VAR_16 ;
 int FUNC_5 (int *,int ,TYPE_1__*,int,int *,int ,int *) ;
 struct lpc_ich_priv* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*,int ,int*) ;
 struct resource* FUNC_8 (int ) ;
 struct resource* FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct pci_dev *VAR_17)
{
 struct lpc_ich_priv *VAR_18 = FUNC_6(VAR_17);
 u32 VAR_19;
 u32 VAR_20;
 int VAR_21;
 struct resource *VAR_22;


 if (FUNC_0())
  return -VAR_9;


 FUNC_7(VAR_17, VAR_18->abase, &VAR_19);
 VAR_20 = VAR_19 & 0x0000ff80;
 if (!VAR_20) {
  FUNC_1(&VAR_17->dev, "I/O space for ACPI uninitialized\n");
  VAR_21 = -VAR_9;
  goto wdt_done;
 }

 VAR_22 = FUNC_8(VAR_11);
 VAR_22->start = VAR_20 + VAR_7;
 VAR_22->end = VAR_20 + VAR_6;

 VAR_22 = FUNC_8(VAR_10);
 VAR_22->start = VAR_20 + VAR_5;
 VAR_22->end = VAR_20 + VAR_4;

 FUNC_2(VAR_17);
 if (VAR_15[VAR_18->chipset].iTCO_version == 1) {

  VAR_16.num_resources--;
 } else if (VAR_15[VAR_18->chipset].iTCO_version == 2) {
  FUNC_7(VAR_17, VAR_14, &VAR_19);
  VAR_20 = VAR_19 & 0xffffc000;
  if (!(VAR_19 & 1)) {
   FUNC_1(&VAR_17->dev, "RCBA is disabled by "
     "hardware/BIOS, device disabled\n");
   VAR_21 = -VAR_9;
   goto wdt_done;
  }
  VAR_22 = FUNC_9(VAR_12);
  VAR_22->start = VAR_20 + VAR_1;
  VAR_22->end = VAR_20 + VAR_0;
 } else if (VAR_15[VAR_18->chipset].iTCO_version == 3) {
  FUNC_3(VAR_17);
  FUNC_7(VAR_17, VAR_8, &VAR_19);
  VAR_20 = VAR_19 & 0xfffffe00;

  VAR_22 = FUNC_9(VAR_12);
  VAR_22->start = VAR_20 + VAR_3;
  VAR_22->end = VAR_20 + VAR_2;
 }

 VAR_21 = FUNC_4(VAR_17);
 if (VAR_21)
  goto wdt_done;

 VAR_21 = FUNC_5(&VAR_17->dev, VAR_13,
         &VAR_16, 1, ((void*)0), 0, ((void*)0));

wdt_done:
 return VAR_21;
}
