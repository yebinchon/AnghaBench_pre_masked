
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_function_instance {int group; int free_func_inst; } ;
struct f_printer_opts {scalar_t__ minor; struct usb_function_instance func_inst; int lock; } ;


 int VAR_0 ;
 struct usb_function_instance* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*,int *) ;
 int FUNC_2 () ;
 int VAR_3 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (struct f_printer_opts*) ;
 struct f_printer_opts* FUNC_7 (int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static struct usb_function_instance *FUNC_11(void)
{
 struct f_printer_opts *VAR_7;
 struct usb_function_instance *VAR_8;
 int VAR_9 = 0;

 VAR_7 = FUNC_7(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return FUNC_0(-VAR_0);

 FUNC_8(&VAR_7->lock);
 VAR_7->func_inst.free_func_inst = VAR_3;
 VAR_8 = &VAR_7->func_inst;

 FUNC_9(&VAR_6);

 if (FUNC_5(&VAR_5)) {
  VAR_9 = FUNC_4(VAR_2);
  if (VAR_9) {
   VAR_8 = FUNC_0(VAR_9);
   FUNC_6(VAR_7);
   goto unlock;
  }
 }

 VAR_7->minor = FUNC_3();
 if (VAR_7->minor < 0) {
  VAR_8 = FUNC_0(VAR_7->minor);
  FUNC_6(VAR_7);
  if (FUNC_5(&VAR_5))
   FUNC_2();
  goto unlock;
 }
 FUNC_1(&VAR_7->func_inst.group, "",
        &VAR_4);

unlock:
 FUNC_10(&VAR_6);
 return VAR_8;
}
