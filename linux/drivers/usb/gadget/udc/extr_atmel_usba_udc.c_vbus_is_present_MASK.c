
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usba_udc {scalar_t__ vbus_pin; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct usba_udc *VAR_0)
{
 if (VAR_0->vbus_pin)
  return FUNC_0(VAR_0->vbus_pin);


 return 1;
}
