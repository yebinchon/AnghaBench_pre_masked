
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct cdns3 {int role; } ;
typedef enum usb_role { ____Placeholder_usb_role } usb_role ;


 struct cdns3* FUNC_0 (struct device*) ;

__attribute__((used)) static enum usb_role FUNC_1(struct device *VAR_0)
{
 struct cdns3 *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->role;
}
