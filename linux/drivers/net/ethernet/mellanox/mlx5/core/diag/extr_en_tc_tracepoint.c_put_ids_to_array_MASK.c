
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flow_action_entry {int id; } ;



void FUNC_0(int *VAR_0,
        const struct flow_action_entry *VAR_1,
        unsigned int VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  VAR_0[VAR_3] = VAR_1[VAR_3].id;
}
