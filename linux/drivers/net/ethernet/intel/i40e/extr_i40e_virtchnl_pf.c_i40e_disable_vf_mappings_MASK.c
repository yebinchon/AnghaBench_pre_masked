
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40e_vf {int vf_id; struct i40e_pf* pf; } ;
struct i40e_hw {int dummy; } ;
struct i40e_pf {struct i40e_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct i40e_hw*) ;
 int FUNC_3 (struct i40e_hw*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct i40e_vf *VAR_2)
{
 struct i40e_pf *VAR_3 = VAR_2->pf;
 struct i40e_hw *VAR_4 = &VAR_3->hw;
 int VAR_5;


 FUNC_3(VAR_4, FUNC_0(VAR_2->vf_id), 0);
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  FUNC_3(VAR_4, FUNC_1(VAR_5, VAR_2->vf_id),
       VAR_1);
 FUNC_2(VAR_4);
}
