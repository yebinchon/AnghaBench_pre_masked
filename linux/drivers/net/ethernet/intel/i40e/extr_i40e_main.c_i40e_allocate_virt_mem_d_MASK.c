
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i40e_virt_mem {int va; int size; } ;
struct i40e_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;

int FUNC_1(struct i40e_hw *VAR_2, struct i40e_virt_mem *VAR_3,
        u32 VAR_4)
{
 VAR_3->size = VAR_4;
 VAR_3->va = FUNC_0(VAR_4, VAR_1);

 if (!VAR_3->va)
  return -VAR_0;

 return 0;
}
