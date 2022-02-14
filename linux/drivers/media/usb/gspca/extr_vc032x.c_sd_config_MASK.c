
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_id {int driver_info; int idVendor; int idProduct; } ;
struct sd {int bridge; int flags; int sensor; } ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct gspca_dev *VAR_1,
   const struct usb_device_id *VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_1;

 VAR_3->bridge = VAR_2->driver_info >> 8;
 VAR_3->flags = VAR_2->driver_info & 0xff;

 if (VAR_2->idVendor == 0x046d &&
     (VAR_2->idProduct == 0x0892 || VAR_2->idProduct == 0x0896))
  VAR_3->sensor = VAR_0;

 return 0;
}
