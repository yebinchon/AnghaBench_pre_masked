
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int u32 ;
struct pci_device_id {int dummy; } ;
struct pci_dev {scalar_t__ revision; int dev; int devfn; } ;
struct TYPE_2__ {int pci_func; scalar_t__ revision_id; int board_type; int port_type; int mem_lock; int crb_lock; } ;
struct netxen_adapter {int portnum; int need_fw_reset; int physical_port; struct net_device* netdev; struct pci_dev* pdev; TYPE_1__ ahw; int ip_list; int mac_list; int tx_clean_lock; } ;
struct net_device {int name; int max_mtu; scalar_t__ min_mtu; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;




 int FUNC_2 (struct netxen_adapter*,int ) ;
 int FUNC_3 (struct netxen_adapter*,int ,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct net_device*,int *) ;
 int VAR_9 ;
 struct net_device* FUNC_8 (int) ;
 int FUNC_9 (int *,char*,...) ;
 int FUNC_10 (int *,char*,int ) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (int ) ;
 struct netxen_adapter* FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct netxen_adapter*) ;
 int FUNC_15 (struct netxen_adapter*) ;
 int FUNC_16 (struct netxen_adapter*) ;
 int FUNC_17 (struct netxen_adapter*) ;
 int VAR_10 ;
 int FUNC_18 (struct netxen_adapter*) ;
 int FUNC_19 (struct netxen_adapter*) ;
 int VAR_11 ;
 int FUNC_20 (struct netxen_adapter*) ;
 int FUNC_21 (struct netxen_adapter*) ;
 int FUNC_22 (struct netxen_adapter*,int ,int ) ;
 int FUNC_23 (struct netxen_adapter*) ;
 int FUNC_24 (struct netxen_adapter*,struct net_device*) ;
 int FUNC_25 (struct netxen_adapter*) ;
 int FUNC_26 (struct netxen_adapter*) ;
 int FUNC_27 (struct netxen_adapter*) ;
 int FUNC_28 (struct netxen_adapter*) ;
 int FUNC_29 (struct pci_dev*) ;
 int FUNC_30 (struct pci_dev*) ;
 int FUNC_31 (struct pci_dev*) ;
 int FUNC_32 (struct pci_dev*) ;
 int FUNC_33 (struct pci_dev*,int ) ;
 int FUNC_34 (struct pci_dev*,int ) ;
 int FUNC_35 (struct pci_dev*,struct netxen_adapter*) ;
 int FUNC_36 (struct pci_dev*) ;
 int FUNC_37 (char*,int ,scalar_t__,scalar_t__) ;
 int FUNC_38 (int *) ;
 int FUNC_39 (int *) ;

