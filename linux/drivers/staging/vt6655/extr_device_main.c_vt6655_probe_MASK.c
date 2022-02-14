
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int interface_modes; int rts_threshold; int frag_threshold; } ;
struct vnt_private {int memaddr; int byRFType; struct ieee80211_hw* hw; int PortOffset; int abyCurrentNetAddr; int interrupt_work; void* ioaddr; int lock; struct pci_dev* pcid; } ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;
struct ieee80211_hw {int max_signal; struct wiphy* wiphy; struct vnt_private* priv; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct vnt_private*) ;
 int FUNC_4 (struct vnt_private*) ;
 int FUNC_5 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_6 (struct ieee80211_hw*,int *) ;
 int VAR_15 ;
 int FUNC_7 (int ,int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_8 (int *,char*,int) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *,char*,...) ;
 int FUNC_11 (struct vnt_private*) ;
 int FUNC_12 (struct vnt_private*) ;
 int FUNC_13 (struct vnt_private*) ;
 int FUNC_14 (struct vnt_private*) ;
 scalar_t__ FUNC_15 (int *,int ) ;
 struct ieee80211_hw* FUNC_16 (int,int *) ;
 int FUNC_17 (struct ieee80211_hw*,int ) ;
 int FUNC_18 (int,int) ;
 scalar_t__ FUNC_19 (struct pci_dev*) ;
 int FUNC_20 (struct pci_dev*,int ) ;
 void* FUNC_21 (struct pci_dev*,int) ;
 int FUNC_22 (struct pci_dev*,struct vnt_private*) ;
 int FUNC_23 (struct pci_dev*) ;
 int FUNC_24 (int *) ;
 scalar_t__ FUNC_25 (struct vnt_private*) ;
 int VAR_18 ;
 int VAR_19 ;

__attribute__((used)) static int
FUNC_26(struct pci_dev *VAR_20, const struct pci_device_id *VAR_21)
{
 struct vnt_private *VAR_22;
 struct ieee80211_hw *VAR_23;
 struct wiphy *VAR_24;
 int VAR_25;

 FUNC_10(&VAR_20->dev,
     "%s Ver. %s\n", VAR_0, VAR_2);

 FUNC_10(&VAR_20->dev,
     "Copyright (c) 2003 VIA Networking Technologies, Inc.\n");

 VAR_23 = FUNC_16(sizeof(*VAR_22), &VAR_19);
 if (!VAR_23) {
  FUNC_9(&VAR_20->dev, "could not register ieee80211_hw\n");
  return -VAR_5;
 }

 VAR_22 = VAR_23->priv;
 VAR_22->pcid = VAR_20;

 FUNC_24(&VAR_22->lock);

 VAR_22->hw = VAR_23;

 FUNC_6(VAR_22->hw, &VAR_20->dev);

 if (FUNC_19(VAR_20)) {
  FUNC_11(VAR_22);
  return -VAR_4;
 }

 FUNC_8(&VAR_20->dev,
  "Before get pci_info memaddr is %x\n", VAR_22->memaddr);

 FUNC_23(VAR_20);

 VAR_22->memaddr = FUNC_21(VAR_20, 0);
 VAR_22->ioaddr = FUNC_21(VAR_20, 1);
 VAR_22->PortOffset = FUNC_18(VAR_22->memaddr & VAR_10,
       256);
 if (!VAR_22->PortOffset) {
  FUNC_9(&VAR_20->dev, ": Failed to IO remapping ..\n");
  FUNC_11(VAR_22);
  return -VAR_4;
 }

 VAR_25 = FUNC_20(VAR_20, VAR_1);
 if (VAR_25) {
  FUNC_9(&VAR_20->dev, ": Failed to find PCI device\n");
  FUNC_11(VAR_22);
  return -VAR_4;
 }

 if (FUNC_15(&VAR_20->dev, FUNC_1(32))) {
  FUNC_9(&VAR_20->dev, ": Failed to set dma 32 bit mask\n");
  FUNC_11(VAR_22);
  return -VAR_4;
 }

 FUNC_2(&VAR_22->interrupt_work, VAR_18);


 if (!FUNC_3(VAR_22)) {
  FUNC_9(&VAR_20->dev, ": Failed to access MAC hardware..\n");
  FUNC_11(VAR_22);
  return -VAR_4;
 }

 FUNC_4(VAR_22);
 FUNC_5(VAR_22->PortOffset, VAR_22->abyCurrentNetAddr);


 VAR_22->byRFType = FUNC_7(VAR_22->PortOffset, VAR_3);
 VAR_22->byRFType &= VAR_12;

 FUNC_8(&VAR_20->dev, "RF Type = %x\n", VAR_22->byRFType);

 FUNC_12(VAR_22);
 FUNC_14(VAR_22);

 VAR_24 = VAR_22->hw->wiphy;

 VAR_24->frag_threshold = VAR_6;
 VAR_24->rts_threshold = VAR_13;
 VAR_24->interface_modes = FUNC_0(VAR_9) |
  FUNC_0(VAR_7) | FUNC_0(VAR_8);

 FUNC_17(VAR_22->hw, VAR_17);
 FUNC_17(VAR_22->hw, VAR_15);
 FUNC_17(VAR_22->hw, VAR_14);
 FUNC_17(VAR_22->hw, VAR_11);
 FUNC_17(VAR_22->hw, VAR_16);

 VAR_22->hw->max_signal = 100;

 if (FUNC_25(VAR_22)) {
  FUNC_11(VAR_22);
  return -VAR_4;
 }

 FUNC_13(VAR_22);
 FUNC_22(VAR_20, VAR_22);

 return 0;
}
