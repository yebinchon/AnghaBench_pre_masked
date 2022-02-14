
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_role_switch {int dummy; } ;
struct fwnode_handle {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct usb_role_switch* FUNC_0 (int ) ;
 struct device* FUNC_1 (int ,struct fwnode_handle*) ;
 struct fwnode_handle* FUNC_2 (struct fwnode_handle*) ;
 int FUNC_3 (struct fwnode_handle*,char*) ;
 int VAR_1 ;
 struct usb_role_switch* FUNC_4 (struct device*) ;

__attribute__((used)) static struct usb_role_switch *
FUNC_5(struct fwnode_handle *VAR_2)
{
 struct fwnode_handle *VAR_3 = FUNC_2(VAR_2);
 struct device *VAR_4;

 if (!VAR_3 || !FUNC_3(VAR_3, "usb-role-switch"))
  return ((void*)0);

 VAR_4 = FUNC_1(VAR_1, VAR_3);
 return VAR_4 ? FUNC_4(VAR_4) : FUNC_0(-VAR_0);
}
