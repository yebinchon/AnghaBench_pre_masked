
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct qedi_ctx {TYPE_1__* itt_map; } ;
struct qedi_cmd {size_t task_id; } ;
struct TYPE_2__ {struct qedi_cmd* p_cmd; } ;


 size_t VAR_0 ;

struct qedi_cmd *FUNC_0(struct qedi_ctx *VAR_1, u32 VAR_2)
{
 struct qedi_cmd *VAR_3 = ((void*)0);

 if (VAR_2 >= VAR_0)
  return ((void*)0);

 VAR_3 = VAR_1->itt_map[VAR_2].p_cmd;
 if (VAR_3->task_id != VAR_2)
  return ((void*)0);

 VAR_1->itt_map[VAR_2].p_cmd = ((void*)0);

 return VAR_3;
}
