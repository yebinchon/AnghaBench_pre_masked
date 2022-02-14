
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct phylink {scalar_t__ link_an_mode; int link_interface; int netdev; } ;
struct phy_device {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct device_node*) ;
 struct device_node* FUNC_1 (struct device_node*,char*,int ) ;
 struct phy_device* FUNC_2 (int ,struct device_node*,int ,int ) ;
 int FUNC_3 (struct phy_device*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct phylink*,struct phy_device*) ;

int FUNC_6(struct phylink *VAR_4, struct device_node *VAR_5,
      u32 VAR_6)
{
 struct device_node *VAR_7;
 struct phy_device *VAR_8;
 int VAR_9;


 if (VAR_4->link_an_mode == VAR_1 ||
     (VAR_4->link_an_mode == VAR_2 &&
      FUNC_4(VAR_4->link_interface)))
  return 0;

 VAR_7 = FUNC_1(VAR_5, "phy-handle", 0);
 if (!VAR_7)
  VAR_7 = FUNC_1(VAR_5, "phy", 0);
 if (!VAR_7)
  VAR_7 = FUNC_1(VAR_5, "phy-device", 0);

 if (!VAR_7) {
  if (VAR_4->link_an_mode == VAR_3)
   return -VAR_0;
  return 0;
 }

 VAR_8 = FUNC_2(VAR_4->netdev, VAR_7, VAR_6,
    VAR_4->link_interface);

 FUNC_0(VAR_7);

 if (!VAR_8)
  return -VAR_0;

 VAR_9 = FUNC_5(VAR_4, VAR_8);
 if (VAR_9)
  FUNC_3(VAR_8);

 return VAR_9;
}
