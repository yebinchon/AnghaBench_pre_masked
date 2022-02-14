
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; int irq; scalar_t__ pm_cap; } ;
struct net_device {int features; int * dev_addr; int max_mtu; int min_mtu; int watchdog_timeo; int irq; int * ethtool_ops; int * netdev_ops; } ;
struct TYPE_6__ {scalar_t__ expires; } ;
struct TYPE_5__ {int ipg_state; int ipg; TYPE_3__ ipg_timer; } ;
struct TYPE_4__ {int phy_id; int mdio_write; int mdio_read; struct net_device* dev; } ;
struct amd8111e_priv {int options; int ext_phy_id; int ext_phy_addr; scalar_t__ mmio; TYPE_2__ ipg_data; TYPE_1__ mii_if; int napi; int ext_phy_option; int lock; scalar_t__ pm_cap; struct net_device* amd8111e_net_dev; struct pci_dev* pci_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_1 (struct net_device*,int *) ;
 struct net_device* FUNC_2 (int) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_3 (struct net_device*) ;
 int VAR_22 ;
 int FUNC_4 (struct net_device*) ;
 size_t VAR_23 ;
 int VAR_24 ;
 scalar_t__* VAR_25 ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*,...) ;
 scalar_t__ FUNC_7 (int *,unsigned long,unsigned long) ;
 scalar_t__* VAR_26 ;
 int FUNC_8 (struct net_device*) ;
 scalar_t__ VAR_27 ;
 struct amd8111e_priv* FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*,int *,int ,int) ;
 int VAR_28 ;
 int FUNC_11 (struct pci_dev*) ;
 int FUNC_12 (struct pci_dev*) ;
 int FUNC_13 (struct pci_dev*) ;
 int FUNC_14 (struct pci_dev*,int ) ;
 int FUNC_15 (struct pci_dev*,int ) ;
 unsigned long FUNC_16 (struct pci_dev*,int ) ;
 unsigned long FUNC_17 (struct pci_dev*,int ) ;
 scalar_t__ FUNC_18 (struct pci_dev*,int ) ;
 int FUNC_19 (struct pci_dev*,struct net_device*) ;
 int FUNC_20 (struct pci_dev*) ;
 int FUNC_21 (scalar_t__) ;
 int FUNC_22 (scalar_t__) ;
 int FUNC_23 (struct net_device*) ;
 int * VAR_29 ;
 int FUNC_24 (int *) ;
 int FUNC_25 (TYPE_3__*,int ,int ) ;

__attribute__((used)) static int FUNC_26(struct pci_dev *VAR_30,
      const struct pci_device_id *VAR_31)
{
 int VAR_32, VAR_33;
 unsigned long VAR_34,VAR_35;
 struct amd8111e_priv *VAR_36;
 struct net_device *VAR_37;

 VAR_32 = FUNC_12(VAR_30);
 if(VAR_32){
  FUNC_5(&VAR_30->dev, "Cannot enable new PCI device\n");
  return VAR_32;
 }

 if(!(FUNC_15(VAR_30, 0) & VAR_9)){
  FUNC_5(&VAR_30->dev, "Cannot find PCI base address\n");
  VAR_32 = -VAR_6;
  goto err_disable_pdev;
 }

 VAR_32 = FUNC_14(VAR_30, VAR_11);
 if(VAR_32){
  FUNC_5(&VAR_30->dev, "Cannot obtain PCI resources\n");
  goto err_disable_pdev;
 }

 FUNC_20(VAR_30);


 if (!VAR_30->pm_cap) {
  FUNC_5(&VAR_30->dev, "No Power Management capability\n");
  VAR_32 = -VAR_6;
  goto err_free_reg;
 }


 if (FUNC_18(VAR_30, FUNC_0(32)) < 0) {
  FUNC_5(&VAR_30->dev, "DMA not supported\n");
  VAR_32 = -VAR_6;
  goto err_free_reg;
 }

 VAR_34 = FUNC_17(VAR_30, 0);
 VAR_35 = FUNC_16(VAR_30, 0);

 VAR_37 = FUNC_2(sizeof(struct amd8111e_priv));
 if (!VAR_37) {
  VAR_32 = -VAR_7;
  goto err_free_reg;
 }

 FUNC_1(VAR_37, &VAR_30->dev);





 VAR_36 = FUNC_9(VAR_37);
 VAR_36->pci_dev = VAR_30;
 VAR_36->amd8111e_net_dev = VAR_37;
 VAR_36->pm_cap = VAR_30->pm_cap;

 FUNC_24(&VAR_36->lock);

 VAR_36->mmio = FUNC_7(&VAR_30->dev, VAR_34, VAR_35);
 if (!VAR_36->mmio) {
  FUNC_5(&VAR_30->dev, "Cannot map device registers\n");
  VAR_32 = -VAR_7;
  goto err_free_dev;
 }


 for (VAR_33 = 0; VAR_33 < VAR_8; VAR_33++)
  VAR_37->dev_addr[VAR_33] = FUNC_21(VAR_36->mmio + VAR_17 + VAR_33);


 VAR_36->ext_phy_option = VAR_29[VAR_23];
 if(VAR_25[VAR_23])
  VAR_36->options |= VAR_16;
 if(VAR_26[VAR_23++])
  VAR_36->options |= VAR_15;



 VAR_37->netdev_ops = &VAR_21;
 VAR_37->ethtool_ops = &VAR_28;
 VAR_37->irq =VAR_30->irq;
 VAR_37->watchdog_timeo = VAR_2;
 VAR_37->min_mtu = VAR_1;
 VAR_37->max_mtu = VAR_0;
 FUNC_10(VAR_37, &VAR_36->napi, VAR_22, 32);





 FUNC_3(VAR_37);


 VAR_36->mii_if.dev = VAR_37;
 VAR_36->mii_if.mdio_read = VAR_19;
 VAR_36->mii_if.mdio_write = VAR_20;
 VAR_36->mii_if.phy_id = VAR_36->ext_phy_addr;


 FUNC_4(VAR_37);


 VAR_32 = FUNC_23(VAR_37);
 if (VAR_32) {
  FUNC_5(&VAR_30->dev, "Cannot register net device\n");
  goto err_free_dev;
 }

 FUNC_19(VAR_30, VAR_37);


 if(VAR_36->options & VAR_15){
  FUNC_25(&VAR_36->ipg_data.ipg_timer, VAR_18, 0);
  VAR_36->ipg_data.ipg_timer.expires = VAR_27 +
       VAR_10;
  VAR_36->ipg_data.ipg = VAR_5;
  VAR_36->ipg_data.ipg_state = VAR_4;
 }


     VAR_24 = (FUNC_22(VAR_36->mmio + VAR_3) & 0xf0000000)>>28;
 FUNC_6(&VAR_30->dev, "AMD-8111e Driver Version: %s\n", VAR_12);
 FUNC_6(&VAR_30->dev, "[ Rev %x ] PCI 10/100BaseT Ethernet %pM\n",
   VAR_24, VAR_37->dev_addr);
 if (VAR_36->ext_phy_id)
  FUNC_6(&VAR_30->dev, "Found MII PHY ID 0x%08x at address 0x%02x\n",
    VAR_36->ext_phy_id, VAR_36->ext_phy_addr);
 else
  FUNC_6(&VAR_30->dev, "Couldn't detect MII PHY, assuming address 0x01\n");

     return 0;

err_free_dev:
 FUNC_8(VAR_37);

err_free_reg:
 FUNC_13(VAR_30);

err_disable_pdev:
 FUNC_11(VAR_30);
 return VAR_32;

}
