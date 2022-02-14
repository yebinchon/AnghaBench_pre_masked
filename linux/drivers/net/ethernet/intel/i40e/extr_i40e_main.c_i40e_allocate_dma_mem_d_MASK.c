
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct i40e_pf {TYPE_1__* pdev; } ;
struct i40e_hw {scalar_t__ back; } ;
struct i40e_dma_mem {int va; int pa; int size; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int *,int ) ;

int FUNC_2(struct i40e_hw *VAR_2, struct i40e_dma_mem *VAR_3,
       u64 VAR_4, u32 VAR_5)
{
 struct i40e_pf *VAR_6 = (struct i40e_pf *)VAR_2->back;

 VAR_3->size = FUNC_0(VAR_4, VAR_5);
 VAR_3->va = FUNC_1(&VAR_6->pdev->dev, VAR_3->size, &VAR_3->pa,
         VAR_1);
 if (!VAR_3->va)
  return -VAR_0;

 return 0;
}
