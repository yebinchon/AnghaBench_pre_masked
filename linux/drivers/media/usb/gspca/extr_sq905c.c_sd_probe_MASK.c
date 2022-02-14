
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct usb_device_id {int dummy; } ;
struct sd {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_interface*,struct usb_device_id const*,int *,int,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct usb_interface *VAR_2,
  const struct usb_device_id *VAR_3)
{
 return FUNC_0(VAR_2, VAR_3,
   &VAR_1,
   sizeof(struct sd),
   VAR_0);
}
