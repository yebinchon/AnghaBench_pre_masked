
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_3__ {int fwnode; struct device_node* of_node; } ;
struct TYPE_4__ {TYPE_1__ dev; int reset_deassert_delay; int reset_assert_delay; } ;
struct phy_device {int irq; TYPE_2__ mdio; } ;
struct mii_bus {int* irq; int phy_ignore_ta_mask; int dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct phy_device*) ;
 int FUNC_1 (struct phy_device*) ;
 int FUNC_2 (int *,char*,struct device_node*,size_t) ;
 struct phy_device* FUNC_3 (struct mii_bus*,size_t,int) ;
 int FUNC_4 (struct device_node*,char*) ;
 int FUNC_5 (struct device_node*) ;
 int FUNC_6 (struct device_node*,size_t*) ;
 int FUNC_7 (struct device_node*,int ) ;
 int FUNC_8 (struct device_node*) ;
 int FUNC_9 (struct device_node*) ;
 scalar_t__ FUNC_10 (struct device_node*,char*) ;
 int FUNC_11 (struct device_node*,char*,int *) ;
 struct phy_device* FUNC_12 (struct mii_bus*,size_t,size_t,int ,int *) ;
 int FUNC_13 (struct phy_device*) ;
 int FUNC_14 (struct phy_device*) ;

__attribute__((used)) static int FUNC_15(struct mii_bus *VAR_1,
        struct device_node *VAR_2, u32 VAR_3)
{
 struct phy_device *VAR_4;
 bool VAR_5;
 int VAR_6;
 u32 VAR_7;

 VAR_5 = FUNC_4(VAR_2,
      "ethernet-phy-ieee802.3-c45");

 if (!VAR_5 && !FUNC_6(VAR_2, &VAR_7))
  VAR_4 = FUNC_12(VAR_1, VAR_3, VAR_7, 0, ((void*)0));
 else
  VAR_4 = FUNC_3(VAR_1, VAR_3, VAR_5);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_6 = FUNC_7(VAR_2, 0);
 if (VAR_6 == -VAR_0) {
  FUNC_13(VAR_4);
  return VAR_6;
 }
 if (VAR_6 > 0) {
  VAR_4->irq = VAR_6;
  VAR_1->irq[VAR_3] = VAR_6;
 } else {
  VAR_4->irq = VAR_1->irq[VAR_3];
 }

 if (FUNC_10(VAR_2, "broken-turn-around"))
  VAR_1->phy_ignore_ta_mask |= 1 << VAR_3;

 FUNC_11(VAR_2, "reset-assert-us",
        &VAR_4->mdio.reset_assert_delay);
 FUNC_11(VAR_2, "reset-deassert-us",
        &VAR_4->mdio.reset_deassert_delay);



 FUNC_8(VAR_2);
 VAR_4->mdio.dev.of_node = VAR_2;
 VAR_4->mdio.dev.fwnode = FUNC_5(VAR_2);



 VAR_6 = FUNC_14(VAR_4);
 if (VAR_6) {
  FUNC_13(VAR_4);
  FUNC_9(VAR_2);
  return VAR_6;
 }

 FUNC_2(&VAR_1->dev, "registered phy %pOFn at address %i\n",
  VAR_2, VAR_3);
 return 0;
}
