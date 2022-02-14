
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_serial_port {struct usb_serial* serial; } ;
struct usb_serial {TYPE_2__* dev; } ;
struct kobil_private {int device_type; scalar_t__ cur_pos; scalar_t__ filled; } ;
struct TYPE_3__ {int idProduct; } ;
struct TYPE_4__ {int dev; TYPE_1__ descriptor; } ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (int *,char*) ;
 struct kobil_private* FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct usb_serial_port*,struct kobil_private*) ;

__attribute__((used)) static int FUNC_4(struct usb_serial_port *VAR_2)
{
 struct usb_serial *VAR_3 = VAR_2->serial;
 struct kobil_private *VAR_4;

 VAR_4 = FUNC_1(sizeof(struct kobil_private), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->filled = 0;
 VAR_4->cur_pos = 0;
 VAR_4->device_type = FUNC_2(VAR_3->dev->descriptor.idProduct);

 switch (VAR_4->device_type) {
 case 131:
  FUNC_0(&VAR_3->dev->dev, "KOBIL B1 PRO / KAAN PRO detected\n");
  break;
 case 130:
  FUNC_0(&VAR_3->dev->dev, "KOBIL KAAN Standard Plus / SecOVID Reader Plus detected\n");
  break;
 case 128:
  FUNC_0(&VAR_3->dev->dev, "KOBIL USBTWIN detected\n");
  break;
 case 129:
  FUNC_0(&VAR_3->dev->dev, "KOBIL KAAN SIM detected\n");
  break;
 }
 FUNC_3(VAR_2, VAR_4);

 return 0;
}
