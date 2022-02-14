
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {scalar_t__ bpf_event; scalar_t__ context_switch; scalar_t__ ksymbol; scalar_t__ task; scalar_t__ comm_exec; scalar_t__ comm; scalar_t__ mmap2; scalar_t__ mmap_data; scalar_t__ mmap; } ;
struct perf_event {int attach_state; scalar_t__ parent; struct perf_event_attr attr; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct perf_event *VAR_1)
{
 struct perf_event_attr *VAR_2 = &VAR_1->attr;

 if (VAR_1->parent)
  return 0;

 if (VAR_1->attach_state & VAR_0)
  return 0;

 if (VAR_2->mmap || VAR_2->mmap_data || VAR_2->mmap2 ||
     VAR_2->comm || VAR_2->comm_exec ||
     VAR_2->task || VAR_2->ksymbol ||
     VAR_2->context_switch ||
     VAR_2->bpf_event)
  return 1;
 return 0;
}
