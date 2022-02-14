
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_interface {int dev; } ;
struct state {struct i2c_client** i2c_client; } ;
struct TYPE_4__ {TYPE_1__* driver; } ;
struct i2c_client {TYPE_2__ dev; } ;
struct dvb_usb_device {struct usb_interface* intf; } ;
struct TYPE_3__ {int owner; } ;


 int VAR_0 ;
 struct state* FUNC_0 (struct dvb_usb_device*) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct dvb_usb_device *VAR_1)
{
 int VAR_2;
 struct state *VAR_3 = FUNC_0(VAR_1);
 struct usb_interface *VAR_4 = VAR_1->intf;
 struct i2c_client *VAR_5;


 VAR_2 = VAR_0;
 while (VAR_2--) {
  if (VAR_3->i2c_client[VAR_2] != ((void*)0))
   break;
 }

 FUNC_1(&VAR_4->dev, "num=%d\n", VAR_2);

 if (VAR_2 == -1) {
  FUNC_2(&VAR_4->dev, "I2C client out of index\n");
  goto err;
 }

 VAR_5 = VAR_3->i2c_client[VAR_2];


 FUNC_4(VAR_5->dev.driver->owner);


 FUNC_3(VAR_5);

 VAR_3->i2c_client[VAR_2] = ((void*)0);
 return;
err:
 FUNC_1(&VAR_4->dev, "failed\n");
}
