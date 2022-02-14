
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int num_altsetting; struct usb_host_interface* altsetting; } ;
struct usb_host_interface {int dummy; } ;


 scalar_t__ FUNC_0 (struct usb_host_interface*) ;

__attribute__((used)) static struct usb_host_interface *FUNC_1(
  struct usb_interface *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_altsetting; VAR_1++) {
  struct usb_host_interface *VAR_2 = &VAR_0->altsetting[VAR_1];

  if (FUNC_0(VAR_2))
   return VAR_2;
 }

 return ((void*)0);
}
