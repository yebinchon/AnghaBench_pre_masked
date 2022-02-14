
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dev; } ;
struct ftdi_private {scalar_t__ chip_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,int *) ;
 struct ftdi_private* FUNC_1 (struct usb_serial_port*) ;

__attribute__((used)) static void FUNC_2(struct usb_serial_port *VAR_10)
{
 struct ftdi_private *VAR_11 = FUNC_1(VAR_10);


 if (VAR_11->chip_type != VAR_7) {
  FUNC_0(&VAR_10->dev, &VAR_8);
  if (VAR_11->chip_type == VAR_2 ||
      VAR_11->chip_type == VAR_0 ||
      VAR_11->chip_type == VAR_4 ||
      VAR_11->chip_type == VAR_1 ||
      VAR_11->chip_type == VAR_5 ||
      VAR_11->chip_type == VAR_3 ||
      VAR_11->chip_type == VAR_6) {
   FUNC_0(&VAR_10->dev, &VAR_9);
  }
 }

}
