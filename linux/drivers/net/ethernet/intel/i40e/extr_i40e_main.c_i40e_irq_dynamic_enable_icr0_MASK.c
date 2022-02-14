
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i40e_hw {int dummy; } ;
struct i40e_pf {struct i40e_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct i40e_hw*) ;
 int FUNC_1 (struct i40e_hw*,int ,int) ;

void FUNC_2(struct i40e_pf *VAR_5)
{
 struct i40e_hw *VAR_6 = &VAR_5->hw;
 u32 VAR_7;

 VAR_7 = VAR_3 |
       VAR_2 |
       (VAR_0 << VAR_4);

 FUNC_1(VAR_6, VAR_1, VAR_7);
 FUNC_0(VAR_6);
}
