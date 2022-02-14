
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_serial_port {int dev; TYPE_1__* serial; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;
struct kobil_private {scalar_t__ device_type; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned char VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int *,char*,unsigned char) ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int ,int ,int,int ,int ,unsigned char*,int,int ) ;
 struct kobil_private* FUNC_4 (struct usb_serial_port*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct tty_struct *VAR_13)
{
 struct usb_serial_port *VAR_14 = VAR_13->driver_data;
 struct kobil_private *VAR_15;
 int VAR_16;
 unsigned char *VAR_17;
 int VAR_18 = 8;

 VAR_15 = FUNC_4(VAR_14);
 if (VAR_15->device_type == VAR_6
   || VAR_15->device_type == VAR_4) {

  return -VAR_0;
 }


 VAR_17 = FUNC_2(VAR_18, VAR_3);
 if (!VAR_17)
  return -VAR_2;

 VAR_16 = FUNC_3(VAR_14->serial->dev,
     FUNC_5(VAR_14->serial->dev, 0),
     VAR_8,
     VAR_12 | VAR_11 | VAR_10,
     0,
     0,
     VAR_17,
     VAR_18,
     VAR_5);

 FUNC_0(&VAR_14->dev, "Send get_status_line_state URB returns: %i\n",
   VAR_16);
 if (VAR_16 < 1) {
  if (VAR_16 >= 0)
   VAR_16 = -VAR_1;
  goto out_free;
 }

 FUNC_0(&VAR_14->dev, "Statusline: %02x\n", VAR_17[0]);

 VAR_16 = 0;
 if ((VAR_17[0] & VAR_7) != 0)
  VAR_16 = VAR_9;
out_free:
 FUNC_1(VAR_17);
 return VAR_16;
}
