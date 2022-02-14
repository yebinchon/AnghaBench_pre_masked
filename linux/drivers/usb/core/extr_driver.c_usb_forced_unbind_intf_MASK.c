
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int driver; } ;
struct usb_interface {int needs_binding; TYPE_1__ dev; } ;
struct usb_driver {int dummy; } ;


 int FUNC_0 (TYPE_1__*,char*) ;
 struct usb_driver* FUNC_1 (int ) ;
 int FUNC_2 (struct usb_driver*,struct usb_interface*) ;

void FUNC_3(struct usb_interface *VAR_0)
{
 struct usb_driver *VAR_1 = FUNC_1(VAR_0->dev.driver);

 FUNC_0(&VAR_0->dev, "forced unbind\n");
 FUNC_2(VAR_1, VAR_0);


 VAR_0->needs_binding = 1;
}
