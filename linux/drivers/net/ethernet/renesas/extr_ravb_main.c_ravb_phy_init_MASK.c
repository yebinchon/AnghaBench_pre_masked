
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ravb_private {int phy_interface; scalar_t__ speed; scalar_t__ link; } ;
struct phy_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* parent; } ;
struct net_device {TYPE_2__ dev; } ;
struct device_node {int dummy; } ;
struct TYPE_3__ {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct net_device*,char*) ;
 int FUNC_1 (struct net_device*,char*) ;
 struct ravb_private* FUNC_2 (struct net_device*) ;
 struct device_node* FUNC_3 (struct device_node*) ;
 int FUNC_4 (struct device_node*) ;
 struct device_node* FUNC_5 (struct device_node*,char*,int ) ;
 struct phy_device* FUNC_6 (struct net_device*,struct device_node*,int ,int ,int ) ;
 int FUNC_7 (struct device_node*) ;
 scalar_t__ FUNC_8 (struct device_node*) ;
 int FUNC_9 (struct device_node*) ;
 int FUNC_10 (struct phy_device*) ;
 int FUNC_11 (struct phy_device*) ;
 int FUNC_12 (struct phy_device*,int ) ;
 int FUNC_13 (struct phy_device*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_14 (int ) ;

__attribute__((used)) static int FUNC_15(struct net_device *VAR_10)
{
 struct device_node *VAR_11 = VAR_10->dev.parent->of_node;
 struct ravb_private *VAR_12 = FUNC_2(VAR_10);
 struct phy_device *VAR_13;
 struct device_node *VAR_14;
 int VAR_15;

 VAR_12->link = 0;
 VAR_12->speed = 0;


 VAR_14 = FUNC_5(VAR_11, "phy-handle", 0);
 if (!VAR_14) {



  if (FUNC_8(VAR_11)) {
   VAR_15 = FUNC_9(VAR_11);
   if (VAR_15)
    return VAR_15;
  }
  VAR_14 = FUNC_3(VAR_11);
 }
 VAR_13 = FUNC_6(VAR_10, VAR_14, VAR_9, 0,
    VAR_12->phy_interface);
 FUNC_4(VAR_14);
 if (!VAR_13) {
  FUNC_0(VAR_10, "failed to connect PHY\n");
  VAR_15 = -VAR_0;
  goto err_deregister_fixed_link;
 }




 if (FUNC_14(VAR_8)) {
  VAR_15 = FUNC_13(VAR_13, VAR_7);
  if (VAR_15) {
   FUNC_0(VAR_10, "failed to limit PHY to 100Mbit/s\n");
   goto err_phy_disconnect;
  }

  FUNC_1(VAR_10, "limited PHY to 100Mbit/s\n");
 }


 FUNC_12(VAR_13, VAR_4);
 FUNC_12(VAR_13, VAR_3);
 FUNC_12(VAR_13, VAR_6);
 FUNC_12(VAR_13, VAR_5);


 FUNC_12(VAR_13, VAR_1);
 FUNC_12(VAR_13, VAR_2);

 FUNC_10(VAR_13);

 return 0;

err_phy_disconnect:
 FUNC_11(VAR_13);
err_deregister_fixed_link:
 if (FUNC_8(VAR_11))
  FUNC_7(VAR_11);

 return VAR_15;
}
