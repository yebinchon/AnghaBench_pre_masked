
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct usb_endpoint_descriptor {int dummy; } ;
struct usb_driver {int dummy; } ;


 struct usb_driver* FUNC_0 (int) ;
 int FUNC_1 (struct usb_interface*,struct usb_endpoint_descriptor*,int,int (*) (struct usb_interface*,int)) ;
 struct usb_driver VAR_0 ;

struct usb_driver *FUNC_2(struct usb_interface *VAR_1,
     struct usb_endpoint_descriptor *VAR_2,
     int VAR_3,
     int (*VAR_4)(struct usb_interface *, int))
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_5 < 0)
  goto err;

 return &VAR_0;
err:
 return FUNC_0(VAR_5);
}
