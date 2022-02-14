
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct resource {void* flags; } ;
struct TYPE_5__ {int * bus; int parent; } ;
struct pci_dev {int hdr_type; int multifunction; int dma_mask; int revision; int class; int subsystem_vendor; int subsystem_device; int transparent; TYPE_1__* bus; struct resource* resource; int broken_intx_masking; scalar_t__ non_compliant_bars; int current_state; int cfg_size; int device; int vendor; int devfn; TYPE_3__ dev; int error_state; int sysdata; } ;
struct pci_bus_region {int start; int end; } ;
struct TYPE_4__ {int number; int bridge; int sysdata; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ) ;



 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (TYPE_3__*,char*,int ,int ,int ,int ) ;
 int FUNC_3 (struct pci_dev*) ;
 int VAR_18 ;
 int FUNC_4 (struct pci_dev*) ;
 int VAR_19 ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ VAR_20 ;
 int FUNC_8 (struct pci_dev*,char*,int,...) ;
 int FUNC_9 (struct pci_dev*,int ) ;
 int FUNC_10 (int ,struct pci_dev*) ;
 int VAR_21 ;
 int FUNC_11 (struct pci_dev*) ;
 int FUNC_12 (struct pci_dev*,char*,...) ;
 int FUNC_13 (struct pci_dev*) ;
 int FUNC_14 (struct pci_dev*,int,int ) ;
 int FUNC_15 (struct pci_dev*) ;
 int FUNC_16 (struct pci_dev*,int ,int*) ;
 int FUNC_17 (struct pci_dev*,int ,int*) ;
 int FUNC_18 (struct pci_dev*) ;
 int FUNC_19 (struct pci_dev*,int*,int*) ;
 int FUNC_20 (struct pci_dev*,int ,int) ;
 int FUNC_21 (TYPE_1__*,struct resource*,struct pci_bus_region*) ;
 int FUNC_22 (struct pci_dev*) ;
 int FUNC_23 (struct pci_dev*) ;
 int FUNC_24 (struct pci_dev*) ;
 int FUNC_25 (struct pci_dev*) ;

