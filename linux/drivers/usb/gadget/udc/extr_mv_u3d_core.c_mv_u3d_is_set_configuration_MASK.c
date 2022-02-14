
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ctrlrequest {int bRequestType; scalar_t__ bRequest; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct usb_ctrlrequest *VAR_3)
{
 if ((VAR_3->bRequestType & VAR_1) == VAR_2)
  if (VAR_3->bRequest == VAR_0)
   return 1;

 return 0;
}
