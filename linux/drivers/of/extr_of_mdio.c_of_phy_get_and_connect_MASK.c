
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;
struct net_device {int dummy; } ;
struct device_node {int dummy; } ;
typedef scalar_t__ phy_interface_t ;


 int FUNC_0 (struct net_device*,char*) ;
 scalar_t__ FUNC_1 (struct device_node*) ;
 struct device_node* FUNC_2 (struct device_node*) ;
 int FUNC_3 (struct device_node*) ;
 struct device_node* FUNC_4 (struct device_node*,char*,int ) ;
 struct phy_device* FUNC_5 (struct net_device*,struct device_node*,void (*) (struct net_device*),int ,scalar_t__) ;
 scalar_t__ FUNC_6 (struct device_node*) ;
 int FUNC_7 (struct device_node*) ;

struct phy_device *FUNC_8(struct net_device *VAR_0,
       struct device_node *VAR_1,
       void (*VAR_2)(struct net_device *))
{
 phy_interface_t VAR_3;
 struct device_node *VAR_4;
 struct phy_device *VAR_5;
 int VAR_6;

 VAR_3 = FUNC_1(VAR_1);
 if ((int)VAR_3 < 0)
  return ((void*)0);
 if (FUNC_6(VAR_1)) {
  VAR_6 = FUNC_7(VAR_1);
  if (VAR_6 < 0) {
   FUNC_0(VAR_0, "broken fixed-link specification\n");
   return ((void*)0);
  }
  VAR_4 = FUNC_2(VAR_1);
 } else {
  VAR_4 = FUNC_4(VAR_1, "phy-handle", 0);
  if (!VAR_4)
   return ((void*)0);
 }

 VAR_5 = FUNC_5(VAR_0, VAR_4, VAR_2, 0, VAR_3);

 FUNC_3(VAR_4);

 return VAR_5;
}
