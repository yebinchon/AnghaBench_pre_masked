
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtl28xxu_dev {int tuner; int demod_i2c_adapter; } ;
struct dvb_usb_device {TYPE_1__* intf; } ;
struct dvb_usb_adapter {int * fe; } ;
struct dvb_frontend {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;



 struct dvb_usb_device* FUNC_0 (struct dvb_usb_adapter*) ;
 struct rtl28xxu_dev* FUNC_1 (struct dvb_usb_device*) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*,int) ;
 struct dvb_frontend* FUNC_4 (int ,int ,int ,int *,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_5(struct dvb_usb_adapter *VAR_7)
{
 int VAR_8;
 struct dvb_usb_device *VAR_9 = FUNC_0(VAR_7);
 struct rtl28xxu_dev *VAR_10 = FUNC_1(VAR_9);
 struct dvb_frontend *VAR_11;

 FUNC_2(&VAR_9->intf->dev, "\n");

 switch (VAR_10->tuner) {
 case 128:
  VAR_11 = FUNC_4(VAR_3, VAR_7->fe[0],
    VAR_10->demod_i2c_adapter,
    &VAR_6);
  break;
 case 130:
  VAR_11 = FUNC_4(VAR_1, VAR_7->fe[0],
    VAR_10->demod_i2c_adapter,
    &VAR_4, 1220);
  break;
 case 129:
  VAR_11 = FUNC_4(VAR_2, VAR_7->fe[0],
    VAR_10->demod_i2c_adapter,
    &VAR_5);
  break;
 default:
  VAR_11 = ((void*)0);
  FUNC_3(&VAR_9->intf->dev, "unknown tuner %d\n", VAR_10->tuner);
 }

 if (VAR_11 == ((void*)0)) {
  VAR_8 = -VAR_0;
  goto err;
 }

 return 0;
err:
 FUNC_2(&VAR_9->intf->dev, "failed=%d\n", VAR_8);
 return VAR_8;
}
