
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dev; } ;
struct usb_device_id {int dummy; } ;
struct us_data {int dummy; } ;


 int FUNC_0 (int *,char*) ;
 int VAR_0 ;
 struct usb_device_id const* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct us_data**,struct usb_interface*,struct usb_device_id const*,int,int *) ;
 int FUNC_2 (struct us_data*) ;

__attribute__((used)) static int FUNC_3(struct usb_interface *VAR_3,
       const struct usb_device_id *VAR_4)
{
 struct us_data *VAR_5;
 int VAR_6;

 FUNC_0(&VAR_3->dev, "Probe Realtek Card Reader!\n");

 VAR_6 = FUNC_1(&VAR_5, VAR_3, VAR_4,
     (VAR_4 - VAR_1) +
     VAR_2,
     &VAR_0);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_2(VAR_5);

 return VAR_6;
}
