
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct dvb_usb_device {TYPE_1__* udev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct dvb_usb_device*,int*,int,int*,int) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, u8 VAR_1, int VAR_2,
     u8 VAR_3, int *VAR_4)
{
 struct dvb_usb_device *VAR_5 = VAR_0;
 int VAR_6 = 0;
 u8 VAR_7[4], VAR_8[2], VAR_9, VAR_10;

 VAR_7[1] = (u8)((VAR_2 >> 8) & 0xff);
 VAR_7[2] = (u8)(VAR_2 & 0xff);
 if (VAR_1) {
  VAR_7[0] = 0x71;
  VAR_9 = 3;
  VAR_10 = 2;
 } else {
  VAR_7[0] = 0x70;
  VAR_7[3] = VAR_3;
  VAR_9 = 4;
  VAR_10 = 1;
 }
 VAR_6 = FUNC_1(VAR_5, VAR_7, VAR_9,
   VAR_8, VAR_10);
 if (VAR_6)
  goto err;
 if (VAR_1)
  *VAR_4 = VAR_8[1];
 return VAR_6;
err:
 FUNC_0(&VAR_5->udev->dev, "ci control failed=%d\n", VAR_6);
 return VAR_6;
}
