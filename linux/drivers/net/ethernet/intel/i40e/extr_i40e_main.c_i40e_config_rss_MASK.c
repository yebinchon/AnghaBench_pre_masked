
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i40e_vsi {struct i40e_pf* back; } ;
struct i40e_pf {int hw_features; } ;


 int VAR_0 ;
 int FUNC_0 (struct i40e_vsi*,int *,int *,int ) ;
 int FUNC_1 (struct i40e_vsi*,int *,int *,int ) ;

int FUNC_2(struct i40e_vsi *VAR_1, u8 *VAR_2, u8 *VAR_3, u16 VAR_4)
{
 struct i40e_pf *VAR_5 = VAR_1->back;

 if (VAR_5->hw_features & VAR_0)
  return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
 else
  return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
}
