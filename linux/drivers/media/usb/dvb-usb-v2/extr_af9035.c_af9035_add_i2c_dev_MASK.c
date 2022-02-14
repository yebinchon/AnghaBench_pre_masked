
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct usb_interface {int dev; } ;
struct state {struct i2c_client** i2c_client; } ;
struct TYPE_4__ {TYPE_1__* driver; } ;
struct i2c_client {TYPE_2__ dev; } ;
struct i2c_board_info {void* platform_data; int type; int addr; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_usb_device {struct usb_interface* intf; } ;
struct TYPE_3__ {int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct state* FUNC_0 (struct dvb_usb_device*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*) ;
 struct i2c_client* FUNC_3 (struct i2c_adapter*,struct i2c_board_info*) ;
 int FUNC_4 (struct i2c_client*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int ,char const*,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct dvb_usb_device *VAR_3, const char *VAR_4,
  u8 VAR_5, void *VAR_6, struct i2c_adapter *VAR_7)
{
 int VAR_8, VAR_9;
 struct state *VAR_10 = FUNC_0(VAR_3);
 struct usb_interface *VAR_11 = VAR_3->intf;
 struct i2c_client *VAR_12;
 struct i2c_board_info VAR_13 = {
  .addr = VAR_5,
  .platform_data = VAR_6,
 };

 FUNC_6(VAR_13.type, VAR_4, VAR_2);


 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  if (VAR_10->i2c_client[VAR_9] == ((void*)0))
   break;
 }

 FUNC_1(&VAR_11->dev, "num=%d\n", VAR_9);

 if (VAR_9 == VAR_0) {
  FUNC_2(&VAR_11->dev, "I2C client out of index\n");
  VAR_8 = -VAR_1;
  goto err;
 }

 FUNC_5("%s", VAR_13.type);


 VAR_12 = FUNC_3(VAR_7, &VAR_13);
 if (VAR_12 == ((void*)0) || VAR_12->dev.driver == ((void*)0)) {
  VAR_8 = -VAR_1;
  goto err;
 }


 if (!FUNC_7(VAR_12->dev.driver->owner)) {
  FUNC_4(VAR_12);
  VAR_8 = -VAR_1;
  goto err;
 }

 VAR_10->i2c_client[VAR_9] = VAR_12;
 return 0;
err:
 FUNC_1(&VAR_11->dev, "failed=%d\n", VAR_8);
 return VAR_8;
}
