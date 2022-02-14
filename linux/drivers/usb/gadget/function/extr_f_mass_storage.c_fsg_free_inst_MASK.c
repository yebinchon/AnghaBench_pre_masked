
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_function_instance {int dummy; } ;
struct fsg_opts {int common; } ;


 int FUNC_0 (int ) ;
 struct fsg_opts* FUNC_1 (struct usb_function_instance*) ;
 int FUNC_2 (struct fsg_opts*) ;

__attribute__((used)) static void FUNC_3(struct usb_function_instance *VAR_0)
{
 struct fsg_opts *VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 FUNC_0(VAR_1->common);
 FUNC_2(VAR_1);
}
