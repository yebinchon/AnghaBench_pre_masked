
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct i40e_vf {int dummy; } ;
struct TYPE_2__ {int vf_base_id; } ;
struct i40e_hw {TYPE_1__ func_caps; } ;
struct i40e_pf {int num_alloc_vfs; struct i40e_vf* vf; int state; struct i40e_hw hw; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct i40e_hw*) ;
 int FUNC_4 (struct i40e_vf*,int) ;
 int FUNC_5 (struct i40e_hw*,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct i40e_hw*,int ,int) ;

int FUNC_8(struct i40e_pf *VAR_3)
{
 struct i40e_hw *VAR_4 = &VAR_3->hw;
 u32 VAR_5, VAR_6, VAR_7;
 struct i40e_vf *VAR_8;
 int VAR_9;

 if (!FUNC_6(VAR_2, VAR_3->state))
  return 0;






 VAR_5 = FUNC_5(VAR_4, VAR_0);
 VAR_5 |= VAR_1;
 FUNC_7(VAR_4, VAR_0, VAR_5);
 FUNC_3(VAR_4);

 FUNC_2(VAR_2, VAR_3->state);
 for (VAR_9 = 0; VAR_9 < VAR_3->num_alloc_vfs; VAR_9++) {
  VAR_6 = (VAR_4->func_caps.vf_base_id + VAR_9) / 32;
  VAR_7 = (VAR_4->func_caps.vf_base_id + VAR_9) % 32;

  VAR_8 = &VAR_3->vf[VAR_9];
  VAR_5 = FUNC_5(VAR_4, FUNC_1(VAR_6));
  if (VAR_5 & FUNC_0(VAR_7))

   FUNC_4(VAR_8, 1);
 }

 return 0;
}
