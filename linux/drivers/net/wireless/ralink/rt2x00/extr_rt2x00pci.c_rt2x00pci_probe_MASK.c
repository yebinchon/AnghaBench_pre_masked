
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct rt2x00_ops {int name; int hw; } ;
struct TYPE_2__ {int rt; } ;
struct rt2x00_dev {TYPE_1__ chip; int name; int irq; struct ieee80211_hw* hw; struct rt2x00_ops const* ops; int * dev; } ;
struct pci_dev {int irq; int dev; } ;
struct ieee80211_hw {struct rt2x00_dev* priv; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 struct ieee80211_hw* FUNC_2 (int,int ) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 scalar_t__ FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*,int ,int *) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*,int ) ;
 int FUNC_12 (struct pci_dev*,struct ieee80211_hw*) ;
 int FUNC_13 (struct pci_dev*) ;
 scalar_t__ FUNC_14 (struct pci_dev*) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (struct rt2x00_dev*,int ) ;
 int FUNC_17 (struct rt2x00_dev*) ;
 int FUNC_18 (struct rt2x00_dev*) ;
 int FUNC_19 (struct rt2x00_dev*) ;

int FUNC_20(struct pci_dev *VAR_5, const struct rt2x00_ops *VAR_6)
{
 struct ieee80211_hw *VAR_7;
 struct rt2x00_dev *VAR_8;
 int VAR_9;
 u16 VAR_10;

 VAR_9 = FUNC_6(VAR_5);
 if (VAR_9) {
  FUNC_15("Enable device failed\n");
  return VAR_9;
 }

 VAR_9 = FUNC_11(VAR_5, FUNC_8(VAR_5));
 if (VAR_9) {
  FUNC_15("PCI request regions failed\n");
  goto exit_disable_device;
 }

 FUNC_13(VAR_5);

 if (FUNC_14(VAR_5))
  FUNC_15("MWI not available\n");

 if (FUNC_1(&VAR_5->dev, FUNC_0(32))) {
  FUNC_15("PCI DMA not supported\n");
  VAR_9 = -VAR_0;
  goto exit_release_regions;
 }

 VAR_7 = FUNC_2(sizeof(struct rt2x00_dev), VAR_6->hw);
 if (!VAR_7) {
  FUNC_15("Failed to allocate hardware\n");
  VAR_9 = -VAR_1;
  goto exit_release_regions;
 }

 FUNC_12(VAR_5, VAR_7);

 VAR_8 = VAR_7->priv;
 VAR_8->dev = &VAR_5->dev;
 VAR_8->ops = VAR_6;
 VAR_8->hw = VAR_7;
 VAR_8->irq = VAR_5->irq;
 VAR_8->name = VAR_6->name;

 if (FUNC_7(VAR_5))
  FUNC_16(VAR_8, VAR_4);
 else
  FUNC_16(VAR_8, VAR_3);

 VAR_9 = FUNC_18(VAR_8);
 if (VAR_9)
  goto exit_free_device;






 FUNC_9(VAR_5, VAR_2, &VAR_10);
 VAR_8->chip.rt = VAR_10;

 VAR_9 = FUNC_17(VAR_8);
 if (VAR_9)
  goto exit_free_reg;

 return 0;

exit_free_reg:
 FUNC_19(VAR_8);

exit_free_device:
 FUNC_3(VAR_7);

exit_release_regions:
 FUNC_4(VAR_5);
 FUNC_10(VAR_5);

exit_disable_device:
 FUNC_5(VAR_5);

 return VAR_9;
}
