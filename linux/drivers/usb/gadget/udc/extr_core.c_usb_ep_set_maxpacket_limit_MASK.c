
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ep {unsigned int maxpacket_limit; unsigned int maxpacket; } ;


 int FUNC_0 (struct usb_ep*,int ) ;

void FUNC_1(struct usb_ep *VAR_0,
           unsigned VAR_1)
{
 VAR_0->maxpacket_limit = VAR_1;
 VAR_0->maxpacket = VAR_1;

 FUNC_0(VAR_0, 0);
}
