
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40e_vsi {int dummy; } ;
struct i40e_pf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct i40e_pf*) ;
 struct i40e_vsi* FUNC_1 (struct i40e_pf*,int ) ;
 int FUNC_2 (struct i40e_vsi*) ;

__attribute__((used)) static void FUNC_3(struct i40e_pf *VAR_1)
{
 struct i40e_vsi *VAR_2;

 FUNC_0(VAR_1);
 VAR_2 = FUNC_1(VAR_1, VAR_0);
 if (VAR_2)
  FUNC_2(VAR_2);
}
