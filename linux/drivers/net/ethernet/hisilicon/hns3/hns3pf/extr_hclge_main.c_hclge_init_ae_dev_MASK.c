
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct hnae3_ae_dev {scalar_t__ hw_err_reset_req; struct hclge_dev* priv; struct pci_dev* pdev; } ;
struct TYPE_3__ {scalar_t__ media_type; int mdio_bus; scalar_t__ phydev; } ;
struct TYPE_4__ {int io_base; TYPE_1__ mac; } ;
struct hclge_dev {TYPE_2__ hw; struct pci_dev* pdev; scalar_t__ last_reset_time; int misc_vector; int reset_timer; int mbx_service_task; int rst_service_task; int service_task; int mac_tnl_log; int fd_rule_lock; int vport_cfg_mutex; int vport_lock; scalar_t__ mps; int reset_level; int reset_type; struct hnae3_ae_dev* ae_dev; } ;
typedef enum hnae3_reset_type { ____Placeholder_hnae3_reset_type } hnae3_reset_type ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_11 ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *,char*,int ) ;
 struct hclge_dev* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (struct hclge_dev*) ;
 int FUNC_7 (struct hclge_dev*) ;
 int FUNC_8 (struct hclge_dev*) ;
 int FUNC_9 (struct hclge_dev*) ;
 int FUNC_10 (struct hclge_dev*) ;
 int FUNC_11 (struct hclge_dev*) ;
 int FUNC_12 (struct hclge_dev*) ;
 int FUNC_13 (struct hclge_dev*,int) ;
 int FUNC_14 (struct hclge_dev*,int ,int ) ;
 int FUNC_15 (struct hclge_dev*) ;
 int FUNC_16 (struct hclge_dev*) ;
 int FUNC_17 (int *,int) ;
 int FUNC_18 (struct hclge_dev*) ;
 int FUNC_19 (struct hnae3_ae_dev*,scalar_t__*) ;
 int FUNC_20 (struct hnae3_ae_dev*) ;
 int FUNC_21 (struct hclge_dev*) ;
 int FUNC_22 (struct hclge_dev*) ;
 int FUNC_23 (struct hclge_dev*) ;
 int FUNC_24 (struct hclge_dev*) ;
 int FUNC_25 (struct hclge_dev*) ;
 int FUNC_26 (struct hclge_dev*) ;
 int VAR_12 ;
 int FUNC_27 (struct hclge_dev*) ;
 int FUNC_28 (struct hclge_dev*) ;
 int FUNC_29 (struct hclge_dev*) ;
 int FUNC_30 (struct hclge_dev*) ;
 int FUNC_31 (struct hclge_dev*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_32 (struct hclge_dev*) ;
 int FUNC_33 (struct hclge_dev*) ;
 int VAR_15 ;
 int FUNC_34 (struct hnae3_ae_dev*,int) ;
 int FUNC_35 (struct hclge_dev*) ;
 int FUNC_36 (struct hclge_dev*) ;
 int FUNC_37 (struct hclge_dev*) ;
 scalar_t__ VAR_16 ;
 int FUNC_38 (int ) ;
 int FUNC_39 (int *,scalar_t__) ;
 int FUNC_40 (int *) ;
 int FUNC_41 (struct pci_dev*) ;
 int FUNC_42 (struct pci_dev*) ;
 int FUNC_43 (struct pci_dev*) ;
 int FUNC_44 (struct pci_dev*) ;
 int FUNC_45 (struct pci_dev*,int ) ;
 int FUNC_46 (int *) ;
 int FUNC_47 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_48(struct hnae3_ae_dev *VAR_17)
{
 struct pci_dev *VAR_18 = VAR_17->pdev;
 struct hclge_dev *VAR_19;
 int VAR_20;

 VAR_19 = FUNC_5(&VAR_18->dev, sizeof(*VAR_19), VAR_3);
 if (!VAR_19) {
  VAR_20 = -VAR_0;
  goto out;
 }

 VAR_19->pdev = VAR_18;
 VAR_19->ae_dev = VAR_17;
 VAR_19->reset_type = VAR_10;
 VAR_19->reset_level = VAR_8;
 VAR_17->priv = VAR_19;
 VAR_19->mps = VAR_2 + VAR_1 + 2 * VAR_11;

 FUNC_40(&VAR_19->vport_lock);
 FUNC_40(&VAR_19->vport_cfg_mutex);
 FUNC_46(&VAR_19->fd_rule_lock);

 VAR_20 = FUNC_31(VAR_19);
 if (VAR_20) {
  FUNC_3(&VAR_18->dev, "PCI init failed\n");
  goto out;
 }


 VAR_20 = FUNC_11(VAR_19);
 if (VAR_20) {
  FUNC_3(&VAR_18->dev, "Cmd queue init failed, ret = %d.\n", VAR_20);
  goto err_pci_uninit;
 }


 VAR_20 = FUNC_10(VAR_19);
 if (VAR_20)
  goto err_cmd_uninit;

 VAR_20 = FUNC_18(VAR_19);
 if (VAR_20) {
  FUNC_3(&VAR_18->dev, "get hw capability error, ret = %d.\n",
   VAR_20);
  goto err_cmd_uninit;
 }

 VAR_20 = FUNC_15(VAR_19);
 if (VAR_20) {
  FUNC_3(&VAR_18->dev, "Configure dev error, ret = %d.\n", VAR_20);
  goto err_cmd_uninit;
 }

 VAR_20 = FUNC_22(VAR_19);
 if (VAR_20) {
  FUNC_3(&VAR_18->dev, "Init MSI/MSI-X error, ret = %d.\n", VAR_20);
  goto err_cmd_uninit;
 }

 VAR_20 = FUNC_29(VAR_19);
 if (VAR_20) {
  FUNC_3(&VAR_18->dev,
   "Misc IRQ(vector0) init error, ret = %d.\n",
   VAR_20);
  goto err_msi_uninit;
 }

 VAR_20 = FUNC_6(VAR_19);
 if (VAR_20) {
  FUNC_3(&VAR_18->dev, "Allocate TQPs error, ret = %d.\n", VAR_20);
  goto err_msi_irq_uninit;
 }

 VAR_20 = FUNC_7(VAR_19);
 if (VAR_20) {
  FUNC_3(&VAR_18->dev, "Allocate vport error, ret = %d.\n", VAR_20);
  goto err_msi_irq_uninit;
 }

 VAR_20 = FUNC_27(VAR_19);
 if (VAR_20) {
  FUNC_3(&VAR_18->dev, "Map tqp error, ret = %d.\n", VAR_20);
  goto err_msi_irq_uninit;
 }

 if (VAR_19->hw.mac.media_type == VAR_9) {
  VAR_20 = FUNC_26(VAR_19);
  if (VAR_20) {
   FUNC_3(&VAR_19->pdev->dev,
    "mdio config fail ret=%d\n", VAR_20);
   goto err_msi_irq_uninit;
  }
 }

 VAR_20 = FUNC_23(VAR_19);
 if (VAR_20) {
  FUNC_3(&VAR_18->dev, "umv space init error, ret=%d.\n", VAR_20);
  goto err_mdiobus_unreg;
 }

 VAR_20 = FUNC_25(VAR_19);
 if (VAR_20) {
  FUNC_3(&VAR_18->dev, "Mac init error, ret = %d\n", VAR_20);
  goto err_mdiobus_unreg;
 }

 VAR_20 = FUNC_14(VAR_19, VAR_7, VAR_6);
 if (VAR_20) {
  FUNC_3(&VAR_18->dev, "Enable tso fail, ret =%d\n", VAR_20);
  goto err_mdiobus_unreg;
 }

 VAR_20 = FUNC_13(VAR_19, 1);
 if (VAR_20)
  goto err_mdiobus_unreg;

 VAR_20 = FUNC_24(VAR_19);
 if (VAR_20) {
  FUNC_3(&VAR_18->dev, "VLAN init fail, ret =%d\n", VAR_20);
  goto err_mdiobus_unreg;
 }

 VAR_20 = FUNC_36(VAR_19);
 if (VAR_20) {
  FUNC_3(&VAR_18->dev, "tm schd init fail, ret =%d\n", VAR_20);
  goto err_mdiobus_unreg;
 }

 FUNC_32(VAR_19);
 VAR_20 = FUNC_33(VAR_19);
 if (VAR_20) {
  FUNC_3(&VAR_18->dev, "Rss init fail, ret =%d\n", VAR_20);
  goto err_mdiobus_unreg;
 }

 VAR_20 = FUNC_37(VAR_19);
 if (VAR_20) {
  FUNC_3(&VAR_18->dev, "manager table init fail, ret =%d\n", VAR_20);
  goto err_mdiobus_unreg;
 }

 VAR_20 = FUNC_21(VAR_19);
 if (VAR_20) {
  FUNC_3(&VAR_18->dev,
   "fd table init fail, ret=%d\n", VAR_20);
  goto err_mdiobus_unreg;
 }

 FUNC_1(VAR_19->mac_tnl_log);

 FUNC_16(VAR_19);

 FUNC_47(&VAR_19->reset_timer, VAR_14, 0);
 FUNC_0(&VAR_19->service_task, VAR_15);
 FUNC_2(&VAR_19->rst_service_task, VAR_13);
 FUNC_2(&VAR_19->mbx_service_task, VAR_12);




 FUNC_28(VAR_19);

 FUNC_8(VAR_19);
 FUNC_9(VAR_19);


 FUNC_20(VAR_17);




 if (VAR_17->hw_err_reset_req) {
  enum hnae3_reset_type VAR_21;

  VAR_21 = FUNC_19(VAR_17,
          &VAR_17->hw_err_reset_req);
  FUNC_34(VAR_17, VAR_21);
  FUNC_39(&VAR_19->reset_timer, VAR_16 + VAR_5);
 }


 FUNC_17(&VAR_19->misc_vector, 1);

 FUNC_35(VAR_19);
 VAR_19->last_reset_time = VAR_16;

 FUNC_4(&VAR_19->pdev->dev, "%s driver initialization finished.\n",
   VAR_4);

 return 0;

err_mdiobus_unreg:
 if (VAR_19->hw.mac.phydev)
  FUNC_38(VAR_19->hw.mac.mdio_bus);
err_msi_irq_uninit:
 FUNC_30(VAR_19);
err_msi_uninit:
 FUNC_43(VAR_18);
err_cmd_uninit:
 FUNC_12(VAR_19);
err_pci_uninit:
 FUNC_45(VAR_18, VAR_19->hw.io_base);
 FUNC_41(VAR_18);
 FUNC_44(VAR_18);
 FUNC_42(VAR_18);
out:
 return VAR_20;
}
