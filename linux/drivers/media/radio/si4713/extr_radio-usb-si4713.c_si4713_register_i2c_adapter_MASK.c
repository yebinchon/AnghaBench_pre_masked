
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * parent; } ;
struct TYPE_8__ {TYPE_1__ dev; } ;
struct si4713_usb_device {TYPE_3__ i2c_adapter; TYPE_2__* usbdev; } ;
struct TYPE_7__ {int dev; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,struct si4713_usb_device*) ;
 TYPE_3__ VAR_0 ;

__attribute__((used)) static int FUNC_2(struct si4713_usb_device *VAR_1)
{
 VAR_1->i2c_adapter = VAR_0;

 VAR_1->i2c_adapter.dev.parent = &VAR_1->usbdev->dev;
 FUNC_1(&VAR_1->i2c_adapter, VAR_1);

 return FUNC_0(&VAR_1->i2c_adapter);
}
