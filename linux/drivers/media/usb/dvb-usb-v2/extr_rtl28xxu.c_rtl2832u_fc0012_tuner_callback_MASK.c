
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct dvb_usb_device {TYPE_1__* intf; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (struct dvb_usb_device*,int ,int*) ;
 int FUNC_2 (struct dvb_usb_device*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_usb_device *VAR_2,
  int VAR_3, int VAR_4)
{
 int VAR_5;
 u8 VAR_6;

 FUNC_0(&VAR_2->intf->dev, "cmd=%d arg=%d\n", VAR_3, VAR_4);

 switch (VAR_3) {
 case 128:

  VAR_5 = FUNC_1(VAR_2, VAR_1, &VAR_6);
  if (VAR_5)
   goto err;

  if (VAR_4)
   VAR_6 &= 0xbf;
  else
   VAR_6 |= 0x40;


  VAR_5 = FUNC_2(VAR_2, VAR_1, VAR_6);
  if (VAR_5)
   goto err;
  break;
 default:
  VAR_5 = -VAR_0;
  goto err;
 }
 return 0;
err:
 FUNC_0(&VAR_2->intf->dev, "failed=%d\n", VAR_5);
 return VAR_5;
}
