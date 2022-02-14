
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pci_device_id {int dummy; } ;
struct TYPE_6__ {scalar_t__ of_node; } ;
struct pci_dev {TYPE_2__ dev; } ;
struct net_device {int dummy; } ;
struct TYPE_5__ {int global; int port; } ;
struct enetc_si {int * ndev; TYPE_1__ hw; } ;
struct enetc_pf {int total_vfs; struct enetc_si* si; } ;
struct enetc_ndev_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct net_device* FUNC_0 (int,int ) ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (struct enetc_ndev_priv*) ;
 int FUNC_5 (struct enetc_ndev_priv*) ;
 int FUNC_6 (struct enetc_pf*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (struct enetc_ndev_priv*) ;
 int FUNC_8 (struct enetc_ndev_priv*) ;
 int FUNC_9 (struct enetc_si*) ;
 int FUNC_10 (struct enetc_ndev_priv*) ;
 int VAR_6 ;
 int FUNC_11 (struct enetc_ndev_priv*) ;
 int FUNC_12 (struct enetc_ndev_priv*) ;
 int FUNC_13 (struct pci_dev*,int ,int) ;
 int FUNC_14 (struct pci_dev*) ;
 int FUNC_15 (struct enetc_si*,struct net_device*,int *) ;
 struct enetc_pf* FUNC_16 (struct enetc_si*) ;
 int FUNC_17 (struct net_device*) ;
 struct enetc_ndev_priv* FUNC_18 (struct net_device*) ;
 int FUNC_19 (struct net_device*) ;
 int FUNC_20 (struct enetc_ndev_priv*,int ,struct net_device*,char*,int ,int ) ;
 int FUNC_21 (scalar_t__) ;
 struct enetc_si* FUNC_22 (struct pci_dev*) ;
 int FUNC_23 (struct pci_dev*) ;
 int VAR_7 ;
 int FUNC_24 (struct net_device*) ;

__attribute__((used)) static int FUNC_25(struct pci_dev *VAR_8,
     const struct pci_device_id *VAR_9)
{
 struct enetc_ndev_priv *VAR_10;
 struct net_device *VAR_11;
 struct enetc_si *VAR_12;
 struct enetc_pf *VAR_13;
 int VAR_14;

 if (VAR_8->dev.of_node && !FUNC_21(VAR_8->dev.of_node)) {
  FUNC_2(&VAR_8->dev, "device is disabled, skipping\n");
  return -VAR_1;
 }

 VAR_14 = FUNC_13(VAR_8, VAR_3, sizeof(*VAR_13));
 if (VAR_14) {
  FUNC_1(&VAR_8->dev, "PCI probing failed\n");
  return VAR_14;
 }

 VAR_12 = FUNC_22(VAR_8);
 if (!VAR_12->hw.port || !VAR_12->hw.global) {
  VAR_14 = -VAR_1;
  FUNC_1(&VAR_8->dev, "could not map PF space, probing a VF?\n");
  goto err_map_pf_space;
 }

 VAR_13 = FUNC_16(VAR_12);
 VAR_13->si = VAR_12;
 VAR_13->total_vfs = FUNC_23(VAR_8);

 FUNC_6(VAR_13);

 FUNC_9(VAR_12);

 VAR_11 = FUNC_0(sizeof(*VAR_10), VAR_0);
 if (!VAR_11) {
  VAR_14 = -VAR_2;
  FUNC_1(&VAR_8->dev, "netdev creation failed\n");
  goto err_alloc_netdev;
 }

 FUNC_15(VAR_12, VAR_11, &VAR_6);

 VAR_10 = FUNC_18(VAR_11);

 FUNC_10(VAR_10);

 VAR_14 = FUNC_5(VAR_10);
 if (VAR_14) {
  FUNC_1(&VAR_8->dev, "SI resource alloc failed\n");
  goto err_alloc_si_res;
 }

 VAR_14 = FUNC_4(VAR_10);
 if (VAR_14) {
  FUNC_1(&VAR_8->dev, "MSIX alloc failed\n");
  goto err_alloc_msix;
 }

 VAR_14 = FUNC_11(VAR_10);
 if (VAR_14)
  FUNC_3(&VAR_8->dev, "Fallback to PHY-less operation\n");

 VAR_14 = FUNC_24(VAR_11);
 if (VAR_14)
  goto err_reg_netdev;

 FUNC_19(VAR_11);

 FUNC_20(VAR_10, VAR_7, VAR_11, "%s v%s\n",
     VAR_4, VAR_5);

 return 0;

err_reg_netdev:
 FUNC_12(VAR_10);
 FUNC_7(VAR_10);
err_alloc_msix:
 FUNC_8(VAR_10);
err_alloc_si_res:
 VAR_12->ndev = ((void*)0);
 FUNC_17(VAR_11);
err_alloc_netdev:
err_map_pf_space:
 FUNC_14(VAR_8);

 return VAR_14;
}
