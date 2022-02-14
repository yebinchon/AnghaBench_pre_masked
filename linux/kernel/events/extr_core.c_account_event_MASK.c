
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ bpf_event; scalar_t__ ksymbol; scalar_t__ context_switch; scalar_t__ freq; scalar_t__ task; scalar_t__ namespaces; scalar_t__ comm; scalar_t__ mmap_data; scalar_t__ mmap; } ;
struct perf_event {int attach_state; int cpu; TYPE_1__ attr; scalar_t__ parent; } ;


 int VAR_0 ;
 int FUNC_0 (struct perf_event*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct perf_event*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct perf_event*) ;
 scalar_t__ FUNC_7 (struct perf_event*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_10 (int *) ;
 int FUNC_11 () ;

__attribute__((used)) static void FUNC_12(struct perf_event *VAR_11)
{
 bool VAR_12 = 0;

 if (VAR_11->parent)
  return;

 if (VAR_11->attach_state & VAR_0)
  VAR_12 = 1;
 if (VAR_11->attr.mmap || VAR_11->attr.mmap_data)
  FUNC_3(&VAR_4);
 if (VAR_11->attr.comm)
  FUNC_3(&VAR_2);
 if (VAR_11->attr.namespaces)
  FUNC_3(&VAR_5);
 if (VAR_11->attr.task)
  FUNC_3(&VAR_7);
 if (VAR_11->attr.freq)
  FUNC_1();
 if (VAR_11->attr.context_switch) {
  FUNC_3(&VAR_6);
  VAR_12 = 1;
 }
 if (FUNC_6(VAR_11))
  VAR_12 = 1;
 if (FUNC_7(VAR_11))
  VAR_12 = 1;
 if (VAR_11->attr.ksymbol)
  FUNC_3(&VAR_3);
 if (VAR_11->attr.bpf_event)
  FUNC_3(&VAR_1);

 if (VAR_12) {





  if (FUNC_4(&VAR_8))
   goto enabled;

  FUNC_8(&VAR_10);
  if (!FUNC_5(&VAR_8)) {
   FUNC_10(&VAR_9);





   FUNC_11();
  }




  FUNC_3(&VAR_8);
  FUNC_9(&VAR_10);
 }
enabled:

 FUNC_0(VAR_11, VAR_11->cpu);

 FUNC_2(VAR_11);
}
