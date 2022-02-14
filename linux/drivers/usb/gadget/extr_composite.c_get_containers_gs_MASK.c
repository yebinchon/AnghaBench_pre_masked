
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_gadget_strings {int dummy; } ;
struct usb_gadget_string_container {scalar_t__ stash; } ;



__attribute__((used)) static struct usb_gadget_strings **FUNC_0(
  struct usb_gadget_string_container *VAR_0)
{
 return (struct usb_gadget_strings **)VAR_0->stash;
}
