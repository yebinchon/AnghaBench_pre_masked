
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct phy_provider {int dummy; } ;
struct of_device_id {scalar_t__ data; } ;
struct device {int of_node; } ;
struct mdio_device {struct device dev; } ;
struct device_node {int dummy; } ;
struct bcm_ns_usb3 {int family; int phy; int phy_write; int dmp; struct mdio_device* mdiodev; struct device* dev; } ;
typedef enum bcm_ns_family { ____Placeholder_bcm_ns_family } bcm_ns_family ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct phy_provider*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,struct resource*) ;
 struct bcm_ns_usb3* FUNC_5 (struct device*,int,int ) ;
 struct phy_provider* FUNC_6 (struct device*,int ) ;
 int FUNC_7 (struct device*,int *,int *) ;
 int FUNC_8 (struct device_node*,int ,struct resource*) ;
 struct of_device_id* FUNC_9 (int ,struct device*) ;
 int FUNC_10 (struct device_node*) ;
 struct device_node* FUNC_11 (int ,char*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_12 (int ,struct bcm_ns_usb3*) ;

__attribute__((used)) static int FUNC_13(struct mdio_device *VAR_7)
{
 struct device *VAR_8 = &VAR_7->dev;
 const struct of_device_id *VAR_9;
 struct phy_provider *VAR_10;
 struct device_node *VAR_11;
 struct bcm_ns_usb3 *VAR_12;
 struct resource VAR_13;
 int VAR_14;

 VAR_12 = FUNC_5(VAR_8, sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return -VAR_1;

 VAR_12->dev = VAR_8;
 VAR_12->mdiodev = VAR_7;

 VAR_9 = FUNC_9(VAR_3, VAR_8);
 if (!VAR_9)
  return -VAR_0;
 VAR_12->family = (enum bcm_ns_family)VAR_9->data;

 VAR_11 = FUNC_11(VAR_8->of_node, "usb3-dmp-syscon", 0);
 VAR_14 = FUNC_8(VAR_11, 0, &VAR_13);
 FUNC_10(VAR_11);
 if (VAR_14)
  return VAR_14;

 VAR_12->dmp = FUNC_4(VAR_8, &VAR_13);
 if (FUNC_0(VAR_12->dmp)) {
  FUNC_3(VAR_8, "Failed to map DMP regs\n");
  return FUNC_1(VAR_12->dmp);
 }

 VAR_12->phy_write = VAR_4;

 VAR_12->phy = FUNC_7(VAR_8, ((void*)0), &VAR_6);
 if (FUNC_0(VAR_12->phy)) {
  FUNC_3(VAR_8, "Failed to create PHY\n");
  return FUNC_1(VAR_12->phy);
 }

 FUNC_12(VAR_12->phy, VAR_12);

 VAR_10 = FUNC_6(VAR_8, VAR_5);

 return FUNC_2(VAR_10);
}
