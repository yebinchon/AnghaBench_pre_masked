
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_function {int dummy; } ;
struct usb_configuration {int dummy; } ;
struct fsg_dev {int function; struct fsg_common* common; } ;
struct fsg_common {struct fsg_dev* fsg; int fsg_wait; } ;


 int FUNC_0 (struct fsg_dev*,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct fsg_common*,int ,int *) ;
 struct fsg_dev* FUNC_2 (struct usb_function*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void FUNC_5(struct usb_configuration *VAR_1, struct usb_function *VAR_2)
{
 struct fsg_dev *VAR_3 = FUNC_2(VAR_2);
 struct fsg_common *VAR_4 = VAR_3->common;

 FUNC_0(VAR_3, "unbind\n");
 if (VAR_3->common->fsg == VAR_3) {
  FUNC_1(VAR_3->common, VAR_0, ((void*)0));

  FUNC_4(VAR_4->fsg_wait, VAR_4->fsg != VAR_3);
 }

 FUNC_3(&VAR_3->function);
}
