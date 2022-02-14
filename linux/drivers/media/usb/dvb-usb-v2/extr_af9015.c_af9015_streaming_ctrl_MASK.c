
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u8 ;
struct usb_interface {int dev; } ;
struct dvb_usb_device {TYPE_1__* udev; struct usb_interface* intf; } ;
struct dvb_frontend {int dummy; } ;
struct af9015_state {int* usb_ts_if_configured; int regmap; scalar_t__ dual_mode; } ;
struct TYPE_4__ {unsigned int id; } ;
struct TYPE_3__ {scalar_t__ speed; } ;


 scalar_t__ VAR_0 ;
 struct af9015_state* FUNC_0 (struct dvb_usb_device*) ;
 int FUNC_1 (int *,char*,...) ;
 TYPE_2__* FUNC_2 (struct dvb_frontend*) ;
 struct dvb_usb_device* FUNC_3 (struct dvb_frontend*) ;
 int FUNC_4 (int ,unsigned int,unsigned int*,int) ;
 int FUNC_5 (int ,int,int,int) ;
 int FUNC_6 (int ,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct dvb_frontend *VAR_1, int VAR_2)
{
 struct dvb_usb_device *VAR_3 = FUNC_3(VAR_1);
 struct af9015_state *VAR_4 = FUNC_0(VAR_3);
 struct usb_interface *VAR_5 = VAR_3->intf;
 int VAR_6;
 unsigned int VAR_7, VAR_8, VAR_9, VAR_10;
 u8 VAR_11[2];
 const unsigned int VAR_12 = FUNC_2(VAR_1)->id;

 FUNC_1(&VAR_5->dev, "adap id %d, onoff %d\n", VAR_12, VAR_2);

 if (!VAR_4->usb_ts_if_configured[VAR_12]) {
  FUNC_1(&VAR_5->dev, "set usb and ts interface\n");


  VAR_7 = (VAR_3->udev->speed == VAR_0 ? 5 : 87) * 188 / 4;
  VAR_8 = (VAR_3->udev->speed == VAR_0 ? 64 : 512) / 4;

  VAR_11[0] = (VAR_7 >> 0) & 0xff;
  VAR_11[1] = (VAR_7 >> 8) & 0xff;
  if (VAR_12 == 0) {

   VAR_9 = 0xdd88;
   VAR_10 = 0xdd0c;
  } else {

   VAR_9 = 0xdd8a;
   VAR_10 = 0xdd0d;
  }
  VAR_6 = FUNC_4(VAR_4->regmap, VAR_9, VAR_11, 2);
  if (VAR_6)
   goto err;
  VAR_6 = FUNC_6(VAR_4->regmap, VAR_10, VAR_8);
  if (VAR_6)
   goto err;


  if (VAR_4->dual_mode) {
   VAR_7 = 0x01;
   VAR_8 = 0x10;
  } else {
   VAR_7 = 0x00;
   VAR_8 = 0x00;
  }
  VAR_6 = FUNC_5(VAR_4->regmap, 0xd50b, 0x01, VAR_7);
  if (VAR_6)
   goto err;
  VAR_6 = FUNC_5(VAR_4->regmap, 0xd520, 0x10, VAR_8);
  if (VAR_6)
   goto err;

  VAR_4->usb_ts_if_configured[VAR_12] = 1;
 }

 if (VAR_12 == 0 && VAR_2) {

  VAR_6 = FUNC_5(VAR_4->regmap, 0xdd13, 0x20, 0x00);
  if (VAR_6)
   goto err;
  VAR_6 = FUNC_5(VAR_4->regmap, 0xdd11, 0x20, 0x20);
  if (VAR_6)
   goto err;
  VAR_6 = FUNC_5(VAR_4->regmap, 0xd507, 0x04, 0x00);
  if (VAR_6)
   goto err;
 } else if (VAR_12 == 1 && VAR_2) {

  VAR_6 = FUNC_5(VAR_4->regmap, 0xdd13, 0x40, 0x00);
  if (VAR_6)
   goto err;
  VAR_6 = FUNC_5(VAR_4->regmap, 0xdd11, 0x40, 0x40);
  if (VAR_6)
   goto err;
  VAR_6 = FUNC_5(VAR_4->regmap, 0xd50b, 0x02, 0x00);
  if (VAR_6)
   goto err;
 } else if (VAR_12 == 0 && !VAR_2) {

  VAR_6 = FUNC_5(VAR_4->regmap, 0xd507, 0x04, 0x04);
  if (VAR_6)
   goto err;
  VAR_6 = FUNC_5(VAR_4->regmap, 0xdd11, 0x20, 0x00);
  if (VAR_6)
   goto err;
  VAR_6 = FUNC_5(VAR_4->regmap, 0xdd13, 0x20, 0x20);
  if (VAR_6)
   goto err;
 } else if (VAR_12 == 1 && !VAR_2) {

  VAR_6 = FUNC_5(VAR_4->regmap, 0xd50b, 0x02, 0x02);
  if (VAR_6)
   goto err;
  VAR_6 = FUNC_5(VAR_4->regmap, 0xdd11, 0x40, 0x00);
  if (VAR_6)
   goto err;
  VAR_6 = FUNC_5(VAR_4->regmap, 0xdd13, 0x40, 0x40);
  if (VAR_6)
   goto err;
 }

 return 0;
err:
 FUNC_1(&VAR_5->dev, "failed %d\n", VAR_6);
 return VAR_6;
}
