
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct pt_regs {int dummy; } ;
struct TYPE_3__ {int sample_max_stack; int exclude_callchain_user; int exclude_callchain_kernel; } ;
struct perf_event {TYPE_1__ attr; TYPE_2__* ctx; } ;
struct perf_callchain_entry {int dummy; } ;
struct TYPE_4__ {scalar_t__ task; } ;


 struct perf_callchain_entry VAR_0 ;
 scalar_t__ VAR_1 ;
 struct perf_callchain_entry* FUNC_0 (struct pt_regs*,int ,int,int,int const,int,int) ;

struct perf_callchain_entry *
FUNC_1(struct perf_event *VAR_2, struct pt_regs *VAR_3)
{
 bool VAR_4 = !VAR_2->attr.exclude_callchain_kernel;
 bool VAR_5 = !VAR_2->attr.exclude_callchain_user;

 bool VAR_6 = VAR_2->ctx->task && VAR_2->ctx->task != VAR_1;
 const u32 VAR_7 = VAR_2->attr.sample_max_stack;
 struct perf_callchain_entry *VAR_8;

 if (!VAR_4 && !VAR_5)
  return &VAR_0;

 VAR_8 = FUNC_0(VAR_3, 0, VAR_4, VAR_5,
           VAR_7, VAR_6, 1);
 return VAR_8 ?: &VAR_0;
}
