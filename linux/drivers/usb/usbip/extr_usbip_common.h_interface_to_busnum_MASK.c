
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct usb_device {TYPE_1__* bus; } ;
struct TYPE_2__ {int busnum; } ;


 struct usb_device* FUNC_0 (struct usb_interface*) ;

__attribute__((used)) static inline int FUNC_1(struct usb_interface *VAR_0)
{
 struct usb_device *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->bus->busnum;
}
