
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_function_instance {int dummy; } ;
struct usb_function {char* name; int free_func; int disable; int setup; int set_alt; int unbind; int bind; } ;
struct f_uas {struct usb_function function; int tpg; } ;
struct TYPE_2__ {int tpg; struct usb_function_instance* func_inst; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct usb_function* FUNC_0 (int ) ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 struct f_uas* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__* VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static struct usb_function *FUNC_4(struct usb_function_instance *VAR_12)
{
 struct f_uas *VAR_13;
 unsigned VAR_14;

 FUNC_2(&VAR_11);
 for (VAR_14 = 0; VAR_14 < VAR_3; ++VAR_14)
  if (VAR_10[VAR_14].func_inst == VAR_12)
   break;
 if (VAR_14 == VAR_3) {
  FUNC_3(&VAR_11);
  return FUNC_0(-VAR_0);
 }

 VAR_13 = FUNC_1(sizeof(*VAR_13), VAR_2);
 if (!VAR_13) {
  FUNC_3(&VAR_11);
  return FUNC_0(-VAR_1);
 }

 VAR_13->function.name = "Target Function";
 VAR_13->function.bind = VAR_4;
 VAR_13->function.unbind = VAR_9;
 VAR_13->function.set_alt = VAR_7;
 VAR_13->function.setup = VAR_8;
 VAR_13->function.disable = VAR_5;
 VAR_13->function.free_func = VAR_6;
 VAR_13->tpg = VAR_10[VAR_14].tpg;
 FUNC_3(&VAR_11);

 return &VAR_13->function;
}
