
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct device {int of_node; } ;
struct pci_dev {struct device dev; } ;
struct mii_bus {int id; struct enetc_mdio_priv* priv; struct device* parent; int write; int read; int name; } ;
struct enetc_mdio_priv {struct enetc_hw* hw; } ;
struct enetc_hw {int port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*,char*) ;
 char* FUNC_1 (struct device*) ;
 struct enetc_hw* FUNC_2 (struct device*,int,int ) ;
 struct mii_bus* FUNC_3 (struct device*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct mii_bus*,int ) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*,int ,int ) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*,int ,int ) ;
 int FUNC_11 (struct pci_dev*,struct mii_bus*) ;
 int FUNC_12 (struct pci_dev*) ;
 int FUNC_13 (int ,int ,char*,char*) ;

__attribute__((used)) static int FUNC_14(struct pci_dev *VAR_8,
    const struct pci_device_id *VAR_9)
{
 struct enetc_mdio_priv *VAR_10;
 struct device *VAR_11 = &VAR_8->dev;
 struct enetc_hw *VAR_12;
 struct mii_bus *VAR_13;
 int VAR_14;

 VAR_12 = FUNC_2(VAR_11, sizeof(*VAR_12), VAR_3);
 if (!VAR_12)
  return -VAR_1;

 VAR_13 = FUNC_3(VAR_11, sizeof(*VAR_10));
 if (!VAR_13)
  return -VAR_1;

 VAR_13->name = VAR_0;
 VAR_13->read = VAR_6;
 VAR_13->write = VAR_7;
 VAR_13->parent = VAR_11;
 VAR_10 = VAR_13->priv;
 VAR_10->hw = VAR_12;
 FUNC_13(VAR_13->id, VAR_5, "%s", FUNC_1(VAR_11));

 FUNC_12(VAR_8);
 VAR_14 = FUNC_7(VAR_8);
 if (VAR_14) {
  FUNC_0(VAR_11, "device enable failed\n");
  return VAR_14;
 }

 VAR_14 = FUNC_10(VAR_8, 0, VAR_4);
 if (VAR_14) {
  FUNC_0(VAR_11, "pci_request_region failed\n");
  goto err_pci_mem_reg;
 }

 VAR_12->port = FUNC_8(VAR_8, 0, 0);
 if (!VAR_12->port) {
  VAR_14 = -VAR_2;
  FUNC_0(VAR_11, "iomap failed\n");
  goto err_ioremap;
 }

 VAR_14 = FUNC_5(VAR_13, VAR_11->of_node);
 if (VAR_14)
  goto err_mdiobus_reg;

 FUNC_11(VAR_8, VAR_13);

 return 0;

err_mdiobus_reg:
 FUNC_4(VAR_10->hw->port);
err_ioremap:
 FUNC_9(VAR_8);
err_pci_mem_reg:
 FUNC_6(VAR_8);

 return VAR_14;
}
