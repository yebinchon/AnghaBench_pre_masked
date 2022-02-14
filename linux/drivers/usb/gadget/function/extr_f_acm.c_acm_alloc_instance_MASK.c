
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_function_instance {int group; int free_func_inst; } ;
struct f_serial_opts {struct usb_function_instance func_inst; int port_num; } ;


 int VAR_0 ;
 struct usb_function_instance* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,char*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct f_serial_opts*) ;
 struct f_serial_opts* FUNC_4 (int,int ) ;

__attribute__((used)) static struct usb_function_instance *FUNC_5(void)
{
 struct f_serial_opts *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_4(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return FUNC_0(-VAR_0);
 VAR_4->func_inst.free_func_inst = VAR_2;
 VAR_5 = FUNC_2(&VAR_4->port_num);
 if (VAR_5) {
  FUNC_3(VAR_4);
  return FUNC_0(VAR_5);
 }
 FUNC_1(&VAR_4->func_inst.group, "",
   &VAR_3);
 return &VAR_4->func_inst;
}
