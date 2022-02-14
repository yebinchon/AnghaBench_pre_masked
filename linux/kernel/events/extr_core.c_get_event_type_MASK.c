
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_event_context {int task; int lock; } ;
struct TYPE_2__ {scalar_t__ pinned; } ;
struct perf_event {TYPE_1__ attr; struct perf_event* group_leader; struct perf_event_context* ctx; } ;
typedef enum event_type_t { ____Placeholder_event_type_t } event_type_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static enum event_type_t FUNC_1(struct perf_event *VAR_3)
{
 struct perf_event_context *VAR_4 = VAR_3->ctx;
 enum event_type_t VAR_5;

 FUNC_0(&VAR_4->lock);





 if (VAR_3->group_leader != VAR_3)
  VAR_3 = VAR_3->group_leader;

 VAR_5 = VAR_3->attr.pinned ? VAR_2 : VAR_1;
 if (!VAR_4->task)
  VAR_5 |= VAR_0;

 return VAR_5;
}
