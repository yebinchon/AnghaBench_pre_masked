
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct usb_device_id {int dummy; } ;
struct us_data {char* transport_name; scalar_t__ max_lun; int transport_reset; int transport; } ;


 int VAR_0 ;
 int FUNC_0 (struct us_data**,struct usb_interface*,struct usb_device_id const*,int,int *) ;
 int FUNC_1 (struct us_data*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct usb_device_id const* VAR_4 ;

__attribute__((used)) static int FUNC_2(struct usb_interface *VAR_5,
    const struct usb_device_id *VAR_6)
{
 struct us_data *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_0(&VAR_7, VAR_5, VAR_6,
   (VAR_6 - VAR_4) + VAR_3,
   &VAR_2);
 if (VAR_8)
  return VAR_8;





 VAR_7->transport_name = "Shuttle USBAT";
 VAR_7->transport = VAR_1;
 VAR_7->transport_reset = VAR_0;
 VAR_7->max_lun = 0;

 VAR_8 = FUNC_1(VAR_7);
 return VAR_8;
}
