
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_function {int dummy; } ;
struct f_phonet {int dummy; } ;


 struct f_phonet* FUNC_0 (struct usb_function*) ;
 int FUNC_1 (struct f_phonet*) ;

__attribute__((used)) static void FUNC_2(struct usb_function *VAR_0)
{
 struct f_phonet *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 FUNC_1(VAR_1);
}
