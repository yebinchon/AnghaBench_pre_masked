
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ctrlrequest {scalar_t__ bRequest; scalar_t__ bRequestType; } ;
struct urb {scalar_t__ setup_packet; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct urb *VAR_2)
{
 struct usb_ctrlrequest *VAR_3;

 VAR_3 = (struct usb_ctrlrequest *) VAR_2->setup_packet;

 return (VAR_3->bRequest == VAR_1) &&
  (VAR_3->bRequestType == VAR_0);
}
