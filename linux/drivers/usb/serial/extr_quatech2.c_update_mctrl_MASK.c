
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_serial_port {int dev; TYPE_1__* serial; } ;
struct usb_device {int dummy; } ;
struct qt2_port_private {int device_port; struct usb_serial_port* port; } ;
struct TYPE_2__ {struct usb_device* dev; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct usb_device*,int ,int ,unsigned int) ;

__attribute__((used)) static inline int FUNC_3(struct qt2_port_private *VAR_5,
          unsigned int VAR_6, unsigned int VAR_7)
{
 struct usb_serial_port *VAR_8 = VAR_5->port;
 struct usb_device *VAR_9 = VAR_8->serial->dev;
 unsigned VAR_10;
 int VAR_11;

 if (((VAR_6 | VAR_7) & (VAR_0 | VAR_1)) == 0) {
  FUNC_0(&VAR_8->dev,
   "update_mctrl - DTR|RTS not being set|cleared\n");
  return 0;
 }

 VAR_7 &= ~VAR_6;
 VAR_10 = 0;
 if (VAR_6 & VAR_0)
  VAR_10 |= VAR_3;
 if (VAR_6 & VAR_1)
  VAR_10 |= VAR_4;

 VAR_11 = FUNC_2(VAR_9, VAR_5->device_port, VAR_2,
     VAR_10);
 if (VAR_11 < 0)
  FUNC_1(&VAR_8->dev,
   "update_mctrl - Error from MODEM_CTRL urb: %i\n",
   VAR_11);
 return VAR_11;
}
