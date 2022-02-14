
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_function_instance {int dummy; } ;
struct f_fs_opts {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct f_fs_opts*) ;
 struct f_fs_opts* FUNC_4 (struct usb_function_instance*) ;

__attribute__((used)) static void FUNC_5(struct usb_function_instance *VAR_0)
{
 struct f_fs_opts *VAR_1;

 VAR_1 = FUNC_4(VAR_0);
 FUNC_1();
 FUNC_0(VAR_1->dev);
 FUNC_2();
 FUNC_3(VAR_1);
}
