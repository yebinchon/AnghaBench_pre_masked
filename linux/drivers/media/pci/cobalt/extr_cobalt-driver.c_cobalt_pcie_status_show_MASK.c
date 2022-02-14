
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct pci_dev {TYPE_1__* bus; } ;
struct cobalt {struct pci_dev* pci_dev; } ;
struct TYPE_2__ {struct pci_dev* self; } ;


 int VAR_0 ;
 int VAR_1 ;
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
 int VAR_13 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,int ,int*) ;
 int FUNC_5 (struct pci_dev*,int ,int*) ;

void FUNC_6(struct cobalt *VAR_14)
{
 struct pci_dev *VAR_15 = VAR_14->pci_dev;
 struct pci_dev *VAR_16 = VAR_14->pci_dev->bus->self;
 u32 VAR_17;
 u16 VAR_18, VAR_19;

 if (!FUNC_3(VAR_15) || !FUNC_3(VAR_16))
  return;


 FUNC_4(VAR_15, VAR_0, &VAR_17);
 FUNC_5(VAR_15, VAR_2, &VAR_19);
 FUNC_5(VAR_15, VAR_5, &VAR_18);
 FUNC_0("PCIe device capability 0x%08x: Max payload %d\n",
      VAR_17, FUNC_2(VAR_17 & VAR_1));
 FUNC_0("PCIe device control 0x%04x: Max payload %d. Max read request %d\n",
      VAR_19,
      FUNC_2((VAR_19 & VAR_3) >> 5),
      FUNC_2((VAR_19 & VAR_4) >> 12));
 FUNC_0("PCIe device status 0x%04x\n", VAR_18);


 FUNC_4(VAR_15, VAR_6, &VAR_17);
 FUNC_5(VAR_15, VAR_8, &VAR_19);
 FUNC_5(VAR_15, VAR_9, &VAR_18);
 FUNC_0("PCIe link capability 0x%08x: %s per lane and %u lanes\n",
   VAR_17, FUNC_1(VAR_17),
   (VAR_17 & VAR_7) >> 4);
 FUNC_0("PCIe link control 0x%04x\n", VAR_19);
 FUNC_0("PCIe link status 0x%04x: %s per lane and %u lanes\n",
      VAR_18, FUNC_1(VAR_18),
      (VAR_18 & VAR_10) >> 4);


 FUNC_4(VAR_16, VAR_6, &VAR_17);
 FUNC_0("PCIe bus link capability 0x%08x: %s per lane and %u lanes\n",
   VAR_17, FUNC_1(VAR_17),
   (VAR_17 & VAR_7) >> 4);


 FUNC_4(VAR_15, VAR_11, &VAR_17);
 FUNC_5(VAR_15, VAR_12, &VAR_19);
 FUNC_5(VAR_15, VAR_13, &VAR_18);
 FUNC_0("PCIe slot capability 0x%08x\n", VAR_17);
 FUNC_0("PCIe slot control 0x%04x\n", VAR_19);
 FUNC_0("PCIe slot status 0x%04x\n", VAR_18);
}
