
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i40e_pf {TYPE_1__* pdev; } ;
struct i40e_hw {scalar_t__ back; } ;
struct i40e_dma_mem {int size; int pa; int * va; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,int ,int *,int ) ;

int FUNC_1(struct i40e_hw *VAR_0, struct i40e_dma_mem *VAR_1)
{
 struct i40e_pf *VAR_2 = (struct i40e_pf *)VAR_0->back;

 FUNC_0(&VAR_2->pdev->dev, VAR_1->size, VAR_1->va, VAR_1->pa);
 VAR_1->va = ((void*)0);
 VAR_1->pa = 0;
 VAR_1->size = 0;

 return 0;
}
