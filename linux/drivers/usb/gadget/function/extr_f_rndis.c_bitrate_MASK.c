
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_gadget {scalar_t__ speed; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct usb_gadget*) ;
 scalar_t__ FUNC_1 (struct usb_gadget*) ;

__attribute__((used)) static unsigned int FUNC_2(struct usb_gadget *VAR_2)
{
 if (FUNC_1(VAR_2) && VAR_2->speed == VAR_1)
  return 13 * 1024 * 8 * 1000 * 8;
 else if (FUNC_0(VAR_2) && VAR_2->speed == VAR_0)
  return 13 * 512 * 8 * 1000 * 8;
 else
  return 19 * 64 * 1 * 1000 * 8;
}
