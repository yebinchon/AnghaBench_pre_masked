
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_serial_endpoints {int num_bulk_out; int * bulk_out; } ;
struct usb_serial {TYPE_1__* interface; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (struct usb_serial*) ;

__attribute__((used)) static int FUNC_4(struct usb_serial *VAR_4,
     struct usb_serial_endpoints *VAR_5)
{
 unsigned long VAR_6 = (unsigned long)FUNC_3(VAR_4);
 int VAR_7;
 int VAR_8;

 if (VAR_6 & VAR_1) {
  VAR_7 = 2;
 } else if (VAR_6 & VAR_2) {
  VAR_7 = 4;
 } else if (VAR_6 & VAR_3) {
  VAR_7 = 8;
 } else if (VAR_6 & VAR_0) {
  VAR_7 = 16;
 } else {
  FUNC_2(&VAR_4->interface->dev,
    "unknown device, assuming two ports\n");
  VAR_7 = 2;
 }





 FUNC_1(FUNC_0(VAR_5->bulk_out) < 16);

 for (VAR_8 = 1; VAR_8 < VAR_7; ++VAR_8)
  VAR_5->bulk_out[VAR_8] = VAR_5->bulk_out[0];

 VAR_5->num_bulk_out = VAR_7;

 return VAR_7;
}
