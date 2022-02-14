
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ep {int claimed; int * driver_data; } ;



void FUNC_0(struct usb_ep *VAR_0)
{
 VAR_0->claimed = 0;
 VAR_0->driver_data = ((void*)0);
}
