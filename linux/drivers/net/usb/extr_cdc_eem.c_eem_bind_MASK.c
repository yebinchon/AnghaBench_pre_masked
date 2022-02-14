
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbnet {TYPE_1__* net; scalar_t__ hard_mtu; } ;
struct usb_interface {int dummy; } ;
struct TYPE_2__ {scalar_t__ hard_header_len; scalar_t__ mtu; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct usbnet*,struct usb_interface*) ;

__attribute__((used)) static int FUNC_1(struct usbnet *VAR_3, struct usb_interface *VAR_4)
{
 int VAR_5 = 0;

 VAR_5 = FUNC_0(VAR_3, VAR_4);
 if (VAR_5 < 0)
  return VAR_5;



 VAR_3->net->hard_header_len += VAR_0 + VAR_1 + VAR_2;
 VAR_3->hard_mtu = VAR_3->net->mtu + VAR_3->net->hard_header_len;

 return 0;
}
