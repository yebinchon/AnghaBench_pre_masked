
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rtl2830_platform_data {int (* get_i2c_adapter ) (struct i2c_client*) ;int (* get_dvb_frontend ) (struct i2c_client*) ;} ;
struct rtl28xxu_dev {int tuner; struct i2c_client* i2c_client_demod; int demod_i2c_adapter; int tuner_name; struct rtl2830_platform_data rtl2830_platform_data; } ;
struct TYPE_5__ {TYPE_1__* driver; } ;
struct i2c_client {TYPE_2__ dev; } ;
struct i2c_board_info {int addr; int type; struct rtl2830_platform_data* platform_data; } ;
struct dvb_usb_device {TYPE_3__* intf; int i2c_adap; } ;
struct dvb_usb_adapter {int * fe; } ;
typedef int board_info ;
struct TYPE_6__ {int dev; } ;
struct TYPE_4__ {int owner; } ;


 int VAR_0 ;
 int VAR_1 ;



 struct dvb_usb_device* FUNC_0 (struct dvb_usb_adapter*) ;
 struct rtl28xxu_dev* FUNC_1 (struct dvb_usb_device*) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*,int ) ;
 struct i2c_client* FUNC_4 (int *,struct i2c_board_info*) ;
 int FUNC_5 (struct i2c_client*) ;
 int FUNC_6 (struct i2c_board_info*,int ,int) ;
 int FUNC_7 (char*,int ) ;
 struct rtl2830_platform_data VAR_2 ;
 struct rtl2830_platform_data VAR_3 ;
 struct rtl2830_platform_data VAR_4 ;
 int FUNC_8 (int ,char*,int ) ;
 int FUNC_9 (struct i2c_client*) ;
 int FUNC_10 (struct i2c_client*) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct dvb_usb_adapter *VAR_5)
{
 struct dvb_usb_device *VAR_6 = FUNC_0(VAR_5);
 struct rtl28xxu_dev *VAR_7 = FUNC_1(VAR_6);
 struct rtl2830_platform_data *VAR_8 = &VAR_7->rtl2830_platform_data;
 struct i2c_board_info VAR_9;
 struct i2c_client *VAR_10;
 int VAR_11;

 FUNC_2(&VAR_6->intf->dev, "\n");

 switch (VAR_7->tuner) {
 case 128:
  *VAR_8 = VAR_4;
  break;
 case 130:
  *VAR_8 = VAR_2;
  break;
 case 129:
  *VAR_8 = VAR_3;
  break;
 default:
  FUNC_3(&VAR_6->intf->dev, "unknown tuner %s\n", VAR_7->tuner_name);
  VAR_11 = -VAR_0;
  goto err;
 }


 FUNC_6(&VAR_9, 0, sizeof(VAR_9));
 FUNC_8(VAR_9.type, "rtl2830", VAR_1);
 VAR_9.addr = 0x10;
 VAR_9.platform_data = VAR_8;
 FUNC_7("%s", VAR_9.type);
 VAR_10 = FUNC_4(&VAR_6->i2c_adap, &VAR_9);
 if (VAR_10 == ((void*)0) || VAR_10->dev.driver == ((void*)0)) {
  VAR_11 = -VAR_0;
  goto err;
 }

 if (!FUNC_11(VAR_10->dev.driver->owner)) {
  FUNC_5(VAR_10);
  VAR_11 = -VAR_0;
  goto err;
 }

 VAR_5->fe[0] = VAR_8->get_dvb_frontend(VAR_10);
 VAR_7->demod_i2c_adapter = VAR_8->get_i2c_adapter(VAR_10);

 VAR_7->i2c_client_demod = VAR_10;

 return 0;
err:
 FUNC_2(&VAR_6->intf->dev, "failed=%d\n", VAR_11);
 return VAR_11;
}
