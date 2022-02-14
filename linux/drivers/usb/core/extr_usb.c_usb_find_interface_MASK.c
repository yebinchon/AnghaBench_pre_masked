
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct TYPE_2__ {int driver; } ;
struct usb_driver {TYPE_1__ drvwrap; } ;
struct find_interface_arg {int minor; int * drv; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct device* FUNC_0 (int *,int *,struct find_interface_arg*,int ) ;
 int FUNC_1 (struct device*) ;
 struct usb_interface* FUNC_2 (struct device*) ;
 int VAR_1 ;

struct usb_interface *FUNC_3(struct usb_driver *VAR_2, int VAR_3)
{
 struct find_interface_arg VAR_4;
 struct device *VAR_5;

 VAR_4.minor = VAR_3;
 VAR_4.drv = &VAR_2->drvwrap.driver;

 VAR_5 = FUNC_0(&VAR_1, ((void*)0), &VAR_4, VAR_0);


 FUNC_1(VAR_5);

 return VAR_5 ? FUNC_2(VAR_5) : ((void*)0);
}