__attribute__((used)) static int
FUNC_40(struct pci_dev *VAR_12, const struct pci_device_id *VAR_13)
{
 struct net_device *VAR_14 = ((void*)0);
 struct netxen_adapter *VAR_15 = ((void*)0);
 int VAR_16 = 0, VAR_17;
 int VAR_18 = FUNC_6(VAR_12->devfn);
 uint8_t VAR_19;
 u32 VAR_20;

 if (VAR_12->revision >= VAR_5 && VAR_12->revision <= VAR_6) {
  FUNC_37("%s: chip revisions between 0x%x-0x%x will not be enabled\n",
   FUNC_12(VAR_9), VAR_5, VAR_6);
  return -VAR_0;
 }

 if ((VAR_17 = FUNC_30(VAR_12)))
  return VAR_17;

 if (!(FUNC_34(VAR_12, 0) & VAR_3)) {
  VAR_17 = -VAR_0;
  goto err_out_disable_pdev;
 }

 if ((VAR_17 = FUNC_33(VAR_12, VAR_11)))
  goto err_out_disable_pdev;

 if (FUNC_5(VAR_12->revision))
  FUNC_31(VAR_12);

 FUNC_36(VAR_12);

 VAR_14 = FUNC_8(sizeof(struct netxen_adapter));
 if(!VAR_14) {
  VAR_17 = -VAR_1;
  goto err_out_free_res;
 }

 FUNC_7(VAR_14, &VAR_12->dev);

 VAR_15 = FUNC_13(VAR_14);
 VAR_15->netdev = VAR_14;
 VAR_15->pdev = VAR_12;
 VAR_15->ahw.pci_func = VAR_18;

 VAR_19 = VAR_12->revision;
 VAR_15->ahw.revision_id = VAR_19;

 FUNC_38(&VAR_15->ahw.crb_lock);
 FUNC_39(&VAR_15->ahw.mem_lock);

 FUNC_39(&VAR_15->tx_clean_lock);
 FUNC_1(&VAR_15->mac_list);
 FUNC_1(&VAR_15->ip_list);

 VAR_17 = FUNC_25(VAR_15);
 if (VAR_17)
  goto err_out_free_netdev;


 VAR_15->portnum = VAR_18;

 VAR_17 = FUNC_20(VAR_15);
 if (VAR_17) {
  FUNC_9(&VAR_12->dev, "Error getting board config info.\n");
  goto err_out_iounmap;
 }






 switch (VAR_15->ahw.board_type) {
 case 130:
 case 131:
  if (VAR_18 >= 2)
   VAR_15->portnum = VAR_18 - 2;
  break;
 default:
  break;
 }

 VAR_17 = FUNC_14(VAR_15);
 if (VAR_17)
  goto err_out_iounmap;

 if (VAR_15->portnum == 0) {
  VAR_20 = FUNC_2(VAR_15, VAR_4);
  if (VAR_20 != 0xffffffff && VAR_20 != 0) {
   FUNC_3(VAR_15, VAR_4, 0);
   VAR_15->need_fw_reset = 1;
  }
 }

 VAR_17 = FUNC_26(VAR_15);
 if (VAR_17)
  goto err_out_decr_ref;




 VAR_15->physical_port = VAR_15->portnum;
 if (FUNC_4(VAR_15->ahw.revision_id)) {
  VAR_16 = FUNC_2(VAR_15, FUNC_0(VAR_15->portnum));
  if (VAR_16 != 0x55555555)
   VAR_15->physical_port = VAR_16;
 }


 VAR_14->min_mtu = 0;
 if (FUNC_5(VAR_15->ahw.revision_id))
  VAR_14->max_mtu = VAR_8;
 else
  VAR_14->max_mtu = VAR_7;

 FUNC_19(VAR_15);

 VAR_17 = FUNC_23(VAR_15);

 if (VAR_17) {
  FUNC_9(&VAR_15->pdev->dev,
   "Failed to setup interrupts, error = %d\n", VAR_17);
  goto err_out_disable_msi;
 }

 FUNC_21(VAR_15);

 VAR_17 = FUNC_24(VAR_15, VAR_14);
 if (VAR_17)
  goto err_out_disable_msi;

 FUNC_35(VAR_12, VAR_15);

 FUNC_22(VAR_15, VAR_10, VAR_2);

 switch (VAR_15->ahw.port_type) {
 case 129:
  FUNC_10(&VAR_15->pdev->dev, "%s: GbE port initialized\n",
    VAR_15->netdev->name);
  break;
 case 128:
  FUNC_10(&VAR_15->pdev->dev, "%s: XGbE port initialized\n",
    VAR_15->netdev->name);
  break;
 }

 FUNC_16(VAR_15);

 return 0;

err_out_disable_msi:
 FUNC_27(VAR_15);

 FUNC_17(VAR_15);

err_out_decr_ref:
 FUNC_28(VAR_15);

err_out_iounmap:
 FUNC_15(VAR_15);

err_out_free_netdev:
 FUNC_11(VAR_14);

err_out_free_res:
 FUNC_32(VAR_12);

err_out_disable_pdev:
 FUNC_29(VAR_12);
 return VAR_17;
}
