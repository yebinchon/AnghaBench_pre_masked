
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;
struct mdio_device {int flags; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct device* FUNC_0 (int *,struct device_node*) ;
 int VAR_1 ;
 int FUNC_1 (struct device*) ;
 struct mdio_device* FUNC_2 (struct device*) ;
 struct phy_device* FUNC_3 (struct device*) ;

struct phy_device *FUNC_4(struct device_node *VAR_2)
{
 struct device *VAR_3;
 struct mdio_device *VAR_4;

 if (!VAR_2)
  return ((void*)0);

 VAR_3 = FUNC_0(&VAR_1, VAR_2);
 if (VAR_3) {
  VAR_4 = FUNC_2(VAR_3);
  if (VAR_4->flags & VAR_0)
   return FUNC_3(VAR_3);
  FUNC_1(VAR_3);
 }

 return ((void*)0);
}