int FUNC_26(struct pci_dev *VAR_22)
{
 u32 VAR_23;
 u16 VAR_24;
 u8 VAR_25;
 int VAR_26 = 0;
 struct pci_bus_region VAR_27;
 struct resource *VAR_28;

 VAR_25 = FUNC_11(VAR_22);

 VAR_22->sysdata = VAR_22->bus->sysdata;
 VAR_22->dev.parent = VAR_22->bus->bridge;
 VAR_22->dev.bus = &VAR_18;
 VAR_22->hdr_type = VAR_25 & 0x7f;
 VAR_22->multifunction = !!(VAR_25 & 0x80);
 VAR_22->error_state = VAR_19;
 FUNC_23(VAR_22);

 FUNC_6(VAR_22);





 VAR_22->dma_mask = 0xffffffff;

 FUNC_2(&VAR_22->dev, "%04x:%02x:%02x.%d", FUNC_7(VAR_22->bus),
       VAR_22->bus->number, FUNC_1(VAR_22->devfn),
       FUNC_0(VAR_22->devfn));

 VAR_23 = FUNC_5(VAR_22);

 VAR_22->revision = VAR_23 & 0xff;
 VAR_22->class = VAR_23 >> 8;

 FUNC_12(VAR_22, "[%04x:%04x] type %02x class %#08x\n",
     VAR_22->vendor, VAR_22->device, VAR_22->hdr_type, VAR_22->class);

 if (VAR_20)
  FUNC_3(VAR_22);


 VAR_22->cfg_size = FUNC_4(VAR_22);


 FUNC_24(VAR_22);

 FUNC_25(VAR_22);


 VAR_22->current_state = VAR_17;


 FUNC_10(VAR_21, VAR_22);


 VAR_23 = VAR_22->class >> 8;

 if (VAR_22->non_compliant_bars) {
  FUNC_17(VAR_22, VAR_10, &VAR_24);
  if (VAR_24 & (VAR_11 | VAR_12)) {
   FUNC_12(VAR_22, "device has non-compliant BARs; disabling IO/MEM decoding\n");
   VAR_24 &= ~VAR_11;
   VAR_24 &= ~VAR_12;
   FUNC_20(VAR_22, VAR_10, VAR_24);
  }
 }

 VAR_22->broken_intx_masking = FUNC_13(VAR_22);

 switch (VAR_22->hdr_type) {
 case 128:
  if (VAR_23 == VAR_6)
   goto bad;
  FUNC_18(VAR_22);
  FUNC_14(VAR_22, 6, VAR_13);

  FUNC_19(VAR_22, &VAR_22->subsystem_vendor, &VAR_22->subsystem_device);







  if (VAR_23 == VAR_9) {
   u8 VAR_29;
   FUNC_16(VAR_22, VAR_8, &VAR_29);
   if ((VAR_29 & 1) == 0) {
    VAR_27.start = 0x1F0;
    VAR_27.end = 0x1F7;
    VAR_28 = &VAR_22->resource[0];
    VAR_28->flags = VAR_1;
    FUNC_21(VAR_22->bus, VAR_28, &VAR_27);
    FUNC_12(VAR_22, "legacy IDE quirk: reg 0x10: %pR\n",
      VAR_28);
    VAR_27.start = 0x3F6;
    VAR_27.end = 0x3F6;
    VAR_28 = &VAR_22->resource[1];
    VAR_28->flags = VAR_1;
    FUNC_21(VAR_22->bus, VAR_28, &VAR_27);
    FUNC_12(VAR_22, "legacy IDE quirk: reg 0x14: %pR\n",
      VAR_28);
   }
   if ((VAR_29 & 4) == 0) {
    VAR_27.start = 0x170;
    VAR_27.end = 0x177;
    VAR_28 = &VAR_22->resource[2];
    VAR_28->flags = VAR_1;
    FUNC_21(VAR_22->bus, VAR_28, &VAR_27);
    FUNC_12(VAR_22, "legacy IDE quirk: reg 0x18: %pR\n",
      VAR_28);
    VAR_27.start = 0x376;
    VAR_27.end = 0x376;
    VAR_28 = &VAR_22->resource[3];
    VAR_28->flags = VAR_1;
    FUNC_21(VAR_22->bus, VAR_28, &VAR_27);
    FUNC_12(VAR_22, "legacy IDE quirk: reg 0x1c: %pR\n",
      VAR_28);
   }
  }
  break;

 case 130:





  FUNC_18(VAR_22);
  VAR_22->transparent = ((VAR_22->class & 0xff) == 1);
  FUNC_14(VAR_22, 2, VAR_14);
  FUNC_15(VAR_22);
  FUNC_22(VAR_22);
  VAR_26 = FUNC_9(VAR_22, VAR_2);
  if (VAR_26) {
   FUNC_17(VAR_22, VAR_26 + VAR_16, &VAR_22->subsystem_vendor);
   FUNC_17(VAR_22, VAR_26 + VAR_15, &VAR_22->subsystem_device);
  }
  break;

 case 129:
  if (VAR_23 != VAR_5)
   goto bad;
  FUNC_18(VAR_22);
  FUNC_14(VAR_22, 1, 0);
  FUNC_17(VAR_22, VAR_4, &VAR_22->subsystem_vendor);
  FUNC_17(VAR_22, VAR_3, &VAR_22->subsystem_device);
  break;

 default:
  FUNC_8(VAR_22, "unknown header type %02x, ignoring device\n",
   VAR_22->hdr_type);
  return -VAR_0;

 bad:
  FUNC_8(VAR_22, "ignoring class %#08x (doesn't match header type %02x)\n",
   VAR_22->class, VAR_22->hdr_type);
  VAR_22->class = VAR_7 << 8;
 }


 return 0;
}
