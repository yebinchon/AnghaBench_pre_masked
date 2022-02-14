
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_control {int dummy; } ;
struct device_node {int dummy; } ;
struct device {int of_node; } ;
struct am335x_control_usb {struct phy_control phy_ctrl; } ;


 struct device* FUNC_0 (int *,int *,struct device_node*,int ) ;
 struct am335x_control_usb* FUNC_1 (struct device*) ;
 int VAR_0 ;
 int FUNC_2 (struct device_node*) ;
 struct device_node* FUNC_3 (int ,char*,int ) ;
 int VAR_1 ;
 int FUNC_4 (struct device*) ;

struct phy_control *FUNC_5(struct device *VAR_2)
{
 struct device_node *VAR_3;
 struct am335x_control_usb *VAR_4;

 VAR_3 = FUNC_3(VAR_2->of_node, "ti,ctrl_mod", 0);
 if (!VAR_3)
  return ((void*)0);

 VAR_2 = FUNC_0(&VAR_1, ((void*)0), VAR_3, VAR_0);
 FUNC_2(VAR_3);
 if (!VAR_2)
  return ((void*)0);

 VAR_4 = FUNC_1(VAR_2);
 FUNC_4(VAR_2);
 if (!VAR_4)
  return ((void*)0);
 return &VAR_4->phy_ctrl;
}
