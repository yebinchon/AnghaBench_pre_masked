
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmem_cell_lookup {int node; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

void FUNC_3(struct nvmem_cell_lookup *VAR_1, size_t VAR_2)
{
 int VAR_3;

 FUNC_1(&VAR_0);
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  FUNC_0(&VAR_1[VAR_3].node);
 FUNC_2(&VAR_0);
}
