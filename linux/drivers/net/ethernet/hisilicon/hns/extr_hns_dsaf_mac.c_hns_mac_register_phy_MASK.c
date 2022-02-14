
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct mii_bus {int dummy; } ;
struct hns_mac_cb {int mac_id; int dev; int fw_port; } ;
struct fwnode_reference_args {int fwnode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,struct fwnode_reference_args*) ;
 int FUNC_1 (int ,char*,int ,int) ;
 int FUNC_2 (int ,char*,int ) ;
 struct platform_device* FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct mii_bus*,struct hns_mac_cb*,int) ;
 int FUNC_6 (int ) ;
 struct mii_bus* FUNC_7 (struct platform_device*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct hns_mac_cb *VAR_3)
{
 struct fwnode_reference_args VAR_4;
 struct platform_device *VAR_5;
 struct mii_bus *VAR_6;
 int VAR_7;
 int VAR_8;


 if (!FUNC_8(VAR_3->fw_port))
  return -VAR_1;

 VAR_7 = FUNC_0(
   VAR_3->fw_port, "mdio-node", 0, &VAR_4);
 if (VAR_7)
  return VAR_7;
 if (!FUNC_6(VAR_4.fwnode))
  return -VAR_0;

 VAR_8 = FUNC_4(VAR_3->dev, VAR_3->fw_port);
 if (VAR_8 < 0)
  return VAR_8;


 VAR_5 = FUNC_3(VAR_4.fwnode);
 if (!VAR_5) {
  FUNC_2(VAR_3->dev, "mac%d mdio pdev is NULL\n",
   VAR_3->mac_id);
  return -VAR_0;
 }

 VAR_6 = FUNC_7(VAR_5);
 if (!VAR_6) {
  FUNC_2(VAR_3->dev,
   "mac%d mdio is NULL, dsaf will probe again later\n",
   VAR_3->mac_id);
  return -VAR_2;
 }

 VAR_7 = FUNC_5(VAR_6, VAR_3, VAR_8);
 if (!VAR_7)
  FUNC_1(VAR_3->dev, "mac%d register phy addr:%d\n",
   VAR_3->mac_id, VAR_8);

 return VAR_7;
}
