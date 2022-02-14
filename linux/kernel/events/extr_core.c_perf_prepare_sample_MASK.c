
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct pt_regs {int dummy; } ;
struct TYPE_9__ {scalar_t__ regs; } ;
struct TYPE_8__ {scalar_t__ regs; } ;
struct perf_sample_data {int stack_user_size; int addr; int phys_addr; TYPE_4__ regs_intr; TYPE_3__ regs_user; int regs_user_copy; TYPE_1__* br_stack; struct perf_raw_record* raw; TYPE_5__* callchain; int ip; } ;
struct perf_raw_frag {scalar_t__ pad; struct perf_raw_frag* next; scalar_t__ size; } ;
struct perf_raw_record {int size; struct perf_raw_frag frag; } ;
struct perf_event_header {scalar_t__ size; int misc; int type; } ;
struct TYPE_7__ {int sample_type; int sample_regs_user; int sample_stack_user; int sample_regs_intr; } ;
struct perf_event {TYPE_2__ attr; scalar_t__ header_size; } ;
struct perf_branch_entry {int dummy; } ;
struct TYPE_10__ {scalar_t__ nr; } ;
struct TYPE_6__ {int nr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct perf_event_header*,struct perf_sample_data*,struct perf_event*) ;
 int FUNC_1 (int) ;
 TYPE_5__* FUNC_2 (struct perf_event*,struct pt_regs*) ;
 int FUNC_3 (struct pt_regs*) ;
 int FUNC_4 (struct pt_regs*) ;
 scalar_t__ FUNC_5 (struct perf_raw_frag*) ;
 int FUNC_6 (TYPE_4__*,struct pt_regs*) ;
 int FUNC_7 (TYPE_3__*,struct pt_regs*,int *) ;
 int FUNC_8 (int,scalar_t__,scalar_t__) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (scalar_t__,int) ;

void FUNC_11(struct perf_event_header *VAR_10,
    struct perf_sample_data *VAR_11,
    struct perf_event *VAR_12,
    struct pt_regs *VAR_13)
{
 u64 VAR_14 = VAR_12->attr.sample_type;

 VAR_10->type = VAR_0;
 VAR_10->size = sizeof(*VAR_10) + VAR_12->header_size;

 VAR_10->misc = 0;
 VAR_10->misc |= FUNC_4(VAR_13);

 FUNC_0(VAR_10, VAR_11, VAR_12);

 if (VAR_14 & VAR_3)
  VAR_11->ip = FUNC_3(VAR_13);

 if (VAR_14 & VAR_2) {
  int VAR_15 = 1;

  if (!(VAR_14 & VAR_9))
   VAR_11->callchain = FUNC_2(VAR_12, VAR_13);

  VAR_15 += VAR_11->callchain->nr;

  VAR_10->size += VAR_15 * sizeof(u64);
 }

 if (VAR_14 & VAR_5) {
  struct perf_raw_record *VAR_16 = VAR_11->raw;
  int VAR_17;

  if (VAR_16) {
   struct perf_raw_frag *VAR_18 = &VAR_16->frag;
   u32 VAR_19 = 0;

   do {
    VAR_19 += VAR_18->size;
    if (FUNC_5(VAR_18))
     break;
    VAR_18 = VAR_18->next;
   } while (1);

   VAR_17 = FUNC_10(VAR_19 + sizeof(u32), sizeof(u64));
   VAR_16->size = VAR_17 - sizeof(u32);
   VAR_18->pad = VAR_16->size - VAR_19;
  } else {
   VAR_17 = sizeof(u64);
  }

  VAR_10->size += VAR_17;
 }

 if (VAR_14 & VAR_1) {
  int VAR_20 = sizeof(u64);
  if (VAR_11->br_stack) {
   VAR_20 += VAR_11->br_stack->nr
         * sizeof(struct perf_branch_entry);
  }
  VAR_10->size += VAR_20;
 }

 if (VAR_14 & (VAR_7 | VAR_8))
  FUNC_7(&VAR_11->regs_user, VAR_13,
          &VAR_11->regs_user_copy);

 if (VAR_14 & VAR_7) {

  int VAR_21 = sizeof(u64);

  if (VAR_11->regs_user.regs) {
   u64 VAR_22 = VAR_12->attr.sample_regs_user;
   VAR_21 += FUNC_1(VAR_22) * sizeof(u64);
  }

  VAR_10->size += VAR_21;
 }

 if (VAR_14 & VAR_8) {






  u16 VAR_23 = VAR_12->attr.sample_stack_user;
  u16 VAR_24 = sizeof(u64);

  VAR_23 = FUNC_8(VAR_23, VAR_10->size,
           VAR_11->regs_user.regs);






  if (VAR_23)
   VAR_24 += sizeof(u64) + VAR_23;

  VAR_11->stack_user_size = VAR_23;
  VAR_10->size += VAR_24;
 }

 if (VAR_14 & VAR_6) {

  int VAR_25 = sizeof(u64);

  FUNC_6(&VAR_11->regs_intr, VAR_13);

  if (VAR_11->regs_intr.regs) {
   u64 VAR_26 = VAR_12->attr.sample_regs_intr;

   VAR_25 += FUNC_1(VAR_26) * sizeof(u64);
  }

  VAR_10->size += VAR_25;
 }

 if (VAR_14 & VAR_4)
  VAR_11->phys_addr = FUNC_9(VAR_11->addr);
}
