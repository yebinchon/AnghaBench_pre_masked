
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_request {scalar_t__ context; } ;
struct usb_ep {int dummy; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_1(struct usb_ep *VAR_0, struct usb_request *VAR_1)
{
 struct sk_buff *VAR_2 = (struct sk_buff *)VAR_1->context;

 FUNC_0(VAR_2);
}
