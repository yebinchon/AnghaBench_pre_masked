
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dev; } ;
struct ftdi_private {scalar_t__ chip_type; int latency; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct usb_serial_port*) ;
 int FUNC_1 (int *,char*,int) ;
 struct ftdi_private* FUNC_2 (struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_3(struct usb_serial_port *VAR_3)
{
 struct ftdi_private *VAR_4 = FUNC_2(VAR_3);
 int VAR_5;

 if (VAR_4->chip_type == VAR_2 || VAR_4->chip_type == VAR_1)
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_3);
 if (VAR_5 < 0) {
  FUNC_1(&VAR_3->dev, "Unable to read latency timer: %i\n", VAR_5);
  return VAR_5;
 }

 VAR_4->latency = VAR_5;

 return 0;
}
