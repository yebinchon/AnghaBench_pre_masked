
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbnet {int hard_mtu; TYPE_1__* net; scalar_t__ rx_urb_size; } ;
struct usb_interface {int dummy; } ;
struct nc_trailer {int dummy; } ;
struct nc_header {int dummy; } ;
struct TYPE_2__ {scalar_t__ mtu; scalar_t__ hard_header_len; } ;


 int VAR_0 ;
 int FUNC_0 (struct usbnet*,struct usb_interface*) ;

__attribute__((used)) static int FUNC_1(struct usbnet *VAR_1, struct usb_interface *VAR_2)
{
 unsigned VAR_3 = sizeof (struct nc_header)
    + 1
    + sizeof (struct nc_trailer);

 VAR_1->net->hard_header_len += VAR_3;
 VAR_1->rx_urb_size = VAR_1->net->hard_header_len + VAR_1->net->mtu;
 VAR_1->hard_mtu = VAR_0;
 return FUNC_0 (VAR_1, VAR_2);
}
