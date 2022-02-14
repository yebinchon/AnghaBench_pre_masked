
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct dvb_usb_device {TYPE_1__* intf; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;


 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (struct dvb_usb_device*,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_usb_device *VAR_1,
  int VAR_2, int VAR_3)
{
 int VAR_4;
 u8 VAR_5;

 FUNC_0(&VAR_1->intf->dev, "cmd=%d arg=%d\n", VAR_2, VAR_3);







 switch (VAR_2) {
 case 129:
  if (VAR_3)
   VAR_5 = (1 << 4);
  else
   VAR_5 = (0 << 4);

  VAR_4 = FUNC_1(VAR_1, VAR_0, VAR_5, 0x10);
  if (VAR_4)
   goto err;
  break;
 case 128:
  if (VAR_3)
   VAR_5 = (1 << 1);
  else
   VAR_5 = (0 << 1);

  VAR_4 = FUNC_1(VAR_1, VAR_0, VAR_5, 0x02);
  if (VAR_4)
   goto err;
  break;
 }

 return 0;
err:
 FUNC_0(&VAR_1->intf->dev, "failed=%d\n", VAR_4);
 return VAR_4;
}
