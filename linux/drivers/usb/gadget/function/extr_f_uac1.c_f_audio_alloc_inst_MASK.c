
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_function_instance {int group; int free_func_inst; } ;
struct f_uac1_opts {struct usb_function_instance func_inst; int req_number; int p_ssize; int p_srate; int p_chmask; int c_ssize; int c_srate; int c_chmask; int lock; } ;


 int VAR_0 ;
 struct usb_function_instance* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,char*,int *) ;
 int VAR_9 ;
 int VAR_10 ;
 struct f_uac1_opts* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct usb_function_instance *FUNC_4(void)
{
 struct f_uac1_opts *VAR_11;

 VAR_11 = FUNC_2(sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return FUNC_0(-VAR_0);

 FUNC_3(&VAR_11->lock);
 VAR_11->func_inst.free_func_inst = VAR_9;

 FUNC_1(&VAR_11->func_inst.group, "",
        &VAR_10);

 VAR_11->c_chmask = VAR_2;
 VAR_11->c_srate = VAR_3;
 VAR_11->c_ssize = VAR_4;
 VAR_11->p_chmask = VAR_5;
 VAR_11->p_srate = VAR_6;
 VAR_11->p_ssize = VAR_7;
 VAR_11->req_number = VAR_8;
 return &VAR_11->func_inst;
}
