
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dev; } ;
struct usb_serial {int dev; } ;
struct tty_struct {int dummy; } ;
typedef int speed_t ;


 scalar_t__ FUNC_0 (struct tty_struct*) ;
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
 int FUNC_1 (int *,char*,unsigned char,...) ;
 int FUNC_2 (int *,char*,int ,int) ;
 int FUNC_3 (unsigned char*) ;
 unsigned char* FUNC_4 (int ,int ) ;
 unsigned int FUNC_5 (struct usb_serial*,int ,int *) ;
 int FUNC_6 (unsigned int,unsigned char*) ;
 int FUNC_7 (struct tty_struct*,int ,int ) ;
 int FUNC_8 (int ,int ,int ,int ,int ,int ,unsigned char*,int ,int ) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static int FUNC_10(struct tty_struct *VAR_11,
 struct usb_serial *VAR_12, struct usb_serial_port *VAR_13, speed_t VAR_14)
{
 unsigned int VAR_15;
 int VAR_16;
 unsigned char *VAR_17;
 unsigned char VAR_18 = 0;
 speed_t VAR_19;

 VAR_17 = FUNC_4(VAR_2, VAR_1);
 if (VAR_17 == ((void*)0))
  return -VAR_0;

 VAR_15 = FUNC_5(VAR_12, VAR_14, &VAR_19);
 FUNC_6(VAR_15, VAR_17);
 VAR_16 = FUNC_8(VAR_12->dev, FUNC_9(VAR_12->dev, 0),
    VAR_3,
    VAR_7,
    0, 0, VAR_17, VAR_4,
    VAR_10);
 if (VAR_16 < 0)
  FUNC_2(&VAR_13->dev, "Set BAUD RATE %d failed (error = %d)\n",
   VAR_14, VAR_16);
 else
  FUNC_7(VAR_11, VAR_19, VAR_19);
 FUNC_1(&VAR_13->dev, "set_baud_rate: value: 0x%x, divisor: 0x%x\n", VAR_14, VAR_15);
 VAR_17[0] = 0;
 VAR_16 = FUNC_8(VAR_12->dev, FUNC_9(VAR_12->dev, 0),
    VAR_8,
    VAR_7,
    0, 0, VAR_17, VAR_9,
    VAR_10);
 if (VAR_16 < 0)
  FUNC_2(&VAR_13->dev, "Sending USB device request code %d "
   "failed (error = %d)\n", VAR_8,
   VAR_16);

 if (VAR_13 && FUNC_0(VAR_11))
    VAR_18 = 1;

 FUNC_1(&VAR_13->dev, "set_baud_rate: send second control message, data = %02X\n",
  VAR_18);
 VAR_17[0] = VAR_18;
 VAR_16 = FUNC_8(VAR_12->dev, FUNC_9(VAR_12->dev, 0),
   VAR_5,
   VAR_7,
   0, 0, VAR_17, VAR_6,
   VAR_10);
 if (VAR_16 < 0)
  FUNC_2(&VAR_13->dev, "Sending USB device request code %d "
   "failed (error = %d)\n", VAR_5, VAR_16);

 FUNC_3(VAR_17);
 return VAR_16;
}
