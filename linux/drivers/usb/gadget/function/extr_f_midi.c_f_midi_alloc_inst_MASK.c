
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_function_instance {int group; int free_func_inst; } ;
struct f_midi_opts {int buflen; int qlen; int in_ports; int out_ports; int refcnt; struct usb_function_instance func_inst; int id; int index; int lock; } ;


 int VAR_0 ;
 struct usb_function_instance* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,char*,int *) ;
 int VAR_4 ;
 struct f_midi_opts* FUNC_2 (int,int ) ;
 int VAR_5 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct usb_function_instance *FUNC_4(void)
{
 struct f_midi_opts *VAR_6;

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 FUNC_3(&VAR_6->lock);
 VAR_6->func_inst.free_func_inst = VAR_4;
 VAR_6->index = VAR_2;
 VAR_6->id = VAR_3;
 VAR_6->buflen = 512;
 VAR_6->qlen = 32;
 VAR_6->in_ports = 1;
 VAR_6->out_ports = 1;
 VAR_6->refcnt = 1;

 FUNC_1(&VAR_6->func_inst.group, "",
        &VAR_5);

 return &VAR_6->func_inst;
}
