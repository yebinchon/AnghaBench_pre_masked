
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
 int VAR_2 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct dvb_usb_device*,int ,int*) ;
 int FUNC_2 (struct dvb_usb_device*,int ,int) ;
 int FUNC_3 (struct dvb_usb_device*,int ,char*,int) ;

__attribute__((used)) static int FUNC_4(struct dvb_usb_device *VAR_3)
{
 int VAR_4;
 u8 VAR_5;

 FUNC_0(&VAR_3->intf->dev, "\n");


 VAR_4 = FUNC_1(VAR_3, VAR_2, &VAR_5);
 if (VAR_4)
  goto err;


 VAR_5 |= 0x09;
 VAR_4 = FUNC_2(VAR_3, VAR_2, VAR_5);
 if (VAR_4)
  goto err;


 VAR_4 = FUNC_3(VAR_3, VAR_1, "\x00\x02\x00\x00", 4);
 if (VAR_4)
  goto err;


 VAR_4 = FUNC_3(VAR_3, VAR_0, "\x14\x00\x00\x00", 4);
 if (VAR_4)
  goto err;

 return VAR_4;
err:
 FUNC_0(&VAR_3->intf->dev, "failed=%d\n", VAR_4);
 return VAR_4;
}
