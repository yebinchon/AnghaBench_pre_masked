
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct usb_device_id {int dummy; } ;
struct us_data {char* protocol_name; int proto_handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct usb_device_id const* VAR_3 ;
 int FUNC_0 (struct us_data**,struct usb_interface*,struct usb_device_id const*,int,int *) ;
 int FUNC_1 (struct us_data*) ;

__attribute__((used)) static int FUNC_2(struct usb_interface *VAR_4,
    const struct usb_device_id *VAR_5)
{
 struct us_data *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(&VAR_6, VAR_4, VAR_5,
   (VAR_5 - VAR_3) + VAR_2,
   &VAR_1);
 if (VAR_7)
  return VAR_7;

 VAR_6->protocol_name = "ISD200 ATA/ATAPI";
 VAR_6->proto_handler = VAR_0;

 VAR_7 = FUNC_1(VAR_6);
 return VAR_7;
}
