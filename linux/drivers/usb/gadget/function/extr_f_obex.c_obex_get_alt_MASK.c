
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_function {int dummy; } ;
struct f_obex {int cur_alt; } ;


 struct f_obex* FUNC_0 (struct usb_function*) ;

__attribute__((used)) static int FUNC_1(struct usb_function *VAR_0, unsigned VAR_1)
{
 struct f_obex *VAR_2 = FUNC_0(VAR_0);

 return VAR_2->cur_alt;
}
