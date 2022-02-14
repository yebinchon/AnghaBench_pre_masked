
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i40e_vf {int vf_id; int lan_vsi_id; struct i40e_pf* pf; } ;
struct i40e_hw {int dummy; } ;
struct i40e_pf {struct i40e_hw hw; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (struct i40e_hw*) ;
 int FUNC_3 (struct i40e_vf*) ;
 int FUNC_4 (struct i40e_vf*) ;
 int FUNC_5 (struct i40e_hw*,int ,int ) ;
 int FUNC_6 (struct i40e_hw*,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct i40e_vf *VAR_2)
{
 struct i40e_pf *VAR_3 = VAR_2->pf;
 struct i40e_hw *VAR_4 = &VAR_3->hw;
 u32 VAR_5;





 FUNC_5(VAR_4, FUNC_1(VAR_2->lan_vsi_id),
     VAR_1);


 VAR_5 = VAR_0;
 FUNC_6(VAR_4, FUNC_0(VAR_2->vf_id), VAR_5);

 FUNC_4(VAR_2);
 FUNC_3(VAR_2);

 FUNC_2(VAR_4);
}
