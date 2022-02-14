
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int dev; } ;
struct ftdi_private {size_t chip_type; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,int *) ;
 int * VAR_10 ;
 struct ftdi_private* FUNC_2 (struct usb_serial_port*) ;

__attribute__((used)) static int FUNC_3(struct usb_serial_port *VAR_11)
{
 struct ftdi_private *VAR_12 = FUNC_2(VAR_11);
 int VAR_13 = 0;



 if (VAR_12->chip_type != VAR_7) {
  FUNC_0(&VAR_11->dev, "sysfs attributes for %s\n", VAR_10[VAR_12->chip_type]);
  VAR_13 = FUNC_1(&VAR_11->dev, &VAR_8);
  if ((!VAR_13) &&
      (VAR_12->chip_type == VAR_2 ||
       VAR_12->chip_type == VAR_0 ||
       VAR_12->chip_type == VAR_4 ||
       VAR_12->chip_type == VAR_1 ||
       VAR_12->chip_type == VAR_5 ||
       VAR_12->chip_type == VAR_3 ||
       VAR_12->chip_type == VAR_6)) {
   VAR_13 = FUNC_1(&VAR_11->dev,
          &VAR_9);
  }
 }
 return VAR_13;
}
