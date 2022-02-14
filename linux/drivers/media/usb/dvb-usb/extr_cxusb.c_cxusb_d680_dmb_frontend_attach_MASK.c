
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* adapter; int generic_bulk_ctrl_endpoint; } ;
struct dvb_usb_device {int i2c_adap; TYPE_4__ props; int udev; } ;
struct dvb_usb_adapter {TYPE_5__* fe_adap; struct dvb_usb_device* dev; } ;
struct TYPE_10__ {int fe; } ;
struct TYPE_8__ {TYPE_2__* fe; } ;
struct TYPE_6__ {int endpoint; } ;
struct TYPE_7__ {TYPE_1__ stream; } ;


 int VAR_0 ;
 int FUNC_0 (struct dvb_usb_device*) ;
 int FUNC_1 (struct dvb_usb_device*) ;
 scalar_t__ FUNC_2 (struct dvb_usb_device*,int,int) ;
 int VAR_1 ;
 int FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (char*) ;
 int VAR_2 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static int FUNC_10(struct dvb_usb_adapter *VAR_3)
{
 struct dvb_usb_device *VAR_4 = VAR_3->dev;
 int VAR_5;


 if (FUNC_8(VAR_4->udev, 0, 0) < 0)
  FUNC_4("set interface failed");


 FUNC_6(VAR_4->udev,
         FUNC_9(VAR_4->udev,
           VAR_4->props.generic_bulk_ctrl_endpoint));
 FUNC_6(VAR_4->udev,
         FUNC_7(VAR_4->udev,
           VAR_4->props.generic_bulk_ctrl_endpoint));
 FUNC_6(VAR_4->udev,
         FUNC_7(VAR_4->udev,
           VAR_4->props.adapter[0].fe[0].stream.endpoint));


 for (VAR_5 = 0; VAR_5 < 5; VAR_5++) {
  FUNC_0(VAR_4);
  FUNC_1(VAR_4);
  FUNC_5(200);
 }


 if (FUNC_2(VAR_4, 0x07, 0) < 0) {
  FUNC_4("clear tuner gpio failed");
  return -VAR_0;
 }
 FUNC_5(100);
 if (FUNC_2(VAR_4, 0x07, 1) < 0) {
  FUNC_4("set tuner gpio failed");
  return -VAR_0;
 }
 FUNC_5(100);


 VAR_3->fe_adap[0].fe = FUNC_3(VAR_2,
      &VAR_1, &VAR_4->i2c_adap);
 if (!VAR_3->fe_adap[0].fe)
  return -VAR_0;

 return 0;
}
