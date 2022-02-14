
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_function {int dummy; } ;
struct f_uac1 {int g_audio; scalar_t__ as_in_alt; scalar_t__ as_out_alt; } ;


 struct f_uac1* FUNC_0 (struct usb_function*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct usb_function *VAR_0)
{
 struct f_uac1 *VAR_1 = FUNC_0(VAR_0);

 VAR_1->as_out_alt = 0;
 VAR_1->as_in_alt = 0;

 FUNC_1(&VAR_1->g_audio);
}
