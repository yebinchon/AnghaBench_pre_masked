
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_role_switch {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef enum usb_role { ____Placeholder_usb_role } usb_role ;


 int FUNC_0 (char*,char*,char*) ;
 struct usb_role_switch* FUNC_1 (struct device*) ;
 int FUNC_2 (struct usb_role_switch*) ;
 char** VAR_0 ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_1, struct device_attribute *VAR_2, char *VAR_3)
{
 struct usb_role_switch *VAR_4 = FUNC_1(VAR_1);
 enum usb_role VAR_5 = FUNC_2(VAR_4);

 return FUNC_0(VAR_3, "%s\n", VAR_0[VAR_5]);
}
