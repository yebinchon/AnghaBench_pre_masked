
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_function_instance {int group; int free_func_inst; int set_inst_name; } ;
struct f_tcm_opts {struct usb_function_instance func_inst; int tcm_unregister_callback; int tcm_register_callback; int dep_lock; } ;
struct TYPE_2__ {struct usb_function_instance* func_inst; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct usb_function_instance* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,char*,int *) ;
 int FUNC_2 (struct f_tcm_opts*) ;
 struct f_tcm_opts* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__* VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static struct usb_function_instance *FUNC_7(void)
{
 struct f_tcm_opts *VAR_11;
 int VAR_12;


 VAR_11 = FUNC_3(sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return FUNC_0(-VAR_1);

 FUNC_5(&VAR_10);
 for (VAR_12 = 0; VAR_12 < VAR_3; ++VAR_12)
  if (!VAR_9[VAR_12].func_inst)
   break;

 if (VAR_12 == VAR_3) {
  FUNC_6(&VAR_10);
  FUNC_2(VAR_11);
  return FUNC_0(-VAR_0);
 }
 VAR_9[VAR_12].func_inst = &VAR_11->func_inst;
 FUNC_6(&VAR_10);

 FUNC_4(&VAR_11->dep_lock);
 VAR_11->func_inst.set_inst_name = VAR_7;
 VAR_11->func_inst.free_func_inst = VAR_4;
 VAR_11->tcm_register_callback = VAR_6;
 VAR_11->tcm_unregister_callback = VAR_8;

 FUNC_1(&VAR_11->func_inst.group, "",
   &VAR_5);

 return &VAR_11->func_inst;
}
