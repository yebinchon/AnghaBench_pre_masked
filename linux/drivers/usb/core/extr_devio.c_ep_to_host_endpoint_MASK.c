
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_host_endpoint {int dummy; } ;
struct usb_device {struct usb_host_endpoint** ep_out; struct usb_host_endpoint** ep_in; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;

__attribute__((used)) static struct usb_host_endpoint *FUNC_0(struct usb_device *VAR_2,
           unsigned char VAR_3)
{
 if (VAR_3 & VAR_0)
  return VAR_2->ep_in[VAR_3 & VAR_1];
 else
  return VAR_2->ep_out[VAR_3 & VAR_1];
}
