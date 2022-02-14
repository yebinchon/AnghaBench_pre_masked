
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_gadget {scalar_t__ speed; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct usb_gadget*) ;

__attribute__((used)) static inline int FUNC_1(struct usb_gadget *VAR_3, unsigned VAR_4)
{
 if (FUNC_0(VAR_3) && (VAR_3->speed == VAR_1 ||
         VAR_3->speed == VAR_2))
  return VAR_4 * VAR_0;
 else
  return VAR_0;
}
