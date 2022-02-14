
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct hso_device {int port_spec; int async_put_intf; int async_get_intf; int mutex; int ref; struct usb_interface* interface; int usb; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct usb_interface*) ;
 int FUNC_2 (int *) ;
 struct hso_device* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct hso_device *FUNC_5(struct usb_interface *VAR_3,
         int VAR_4)
{
 struct hso_device *VAR_5;

 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  return ((void*)0);

 VAR_5->port_spec = VAR_4;
 VAR_5->usb = FUNC_1(VAR_3);
 VAR_5->interface = VAR_3;
 FUNC_2(&VAR_5->ref);
 FUNC_4(&VAR_5->mutex);

 FUNC_0(&VAR_5->async_get_intf, VAR_1);
 FUNC_0(&VAR_5->async_put_intf, VAR_2);

 return VAR_5;
}
