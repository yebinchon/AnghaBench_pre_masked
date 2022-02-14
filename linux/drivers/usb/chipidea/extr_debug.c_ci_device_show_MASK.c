
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_gadget {char* speed; char* max_speed; char* is_otg; char* is_a_peripheral; char* b_hnp_enable; char* a_hnp_support; char* a_alt_hnp_support; char* name; } ;
struct seq_file {struct ci_hdrc* private; } ;
struct ci_hdrc {TYPE_1__* driver; struct usb_gadget gadget; } ;
struct TYPE_2__ {char* function; char* max_speed; } ;


 int FUNC_0 (struct seq_file*,char*,char*) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_0, void *VAR_1)
{
 struct ci_hdrc *VAR_2 = VAR_0->private;
 struct usb_gadget *VAR_3 = &VAR_2->gadget;

 FUNC_0(VAR_0, "speed             = %d\n", VAR_3->speed);
 FUNC_0(VAR_0, "max_speed         = %d\n", VAR_3->max_speed);
 FUNC_0(VAR_0, "is_otg            = %d\n", VAR_3->is_otg);
 FUNC_0(VAR_0, "is_a_peripheral   = %d\n", VAR_3->is_a_peripheral);
 FUNC_0(VAR_0, "b_hnp_enable      = %d\n", VAR_3->b_hnp_enable);
 FUNC_0(VAR_0, "a_hnp_support     = %d\n", VAR_3->a_hnp_support);
 FUNC_0(VAR_0, "a_alt_hnp_support = %d\n", VAR_3->a_alt_hnp_support);
 FUNC_0(VAR_0, "name              = %s\n",
     (VAR_3->name ? VAR_3->name : ""));

 if (!VAR_2->driver)
  return 0;

 FUNC_0(VAR_0, "gadget function   = %s\n",
         (VAR_2->driver->function ? VAR_2->driver->function : ""));
 FUNC_0(VAR_0, "gadget max speed  = %d\n", VAR_2->driver->max_speed);

 return 0;
}
