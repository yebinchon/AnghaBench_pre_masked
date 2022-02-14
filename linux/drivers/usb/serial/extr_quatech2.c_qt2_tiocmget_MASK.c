
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct usb_serial_port {TYPE_1__* serial; } ;
struct usb_device {int dummy; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;
struct qt2_port_private {int device_port; } ;
struct TYPE_2__ {struct usb_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int*) ;
 int* FUNC_1 (int,int ) ;
 int FUNC_2 (struct usb_device*,int ,int ,int*) ;
 struct qt2_port_private* FUNC_3 (struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_4(struct tty_struct *VAR_16)
{
 struct usb_serial_port *VAR_17 = VAR_16->driver_data;
 struct usb_device *VAR_18 = VAR_17->serial->dev;
 struct qt2_port_private *VAR_19 = FUNC_3(VAR_17);
 u8 *VAR_20;
 int VAR_21;

 VAR_20 = FUNC_1(2, VAR_1);
 if (!VAR_20)
  return -VAR_0;

 VAR_21 = FUNC_2(VAR_18, VAR_19->device_port, VAR_8, VAR_20);
 if (VAR_21 < 0)
  goto mget_out;

 VAR_21 = FUNC_2(VAR_18, VAR_19->device_port, VAR_11, VAR_20 + 1);
 if (VAR_21 < 0)
  goto mget_out;

 VAR_21 = (VAR_20[0] & VAR_9 ? VAR_5 : 0) |
     (VAR_20[0] & VAR_10 ? VAR_7 : 0) |
     (VAR_20[1] & VAR_12 ? VAR_3 : 0) |
     (VAR_20[1] & VAR_13 ? VAR_2 : 0) |
     (VAR_20[1] & VAR_15 ? VAR_6 : 0) |
     (VAR_20[1] & VAR_14 ? VAR_4 : 0);

mget_out:
 FUNC_0(VAR_20);
 return VAR_21;
}
