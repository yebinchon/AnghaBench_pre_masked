
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_function_instance {int (* free_func_inst ) (struct usb_function_instance*) ;TYPE_1__* fd; } ;
struct module {int dummy; } ;
struct TYPE_2__ {struct module* mod; } ;


 int FUNC_0 (struct module*) ;
 int FUNC_1 (struct usb_function_instance*) ;

void FUNC_2(struct usb_function_instance *VAR_0)
{
 struct module *VAR_1;

 if (!VAR_0)
  return;

 VAR_1 = VAR_0->fd->mod;
 VAR_0->free_func_inst(VAR_0);
 FUNC_0(VAR_1);
}
