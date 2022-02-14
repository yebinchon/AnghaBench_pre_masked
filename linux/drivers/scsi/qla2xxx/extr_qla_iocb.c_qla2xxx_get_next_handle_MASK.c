
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct req_que {size_t current_outstanding_cmd; size_t num_outstanding_cmds; int * outstanding_cmds; } ;



uint32_t FUNC_0(struct req_que *VAR_0)
{
 uint32_t VAR_1, VAR_2 = VAR_0->current_outstanding_cmd;

 for (VAR_1 = 1; VAR_1 < VAR_0->num_outstanding_cmds; VAR_1++) {
  VAR_2++;
  if (VAR_2 == VAR_0->num_outstanding_cmds)
   VAR_2 = 1;
  if (!VAR_0->outstanding_cmds[VAR_2])
   return VAR_2;
 }

 return 0;
}
