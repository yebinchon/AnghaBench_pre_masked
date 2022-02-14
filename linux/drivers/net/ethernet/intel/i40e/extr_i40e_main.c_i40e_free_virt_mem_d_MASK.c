
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40e_virt_mem {scalar_t__ size; int * va; } ;
struct i40e_hw {int dummy; } ;


 int FUNC_0 (int *) ;

int FUNC_1(struct i40e_hw *VAR_0, struct i40e_virt_mem *VAR_1)
{

 FUNC_0(VAR_1->va);
 VAR_1->va = ((void*)0);
 VAR_1->size = 0;

 return 0;
}
