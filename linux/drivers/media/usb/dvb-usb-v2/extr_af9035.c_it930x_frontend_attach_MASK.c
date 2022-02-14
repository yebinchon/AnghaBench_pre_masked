
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_interface {int dev; } ;
struct state {size_t it930x_addresses; struct i2c_adapter* i2c_adapter_demod; int ops; TYPE_1__* af9033_config; } ;
struct si2168_config {int ts_mode; int ** fe; struct i2c_adapter** i2c_adapter; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_usb_device {int i2c_adap; struct usb_interface* intf; } ;
struct dvb_usb_adapter {int id; int ** fe; } ;
typedef int si2168_config ;
struct TYPE_4__ {int frontend_i2c_addr; } ;
struct TYPE_3__ {int * ops; int ** fe; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dvb_usb_device* FUNC_0 (struct dvb_usb_adapter*) ;
 struct state* FUNC_1 (struct dvb_usb_adapter*) ;
 int FUNC_2 (struct dvb_usb_device*,char*,int ,struct si2168_config*,int *) ;
 int FUNC_3 (struct dvb_usb_device*,int,int) ;
 int FUNC_4 (struct dvb_usb_device*,int,int,int) ;
 int FUNC_5 (int *,char*,int) ;
 TYPE_2__* VAR_2 ;
 int FUNC_6 (struct si2168_config*,int ,int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct dvb_usb_adapter *VAR_3)
{
 struct state *VAR_4 = FUNC_1(VAR_3);
 struct dvb_usb_device *VAR_5 = FUNC_0(VAR_3);
 struct usb_interface *VAR_6 = VAR_5->intf;
 int VAR_7;
 struct si2168_config VAR_8;
 struct i2c_adapter *VAR_9;

 FUNC_5(&VAR_6->dev, "adap->id=%d\n", VAR_3->id);


 VAR_7 = FUNC_3(VAR_5, 0x00f6a7, 0x07);
 if (VAR_7 < 0)
  goto err;


 VAR_7 = FUNC_3(VAR_5, 0x00f103, 0x07);
 if (VAR_7 < 0)
  goto err;


 VAR_7 = FUNC_4(VAR_5, 0xd8d4, 0x01, 0x01);
 if (VAR_7 < 0)
  goto err;

 VAR_7 = FUNC_4(VAR_5, 0xd8d5, 0x01, 0x01);
 if (VAR_7 < 0)
  goto err;

 VAR_7 = FUNC_4(VAR_5, 0xd8d3, 0x01, 0x01);
 if (VAR_7 < 0)
  goto err;


 VAR_7 = FUNC_4(VAR_5, 0xd8b8, 0x01, 0x01);
 if (VAR_7 < 0)
  goto err;

 VAR_7 = FUNC_4(VAR_5, 0xd8b9, 0x01, 0x01);
 if (VAR_7 < 0)
  goto err;

 VAR_7 = FUNC_4(VAR_5, 0xd8b7, 0x00, 0x01);
 if (VAR_7 < 0)
  goto err;

 FUNC_7(200);

 VAR_7 = FUNC_4(VAR_5, 0xd8b7, 0x01, 0x01);
 if (VAR_7 < 0)
  goto err;

 FUNC_6(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.i2c_adapter = &VAR_9;
 VAR_8.fe = &VAR_3->fe[0];
 VAR_8.ts_mode = VAR_1;

 VAR_4->af9033_config[VAR_3->id].fe = &VAR_3->fe[0];
 VAR_4->af9033_config[VAR_3->id].ops = &VAR_4->ops;
 VAR_7 = FUNC_2(VAR_5, "si2168",
     VAR_2[VAR_4->it930x_addresses].frontend_i2c_addr,
     &VAR_8, &VAR_5->i2c_adap);
 if (VAR_7)
  goto err;

 if (VAR_3->fe[0] == ((void*)0)) {
  VAR_7 = -VAR_0;
  goto err;
 }
 VAR_4->i2c_adapter_demod = VAR_9;

 return 0;

err:
 FUNC_5(&VAR_6->dev, "failed=%d\n", VAR_7);

 return VAR_7;
}
