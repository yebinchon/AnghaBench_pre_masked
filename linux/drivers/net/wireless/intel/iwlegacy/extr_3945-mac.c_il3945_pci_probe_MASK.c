
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pci_device_id {scalar_t__ driver_data; } ;
struct TYPE_6__ {int kobj; } ;
struct pci_dev {int irq; TYPE_3__ dev; } ;
struct TYPE_5__ {int rfkill_poll; } ;
struct il_priv {unsigned long long hw_base; struct ieee80211_hw* hw; struct pci_dev* pci_dev; int * workqueue; TYPE_2__ _3945; TYPE_1__* bands; int lock; struct il_cfg* cfg; scalar_t__ eeprom; int reg_lock; int inta_mask; int * debugfs_ops; int * ops; int cmd_queue; } ;
struct il_cfg {int name; } ;
struct il3945_eeprom {unsigned long long mac_address; } ;
struct ieee80211_hw {struct il_priv* priv; } ;
struct TYPE_4__ {int * channels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*) ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (struct ieee80211_hw*,TYPE_3__*) ;
 int FUNC_6 (struct ieee80211_hw*,unsigned long long) ;
 int FUNC_7 (struct il_priv*,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,struct il_priv*) ;
 struct ieee80211_hw* FUNC_10 (int,int *) ;
 int FUNC_11 (struct ieee80211_hw*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_12 (struct il_priv*) ;
 int FUNC_13 (struct il_priv*) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_14 (struct il_priv*) ;
 int FUNC_15 (struct il_priv*) ;
 int FUNC_16 (struct il_priv*) ;
 int FUNC_17 (struct il_priv*) ;
 int FUNC_18 (struct il_priv*,int ) ;
 int FUNC_19 (struct il_priv*) ;
 int FUNC_20 (struct il_priv*) ;
 int FUNC_21 (struct il_priv*) ;
 int FUNC_22 (struct il_priv*) ;
 int FUNC_23 (struct il_priv*) ;
 int FUNC_24 (struct il_priv*) ;
 int VAR_17 ;
 int FUNC_25 (struct il_priv*) ;
 int FUNC_26 (struct il_priv*,int *) ;
 int FUNC_27 (unsigned long long) ;
 int FUNC_28 (struct pci_dev*) ;
 int FUNC_29 (struct pci_dev*,int) ;
 int FUNC_30 (struct pci_dev*) ;
 scalar_t__ FUNC_31 (struct pci_dev*) ;
 int FUNC_32 (struct pci_dev*) ;
 unsigned long long FUNC_33 (struct pci_dev*,int ) ;
 int FUNC_34 (struct pci_dev*) ;
 int FUNC_35 (struct pci_dev*,int ) ;
 scalar_t__ FUNC_36 (struct pci_dev*,int ) ;
 int FUNC_37 (struct pci_dev*,int ) ;
 int FUNC_38 (struct pci_dev*,int ) ;
 int FUNC_39 (struct pci_dev*,struct il_priv*) ;
 int FUNC_40 (struct pci_dev*) ;
 int FUNC_41 (struct pci_dev*,int,int) ;
 int FUNC_42 (int *,int *,int) ;
 int FUNC_43 (int ,int ,int ,int ,struct il_priv*) ;
 int FUNC_44 (int *) ;
 int FUNC_45 (int *,unsigned long) ;
 int FUNC_46 (int *,unsigned long) ;
 int FUNC_47 (int *,int *) ;
 int FUNC_48 (int *,int *) ;

__attribute__((used)) static int
FUNC_49(struct pci_dev *VAR_18, const struct pci_device_id *VAR_19)
{
 int VAR_20 = 0;
 struct il_priv *VAR_21;
 struct ieee80211_hw *VAR_22;
 struct il_cfg *VAR_23 = (struct il_cfg *)(VAR_19->driver_data);
 struct il3945_eeprom *VAR_24;
 unsigned long VAR_25;





 VAR_22 = FUNC_10(sizeof(struct il_priv), &VAR_15);
 if (!VAR_22) {
  VAR_20 = -VAR_5;
  goto out;
 }
 VAR_21 = VAR_22->priv;
 VAR_21->hw = VAR_22;
 FUNC_5(VAR_22, &VAR_18->dev);

 VAR_21->cmd_queue = VAR_7;

 FUNC_1("*** LOAD DRIVER ***\n");
 VAR_21->cfg = VAR_23;
 VAR_21->ops = &VAR_16;



 VAR_21->pci_dev = VAR_18;
 VAR_21->inta_mask = VAR_0;




 FUNC_29(VAR_18,
          VAR_11 | VAR_12 |
          VAR_10);

 if (FUNC_31(VAR_18)) {
  VAR_20 = -VAR_4;
  goto out_ieee80211_free_hw;
 }

 FUNC_40(VAR_18);

 VAR_20 = FUNC_38(VAR_18, FUNC_0(32));
 if (!VAR_20)
  VAR_20 = FUNC_37(VAR_18, FUNC_0(32));
 if (VAR_20) {
  FUNC_4("No suitable DMA available.\n");
  goto out_pci_disable_device;
 }

 FUNC_39(VAR_18, VAR_21);
 VAR_20 = FUNC_35(VAR_18, VAR_3);
 if (VAR_20)
  goto out_pci_disable_device;




 VAR_21->hw_base = FUNC_33(VAR_18, 0);
 if (!VAR_21->hw_base) {
  VAR_20 = -VAR_4;
  goto out_pci_release_regions;
 }

 FUNC_1("pci_resource_len = 0x%08llx\n",
        (unsigned long long)FUNC_36(VAR_18, 0));
 FUNC_1("pci_resource_base = %p\n", VAR_21->hw_base);



 FUNC_41(VAR_18, 0x41, 0x00);




 FUNC_44(&VAR_21->reg_lock);
 FUNC_44(&VAR_21->lock);






 FUNC_7(VAR_21, VAR_1, VAR_2);






 VAR_20 = FUNC_21(VAR_21);
 if (VAR_20) {
  FUNC_2("Unable to init EEPROM\n");
  goto out_iounmap;
 }

 VAR_24 = (struct il3945_eeprom *)VAR_21->eeprom;
 FUNC_1("MAC address: %pM\n", VAR_24->mac_address);
 FUNC_6(VAR_21->hw, VAR_24->mac_address);





 VAR_20 = FUNC_12(VAR_21);
 if (VAR_20) {
  FUNC_2("failed to set hw settings\n");
  goto out_eeprom_free;
 }





 VAR_20 = FUNC_13(VAR_21);
 if (VAR_20) {
  FUNC_2("initializing driver failed\n");
  goto out_unset_hw_params;
 }

 FUNC_3("Detected Intel Wireless WiFi Link %s\n", VAR_21->cfg->name);





 FUNC_45(&VAR_21->lock, VAR_25);
 FUNC_19(VAR_21);
 FUNC_46(&VAR_21->lock, VAR_25);

 FUNC_32(VAR_21->pci_dev);

 VAR_20 = FUNC_43(VAR_21->pci_dev->irq, VAR_17, VAR_8, VAR_3, VAR_21);
 if (VAR_20) {
  FUNC_2("Error allocating IRQ %d\n", VAR_21->pci_dev->irq);
  goto out_disable_msi;
 }

 VAR_20 = FUNC_47(&VAR_18->dev.kobj, &VAR_13);
 if (VAR_20) {
  FUNC_2("failed to create sysfs device attributes\n");
  goto out_release_irq;
 }

 FUNC_26(VAR_21, &VAR_21->bands[VAR_9].channels[5]);
 FUNC_14(VAR_21);
 FUNC_15(VAR_21);
 FUNC_25(VAR_21);





 FUNC_22(VAR_21);

 VAR_20 = FUNC_16(VAR_21);
 if (VAR_20)
  goto out_remove_sysfs;

 FUNC_18(VAR_21, VAR_3);


 FUNC_42(VAR_21->workqueue, &VAR_21->_3945.rfkill_poll, 2 * VAR_6);

 return 0;

out_remove_sysfs:
 FUNC_8(VAR_21->workqueue);
 VAR_21->workqueue = ((void*)0);
 FUNC_48(&VAR_18->dev.kobj, &VAR_13);
out_release_irq:
 FUNC_9(VAR_21->pci_dev->irq, VAR_21);
out_disable_msi:
 FUNC_30(VAR_21->pci_dev);
 FUNC_24(VAR_21);
 FUNC_23(VAR_21);
out_unset_hw_params:
 FUNC_17(VAR_21);
out_eeprom_free:
 FUNC_20(VAR_21);
out_iounmap:
 FUNC_27(VAR_21->hw_base);
out_pci_release_regions:
 FUNC_34(VAR_18);
out_pci_disable_device:
 FUNC_28(VAR_18);
out_ieee80211_free_hw:
 FUNC_11(VAR_21->hw);
out:
 return VAR_20;
}
