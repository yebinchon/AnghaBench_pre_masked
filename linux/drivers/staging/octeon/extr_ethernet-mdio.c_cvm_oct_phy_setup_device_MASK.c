
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;
struct octeon_ethernet {scalar_t__ last_link; int phy_mode; int of_node; } ;
struct net_device {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct octeon_ethernet* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 struct device_node* FUNC_2 (int ) ;
 int FUNC_3 (struct device_node*) ;
 struct device_node* FUNC_4 (int ,char*,int ) ;
 struct phy_device* FUNC_5 (struct net_device*,struct device_node*,int ,int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct phy_device*) ;

int FUNC_9(struct net_device *VAR_2)
{
 struct octeon_ethernet *VAR_3 = FUNC_0(VAR_2);
 struct device_node *VAR_4;
 struct phy_device *VAR_5 = ((void*)0);

 if (!VAR_3->of_node)
  goto no_phy;

 VAR_4 = FUNC_4(VAR_3->of_node, "phy-handle", 0);
 if (!VAR_4 && FUNC_6(VAR_3->of_node)) {
  int VAR_6;

  VAR_6 = FUNC_7(VAR_3->of_node);
  if (VAR_6)
   return VAR_6;

  VAR_4 = FUNC_2(VAR_3->of_node);
 }
 if (!VAR_4)
  goto no_phy;

 VAR_5 = FUNC_5(VAR_2, VAR_4, VAR_1, 0,
    VAR_3->phy_mode);
 FUNC_3(VAR_4);

 if (!VAR_5)
  return -VAR_0;

 VAR_3->last_link = 0;
 FUNC_8(VAR_5);

 return 0;
no_phy:



 FUNC_1(VAR_2);
 return 0;
}
