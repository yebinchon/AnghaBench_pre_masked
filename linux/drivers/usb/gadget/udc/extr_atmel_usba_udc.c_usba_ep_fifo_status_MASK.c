
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usba_ep {int dummy; } ;
struct usb_ep {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 struct usba_ep* FUNC_1 (struct usb_ep*) ;
 int FUNC_2 (struct usba_ep*,int ) ;

__attribute__((used)) static int FUNC_3(struct usb_ep *VAR_2)
{
 struct usba_ep *VAR_3 = FUNC_1(VAR_2);

 return FUNC_0(VAR_0, FUNC_2(VAR_3, VAR_1));
}
