
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_descriptor {scalar_t__ bDeviceProtocol; int bcdUSB; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct usb_device_descriptor *VAR_0)
{
 VAR_0->bcdUSB = FUNC_0(0x0100);
 VAR_0->bDeviceProtocol = 0;
}
