
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct task_struct {int dummy; } ;
struct TYPE_2__ {scalar_t__ inherit_stat; } ;
struct perf_event {int child_total_time_running; int total_time_running; int child_total_time_enabled; int total_time_enabled; int child_count; TYPE_1__ attr; struct perf_event* parent; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct perf_event*) ;
 int FUNC_2 (struct perf_event*,struct task_struct*) ;

__attribute__((used)) static void FUNC_3(struct perf_event *VAR_0,
          struct task_struct *VAR_1)
{
 struct perf_event *VAR_2 = VAR_0->parent;
 u64 VAR_3;

 if (VAR_0->attr.inherit_stat)
  FUNC_2(VAR_0, VAR_1);

 VAR_3 = FUNC_1(VAR_0);




 FUNC_0(VAR_3, &VAR_2->child_count);
 FUNC_0(VAR_0->total_time_enabled,
       &VAR_2->child_total_time_enabled);
 FUNC_0(VAR_0->total_time_running,
       &VAR_2->child_total_time_running);
}
