
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mvpp2_rfs_rule {int engine; struct flow_rule* flow; } ;
struct TYPE_3__ {struct flow_action_entry* entries; } ;
struct flow_rule {TYPE_1__ action; } ;
struct TYPE_4__ {scalar_t__ index; scalar_t__ ctx; } ;
struct flow_action_entry {scalar_t__ id; TYPE_2__ queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct mvpp2_rfs_rule*) ;

__attribute__((used)) static int FUNC_1(struct mvpp2_rfs_rule *VAR_5)
{
 struct flow_rule *VAR_6 = VAR_5->flow;
 struct flow_action_entry *VAR_7;

 VAR_7 = &VAR_6->action.entries[0];
 if (VAR_7->id != VAR_3 && VAR_7->id != VAR_2)
  return -VAR_1;





 if (VAR_7->queue.ctx && VAR_7->queue.index)
  return -VAR_1;




 VAR_5->engine = VAR_4;

 if (FUNC_0(VAR_5))
  return -VAR_0;

 return 0;
}
