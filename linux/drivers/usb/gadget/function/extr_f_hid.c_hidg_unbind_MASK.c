
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_function {int dummy; } ;
struct usb_configuration {int dummy; } ;
struct f_hidg {int cdev; int minor; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 struct f_hidg* FUNC_3 (struct usb_function*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (struct usb_function*) ;

__attribute__((used)) static void FUNC_5(struct usb_configuration *VAR_2, struct usb_function *VAR_3)
{
 struct f_hidg *VAR_4 = FUNC_3(VAR_3);

 FUNC_2(VAR_0, FUNC_0(VAR_1, VAR_4->minor));
 FUNC_1(&VAR_4->cdev);

 FUNC_4(VAR_3);
}
