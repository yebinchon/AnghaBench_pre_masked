
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvmem_cell {TYPE_1__* nvmem; int node; } ;
struct TYPE_2__ {int cells; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,struct nvmem_cell*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(struct nvmem_cell *VAR_3)
{
 FUNC_2(&VAR_1);
 FUNC_1(&VAR_3->node, &VAR_3->nvmem->cells);
 FUNC_3(&VAR_1);
 FUNC_0(&VAR_2, VAR_0, VAR_3);
}
