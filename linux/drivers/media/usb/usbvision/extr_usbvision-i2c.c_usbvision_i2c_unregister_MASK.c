
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
struct usb_usbvision {TYPE_1__ i2c_adap; scalar_t__ registered_i2c; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(struct usb_usbvision *VAR_1)
{
 if (!VAR_1->registered_i2c)
  return 0;

 FUNC_1(&(VAR_1->i2c_adap));
 VAR_1->registered_i2c = 0;

 FUNC_0(VAR_0, "i2c bus for %s unregistered", VAR_1->i2c_adap.name);

 return 0;
}
