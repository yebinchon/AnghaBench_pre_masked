
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qtree_mem_dqinfo {int dqi_entry_size; } ;



int FUNC_0(struct qtree_mem_dqinfo *VAR_0, char *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->dqi_entry_size; VAR_2++)
  if (VAR_1[VAR_2])
   return 0;
 return 1;
}
