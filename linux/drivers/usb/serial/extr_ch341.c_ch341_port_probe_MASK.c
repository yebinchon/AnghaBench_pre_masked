
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_serial_port {TYPE_1__* serial; } ;
struct ch341_private {int lcr; int baud_rate; int lock; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,struct ch341_private*) ;
 int FUNC_1 (struct ch341_private*) ;
 struct ch341_private* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct usb_serial_port*,struct ch341_private*) ;

__attribute__((used)) static int FUNC_5(struct usb_serial_port *VAR_6)
{
 struct ch341_private *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(sizeof(struct ch341_private), VAR_5);
 if (!VAR_7)
  return -VAR_4;

 FUNC_3(&VAR_7->lock);
 VAR_7->baud_rate = VAR_3;




 VAR_7->lcr = VAR_1 | VAR_2 | VAR_0;

 VAR_8 = FUNC_0(VAR_6->serial->dev, VAR_7);
 if (VAR_8 < 0)
  goto error;

 FUNC_4(VAR_6, VAR_7);
 return 0;

error: FUNC_1(VAR_7);
 return VAR_8;
}
