
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i40e_hw {int dummy; } ;
typedef int i40e_status ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct i40e_hw*,int ,int*) ;
 int FUNC_2 (struct i40e_hw*,int *) ;

i40e_status FUNC_3(struct i40e_hw *VAR_4)
{
 i40e_status VAR_5;
 u16 VAR_6;


 VAR_5 = FUNC_1(VAR_4, VAR_3, &VAR_6);
 if (!VAR_5 &&
     ((VAR_6 & VAR_1) ==
      FUNC_0(VAR_2)))
  return FUNC_2(VAR_4, ((void*)0));
 else
  return VAR_0;
}
