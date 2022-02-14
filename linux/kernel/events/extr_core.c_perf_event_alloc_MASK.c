
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct pmu {int capabilities; int nr_addr_filters; int module; } ;
struct perf_event_attr {int sample_period; int sample_type; int sample_max_stack; scalar_t__ aux_output; scalar_t__ branch_sample_type; scalar_t__ inherit; scalar_t__ sample_freq; scalar_t__ freq; } ;
struct hw_perf_event {int sample_period; int last_period; scalar_t__ target; int period_left; } ;
struct TYPE_2__ {int lock; int list; } ;
struct perf_event {int pending_disable; int cpu; int oncpu; scalar_t__ overflow_handler; int addr_filters_gen; struct hw_perf_event hw; scalar_t__ ns; int (* destroy ) (struct perf_event*) ;struct perf_event* addr_filter_ranges; struct perf_event_attr attr; struct perf_event* parent; int * overflow_handler_context; int orig_overflow_handler; struct pmu* prog; int * clock; int attach_state; int state; int id; int * pmu; struct perf_event* group_leader; int refcount; TYPE_1__ addr_filters; int mmap_mutex; int pending; int waitq; int hlist_entry; int active_entry; int rb_entry; int active_list; int sibling_list; int event_entry; int child_list; int child_mutex; } ;
struct perf_addr_filters_head {int lock; } ;
struct perf_addr_filter_range {int dummy; } ;
struct bpf_prog {int capabilities; int nr_addr_filters; int module; } ;
typedef scalar_t__ perf_overflow_handler_t ;


 long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 struct perf_event* FUNC_0 (long) ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct pmu*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 long FUNC_4 (struct pmu*) ;
 int FUNC_5 (struct perf_event*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 scalar_t__ VAR_9 ;
 struct pmu* FUNC_8 (struct pmu*) ;
 int VAR_10 ;
 int FUNC_9 (struct perf_event*) ;
 long FUNC_10 (struct perf_event*) ;
 long FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (struct task_struct*) ;
 scalar_t__ FUNC_14 (struct perf_event*) ;
 int FUNC_15 (struct perf_event*) ;
 int FUNC_16 (struct perf_event*) ;
 int FUNC_17 (int *,int ) ;
 int FUNC_18 (int *) ;
 scalar_t__ FUNC_19 (struct perf_event*) ;
 scalar_t__ FUNC_20 (struct perf_event*) ;
 struct perf_event* FUNC_21 (int,int,int ) ;
 int FUNC_22 (struct perf_event*) ;
 struct perf_event* FUNC_23 (int,int ) ;
 int FUNC_24 (int *,int) ;
 int VAR_11 ;
 int FUNC_25 (struct perf_event*,struct perf_event*,int) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (int *) ;
 unsigned int VAR_12 ;
 long FUNC_28 (int,struct perf_event*,struct perf_event_attr*,struct perf_event*) ;
 int FUNC_29 (struct perf_event*) ;
 int FUNC_30 (struct perf_event*) ;
 struct perf_addr_filters_head* FUNC_31 (struct perf_event*) ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 struct pmu* FUNC_32 (struct perf_event*) ;
 int VAR_16 ;
 int FUNC_33 (scalar_t__) ;
 int FUNC_34 (scalar_t__) ;
 int FUNC_35 (int *) ;
 int FUNC_36 (int *) ;
 int FUNC_37 (int *) ;
 int FUNC_38 (struct perf_event*) ;
 int FUNC_39 (int ) ;

__attribute__((used)) static struct perf_event *
FUNC_40(struct perf_event_attr *VAR_17, int VAR_18,
   struct task_struct *VAR_19,
   struct perf_event *VAR_20,
   struct perf_event *VAR_21,
   perf_overflow_handler_t VAR_22,
   void *VAR_23, int VAR_24)
{
 struct pmu *VAR_25;
 struct perf_event *VAR_26;
 struct hw_perf_event *VAR_27;
 long VAR_28 = -VAR_0;

 if ((unsigned)VAR_18 >= VAR_12) {
  if (!VAR_19 || VAR_18 != -1)
   return FUNC_0(-VAR_0);
 }

 VAR_26 = FUNC_23(sizeof(*VAR_26), VAR_3);
 if (!VAR_26)
  return FUNC_0(-VAR_1);





 if (!VAR_20)
  VAR_20 = VAR_26;

 FUNC_27(&VAR_26->child_mutex);
 FUNC_2(&VAR_26->child_list);

 FUNC_2(&VAR_26->event_entry);
 FUNC_2(&VAR_26->sibling_list);
 FUNC_2(&VAR_26->active_list);
 FUNC_16(VAR_26);
 FUNC_2(&VAR_26->rb_entry);
 FUNC_2(&VAR_26->active_entry);
 FUNC_2(&VAR_26->addr_filters.list);
 FUNC_1(&VAR_26->hlist_entry);


 FUNC_18(&VAR_26->waitq);
 VAR_26->pending_disable = -1;
 FUNC_17(&VAR_26->pending, VAR_16);

 FUNC_27(&VAR_26->mmap_mutex);
 FUNC_35(&VAR_26->addr_filters.lock);

 FUNC_7(&VAR_26->refcount, 1);
 VAR_26->cpu = VAR_18;
 VAR_26->attr = *VAR_17;
 VAR_26->group_leader = VAR_20;
 VAR_26->pmu = ((void*)0);
 VAR_26->oncpu = -1;

 VAR_26->parent = VAR_21;

 VAR_26->ns = FUNC_12(FUNC_39(VAR_10));
 VAR_26->id = FUNC_6(&VAR_13);

 VAR_26->state = VAR_5;

 if (VAR_19) {
  VAR_26->attach_state = VAR_4;





  VAR_26->hw.target = FUNC_13(VAR_19);
 }

 VAR_26->clock = &VAR_11;
 if (VAR_21)
  VAR_26->clock = VAR_21->clock;

 if (!VAR_22 && VAR_21) {
  VAR_22 = VAR_21->overflow_handler;
  VAR_23 = VAR_21->overflow_handler_context;
 }

 if (VAR_22) {
  VAR_26->overflow_handler = VAR_22;
  VAR_26->overflow_handler_context = VAR_23;
 } else if (FUNC_20(VAR_26)){
  VAR_26->overflow_handler = VAR_14;
  VAR_26->overflow_handler_context = ((void*)0);
 } else {
  VAR_26->overflow_handler = VAR_15;
  VAR_26->overflow_handler_context = ((void*)0);
 }

 FUNC_30(VAR_26);

 VAR_25 = ((void*)0);

 VAR_27 = &VAR_26->hw;
 VAR_27->sample_period = VAR_17->sample_period;
 if (VAR_17->freq && VAR_17->sample_freq)
  VAR_27->sample_period = 1;
 VAR_27->last_period = VAR_27->sample_period;

 FUNC_24(&VAR_27->period_left, VAR_27->sample_period);





 if (VAR_17->inherit && (VAR_17->sample_type & VAR_8))
  goto err_ns;

 if (!FUNC_15(VAR_26))
  VAR_26->attr.branch_sample_type = 0;

 if (VAR_24 != -1) {
  VAR_28 = FUNC_28(VAR_24, VAR_26, VAR_17, VAR_20);
  if (VAR_28)
   goto err_ns;
 }

 VAR_25 = FUNC_32(VAR_26);
 if (FUNC_3(VAR_25)) {
  VAR_28 = FUNC_4(VAR_25);
  goto err_ns;
 }

 if (VAR_26->attr.aux_output &&
     !(VAR_25->capabilities & VAR_6)) {
  VAR_28 = -VAR_2;
  goto err_pmu;
 }

 VAR_28 = FUNC_10(VAR_26);
 if (VAR_28)
  goto err_pmu;

 if (FUNC_14(VAR_26)) {
  VAR_26->addr_filter_ranges = FUNC_21(VAR_25->nr_addr_filters,
          sizeof(struct perf_addr_filter_range),
          VAR_3);
  if (!VAR_26->addr_filter_ranges) {
   VAR_28 = -VAR_1;
   goto err_per_task;
  }





  if (VAR_26->parent) {
   struct perf_addr_filters_head *VAR_29 = FUNC_31(VAR_26);

   FUNC_36(&VAR_29->lock);
   FUNC_25(VAR_26->addr_filter_ranges,
          VAR_26->parent->addr_filter_ranges,
          VAR_25->nr_addr_filters * sizeof(struct perf_addr_filter_range));
   FUNC_37(&VAR_29->lock);
  }


  VAR_26->addr_filters_gen = 1;
 }

 if (!VAR_26->parent) {
  if (VAR_26->attr.sample_type & VAR_7) {
   VAR_28 = FUNC_11(VAR_17->sample_max_stack);
   if (VAR_28)
    goto err_addr_filters;
  }
 }


 FUNC_5(VAR_26);

 return VAR_26;

err_addr_filters:
 FUNC_22(VAR_26->addr_filter_ranges);

err_per_task:
 FUNC_9(VAR_26);

err_pmu:
 if (VAR_26->destroy)
  VAR_26->destroy(VAR_26);
 FUNC_26(VAR_25->module);
err_ns:
 if (FUNC_19(VAR_26))
  FUNC_29(VAR_26);
 if (VAR_26->ns)
  FUNC_33(VAR_26->ns);
 if (VAR_26->hw.target)
  FUNC_34(VAR_26->hw.target);
 FUNC_22(VAR_26);

 return FUNC_0(VAR_28);
}
