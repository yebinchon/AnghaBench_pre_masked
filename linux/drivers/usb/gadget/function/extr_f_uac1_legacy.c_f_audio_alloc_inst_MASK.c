
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_function_instance {int group; int free_func_inst; } ;
struct f_uac1_legacy_opts {struct usb_function_instance func_inst; int fn_cntl; int fn_cap; int fn_play; int audio_buf_size; int req_count; int req_buf_size; int lock; } ;


 int VAR_0 ;
 struct usb_function_instance* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,char*,int *) ;
 int VAR_8 ;
 int VAR_9 ;
 struct f_uac1_legacy_opts* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct usb_function_instance *FUNC_4(void)
{
 struct f_uac1_legacy_opts *VAR_10;

 VAR_10 = FUNC_2(sizeof(*VAR_10), VAR_4);
 if (!VAR_10)
  return FUNC_0(-VAR_0);

 FUNC_3(&VAR_10->lock);
 VAR_10->func_inst.free_func_inst = VAR_8;

 FUNC_1(&VAR_10->func_inst.group, "",
        &VAR_9);

 VAR_10->req_buf_size = VAR_6;
 VAR_10->req_count = VAR_7;
 VAR_10->audio_buf_size = VAR_5;
 VAR_10->fn_play = VAR_3;
 VAR_10->fn_cap = VAR_2;
 VAR_10->fn_cntl = VAR_1;
 return &VAR_10->func_inst;
}
