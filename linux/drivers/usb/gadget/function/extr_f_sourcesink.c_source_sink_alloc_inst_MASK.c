
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_function_instance {int group; int free_func_inst; } ;
struct f_ss_opts {struct usb_function_instance func_inst; int iso_qlen; int bulk_qlen; int bulk_buflen; int isoc_maxpacket; int isoc_interval; int lock; } ;


 int VAR_0 ;
 struct usb_function_instance* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,char*,int *) ;
 struct f_ss_opts* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static struct usb_function_instance *FUNC_4(void)
{
 struct f_ss_opts *VAR_9;

 VAR_9 = FUNC_2(sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return FUNC_0(-VAR_0);
 FUNC_3(&VAR_9->lock);
 VAR_9->func_inst.free_func_inst = VAR_7;
 VAR_9->isoc_interval = VAR_3;
 VAR_9->isoc_maxpacket = VAR_4;
 VAR_9->bulk_buflen = VAR_2;
 VAR_9->bulk_qlen = VAR_5;
 VAR_9->iso_qlen = VAR_6;

 FUNC_1(&VAR_9->func_inst.group, "",
        &VAR_8);

 return &VAR_9->func_inst;
}
