
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;
struct net_device {int dummy; } ;
struct enetc_si {int * ndev; } ;
struct enetc_ndev_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct net_device* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct enetc_ndev_priv*) ;
 int FUNC_3 (struct enetc_ndev_priv*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct enetc_ndev_priv*) ;
 int FUNC_5 (struct enetc_ndev_priv*) ;
 int FUNC_6 (struct enetc_si*) ;
 int FUNC_7 (struct enetc_ndev_priv*) ;
 int VAR_5 ;
 int FUNC_8 (struct pci_dev*,int ,int ) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct enetc_si*,struct net_device*,int *) ;
 int FUNC_11 (struct net_device*) ;
 struct enetc_ndev_priv* FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct enetc_ndev_priv*,int ,struct net_device*,char*,int ,int ) ;
 struct enetc_si* FUNC_15 (struct pci_dev*) ;
 int VAR_6 ;
 int FUNC_16 (struct net_device*) ;

__attribute__((used)) static int FUNC_17(struct pci_dev *VAR_7,
     const struct pci_device_id *VAR_8)
{
 struct enetc_ndev_priv *VAR_9;
 struct net_device *VAR_10;
 struct enetc_si *VAR_11;
 int VAR_12;

 VAR_12 = FUNC_8(VAR_7, VAR_2, 0);
 if (VAR_12) {
  FUNC_1(&VAR_7->dev, "PCI probing failed\n");
  return VAR_12;
 }

 VAR_11 = FUNC_15(VAR_7);

 FUNC_6(VAR_11);

 VAR_10 = FUNC_0(sizeof(*VAR_9), VAR_0);
 if (!VAR_10) {
  VAR_12 = -VAR_1;
  FUNC_1(&VAR_7->dev, "netdev creation failed\n");
  goto err_alloc_netdev;
 }

 FUNC_10(VAR_11, VAR_10, &VAR_5);

 VAR_9 = FUNC_12(VAR_10);

 FUNC_7(VAR_9);

 VAR_12 = FUNC_3(VAR_9);
 if (VAR_12) {
  FUNC_1(&VAR_7->dev, "SI resource alloc failed\n");
  goto err_alloc_si_res;
 }

 VAR_12 = FUNC_2(VAR_9);
 if (VAR_12) {
  FUNC_1(&VAR_7->dev, "MSIX alloc failed\n");
  goto err_alloc_msix;
 }

 VAR_12 = FUNC_16(VAR_10);
 if (VAR_12)
  goto err_reg_netdev;

 FUNC_13(VAR_10);

 FUNC_14(VAR_9, VAR_6, VAR_10, "%s v%s\n",
     VAR_3, VAR_4);

 return 0;

err_reg_netdev:
 FUNC_4(VAR_9);
err_alloc_msix:
 FUNC_5(VAR_9);
err_alloc_si_res:
 VAR_11->ndev = ((void*)0);
 FUNC_11(VAR_10);
err_alloc_netdev:
 FUNC_9(VAR_7);

 return VAR_12;
}
