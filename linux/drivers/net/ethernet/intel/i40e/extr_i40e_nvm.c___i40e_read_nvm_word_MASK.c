
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i40e_hw {int flags; } ;
typedef int i40e_status ;


 int VAR_0 ;
 int FUNC_0 (struct i40e_hw*,int ,int *) ;
 int FUNC_1 (struct i40e_hw*,int ,int *) ;

__attribute__((used)) static i40e_status FUNC_2(struct i40e_hw *VAR_1,
     u16 VAR_2, u16 *VAR_3)
{
 if (VAR_1->flags & VAR_0)
  return FUNC_0(VAR_1, VAR_2, VAR_3);

 return FUNC_1(VAR_1, VAR_2, VAR_3);
}
