
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int num_altsetting; struct usb_host_interface* altsetting; } ;
struct TYPE_2__ {unsigned int bAlternateSetting; } ;
struct usb_host_interface {TYPE_1__ desc; } ;



struct usb_host_interface *FUNC_0(
     const struct usb_interface *VAR_0,
     unsigned int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_altsetting; VAR_2++) {
  if (VAR_0->altsetting[VAR_2].desc.bAlternateSetting == VAR_1)
   return &VAR_0->altsetting[VAR_2];
 }
 return ((void*)0);
}
