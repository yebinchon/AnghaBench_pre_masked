
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dev; } ;
struct tty_struct {struct usb_serial_port* driver_data; } ;
struct moschip_port {unsigned int shadowMCR; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (int *,char*) ;
 struct moschip_port* FUNC_1 (struct usb_serial_port*) ;
 int FUNC_2 (struct usb_serial_port*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct tty_struct *VAR_8,
       unsigned int VAR_9, unsigned int VAR_10)
{
 struct usb_serial_port *VAR_11 = VAR_8->driver_data;
 struct moschip_port *VAR_12;
 unsigned int VAR_13;
 int VAR_14;

 VAR_12 = FUNC_1(VAR_11);

 if (VAR_12 == ((void*)0))
  return -VAR_0;


 VAR_13 = VAR_12->shadowMCR;
 if (VAR_10 & VAR_7)
  VAR_13 &= ~VAR_3;
 if (VAR_10 & VAR_5)
  VAR_13 &= ~VAR_1;
 if (VAR_10 & VAR_6)
  VAR_13 &= ~VAR_2;

 if (VAR_9 & VAR_7)
  VAR_13 |= VAR_3;
 if (VAR_9 & VAR_5)
  VAR_13 |= VAR_1;
 if (VAR_9 & VAR_6)
  VAR_13 |= VAR_2;

 VAR_12->shadowMCR = VAR_13;

 VAR_14 = FUNC_2(VAR_11, VAR_4, VAR_13);
 if (VAR_14 < 0) {
  FUNC_0(&VAR_11->dev, "setting MODEM_CONTROL_REGISTER Failed\n");
  return VAR_14;
 }

 return 0;
}
