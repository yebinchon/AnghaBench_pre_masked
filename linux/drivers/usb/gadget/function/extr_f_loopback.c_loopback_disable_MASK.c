
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_function {int dummy; } ;
struct f_loopback {int dummy; } ;


 int FUNC_0 (struct f_loopback*) ;
 struct f_loopback* FUNC_1 (struct usb_function*) ;

__attribute__((used)) static void FUNC_2(struct usb_function *VAR_0)
{
 struct f_loopback *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1);
}
