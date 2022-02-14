
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int private_data; } ;
struct bpf_event_entry {struct file* map_file; struct file* perf_file; int event; } ;


 int VAR_0 ;
 struct bpf_event_entry* FUNC_0 (int,int ) ;

__attribute__((used)) static struct bpf_event_entry *FUNC_1(struct file *VAR_1,
         struct file *VAR_2)
{
 struct bpf_event_entry *VAR_3;

 VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_0);
 if (VAR_3) {
  VAR_3->event = VAR_1->private_data;
  VAR_3->perf_file = VAR_1;
  VAR_3->map_file = VAR_2;
 }

 return VAR_3;
}
