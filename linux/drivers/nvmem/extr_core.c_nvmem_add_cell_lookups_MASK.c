
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmem_cell_lookup {int node; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_3(struct nvmem_cell_lookup *VAR_2, size_t VAR_3)
{
 int VAR_4;

 FUNC_1(&VAR_1);
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  FUNC_0(&VAR_2[VAR_4].node, &VAR_0);
 FUNC_2(&VAR_1);
}
