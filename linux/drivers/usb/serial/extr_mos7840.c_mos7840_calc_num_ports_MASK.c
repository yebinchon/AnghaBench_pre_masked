
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_serial_endpoints {int num_bulk_in; int num_bulk_out; } ;
struct usb_serial {TYPE_1__* interface; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (struct usb_serial*) ;

__attribute__((used)) static int FUNC_2(struct usb_serial *VAR_2,
     struct usb_serial_endpoints *VAR_3)
{
 int VAR_4 = (unsigned long)FUNC_1(VAR_2);
 int VAR_5;

 if (VAR_4 == VAR_1)
  VAR_5 = 3;
 else
  VAR_5 = (VAR_4 >> 4) & 0x000F;





 if (VAR_5 == 0)
  return -VAR_0;

 if (VAR_3->num_bulk_in < VAR_5 || VAR_3->num_bulk_out < VAR_5) {
  FUNC_0(&VAR_2->interface->dev, "missing endpoints\n");
  return -VAR_0;
 }

 return VAR_5;
}
