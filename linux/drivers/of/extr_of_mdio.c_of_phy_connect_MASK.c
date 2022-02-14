
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct phy_device {TYPE_1__ mdio; int dev_flags; } ;
struct net_device {int dummy; } ;
struct device_node {int dummy; } ;
typedef int phy_interface_t ;


 struct phy_device* FUNC_0 (struct device_node*) ;
 int FUNC_1 (struct net_device*,struct phy_device*,void (*) (struct net_device*),int ) ;
 int FUNC_2 (int *) ;

struct phy_device *FUNC_3(struct net_device *VAR_0,
      struct device_node *VAR_1,
      void (*VAR_2)(struct net_device *), u32 VAR_3,
      phy_interface_t VAR_4)
{
 struct phy_device *VAR_5 = FUNC_0(VAR_1);
 int VAR_6;

 if (!VAR_5)
  return ((void*)0);

 VAR_5->dev_flags = VAR_3;

 VAR_6 = FUNC_1(VAR_0, VAR_5, VAR_2, VAR_4);


 FUNC_2(&VAR_5->mdio.dev);

 return VAR_6 ? ((void*)0) : VAR_5;
}
