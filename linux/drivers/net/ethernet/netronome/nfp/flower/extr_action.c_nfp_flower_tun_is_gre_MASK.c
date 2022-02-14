
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct flow_cls_offload {TYPE_2__* rule; } ;
struct flow_action_entry {scalar_t__ id; int dev; } ;
struct TYPE_3__ {int num_entries; struct flow_action_entry* entries; } ;
struct TYPE_4__ {TYPE_1__ action; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static bool
FUNC_1(struct flow_cls_offload *VAR_2, int VAR_3)
{
 struct flow_action_entry *VAR_4 = VAR_2->rule->action.entries;
 int VAR_5 = VAR_2->rule->action.num_entries;
 int VAR_6;


 for (VAR_6 = VAR_3 + 1; VAR_6 < VAR_5; VAR_6++)
  if (VAR_4[VAR_6].id == VAR_1 ||
      VAR_4[VAR_6].id == VAR_0)
   return FUNC_0(VAR_4[VAR_6].dev);

 return 0;
}
