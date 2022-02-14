
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct dvb_usb_device {TYPE_1__* intf; int udev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (struct dvb_usb_device*,int ,int*) ;
 int FUNC_2 (struct dvb_usb_device*,int ,int) ;
 int FUNC_3 (struct dvb_usb_device*,int ,int*,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int FUNC_6(struct dvb_usb_device *VAR_3, int VAR_4)
{
 int VAR_5;
 u8 VAR_6, VAR_7, VAR_8[2];

 FUNC_0(&VAR_3->intf->dev, "onoff=%d\n", VAR_4);


 VAR_5 = FUNC_1(VAR_3, VAR_1, &VAR_7);
 if (VAR_5)
  goto err;


 VAR_5 = FUNC_1(VAR_3, VAR_0, &VAR_6);
 if (VAR_5)
  goto err;

 FUNC_0(&VAR_3->intf->dev, "RD SYS0=%02x GPIO_OUT_VAL=%02x\n", VAR_7, VAR_6);

 if (VAR_4) {
  VAR_6 |= 0x01;
  VAR_6 &= (~0x10);
  VAR_6 |= 0x04;
  VAR_7 = VAR_7 & 0x0f;
  VAR_7 |= 0xe0;
  VAR_8[0] = 0x00;
  VAR_8[1] = 0x00;
 } else {
  VAR_6 &= (~0x01);
  VAR_6 |= 0x10;
  VAR_6 &= (~0x04);
  VAR_7 = VAR_7 & (~0xc0);
  VAR_8[0] = 0x10;
  VAR_8[1] = 0x02;
 }

 FUNC_0(&VAR_3->intf->dev, "WR SYS0=%02x GPIO_OUT_VAL=%02x\n", VAR_7, VAR_6);


 VAR_5 = FUNC_2(VAR_3, VAR_1, VAR_7);
 if (VAR_5)
  goto err;


 VAR_5 = FUNC_2(VAR_3, VAR_0, VAR_6);
 if (VAR_5)
  goto err;


 VAR_5 = FUNC_3(VAR_3, VAR_2, VAR_8, 2);
 if (VAR_5)
  goto err;

 if (VAR_4)
  FUNC_4(VAR_3->udev, FUNC_5(VAR_3->udev, 0x81));

 return VAR_5;
err:
 FUNC_0(&VAR_3->intf->dev, "failed=%d\n", VAR_5);
 return VAR_5;
}
