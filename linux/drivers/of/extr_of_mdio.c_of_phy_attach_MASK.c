
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct phy_device {TYPE_1__ mdio; } ;
struct net_device {int dummy; } ;
struct device_node {int dummy; } ;
typedef int phy_interface_t ;


 struct phy_device* FUNC_0 (struct device_node*) ;
 int FUNC_1 (struct net_device*,struct phy_device*,int ,int ) ;
 int FUNC_2 (int *) ;

struct phy_device *FUNC_3(struct net_device *VAR_0,
     struct device_node *VAR_1, u32 VAR_2,
     phy_interface_t VAR_3)
{
 struct phy_device *VAR_4 = FUNC_0(VAR_1);
 int VAR_5;

 if (!VAR_4)
  return ((void*)0);

 VAR_5 = FUNC_1(VAR_0, VAR_4, VAR_2, VAR_3);


 FUNC_2(&VAR_4->mdio.dev);

 return VAR_5 ? ((void*)0) : VAR_4;
}
