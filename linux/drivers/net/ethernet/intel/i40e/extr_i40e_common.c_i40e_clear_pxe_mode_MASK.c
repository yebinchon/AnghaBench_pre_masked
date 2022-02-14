
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i40e_hw {scalar_t__ revision_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i40e_hw*,int *) ;
 scalar_t__ FUNC_1 (struct i40e_hw*) ;
 int FUNC_2 (struct i40e_hw*,int ) ;
 int FUNC_3 (struct i40e_hw*,int ,int) ;

void FUNC_4(struct i40e_hw *VAR_2)
{
 u32 VAR_3;

 if (FUNC_1(VAR_2))
  FUNC_0(VAR_2, ((void*)0));


 VAR_3 = FUNC_2(VAR_2, VAR_0);

 if (VAR_2->revision_id == 0) {

  FUNC_3(VAR_2, VAR_0, (VAR_3 & (~VAR_1)));
 } else {
  FUNC_3(VAR_2, VAR_0, (VAR_3 | VAR_1));
 }
}
