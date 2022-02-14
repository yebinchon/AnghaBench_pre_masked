
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct i40e_vf {int vf_id; scalar_t__ num_vlan; int vf_states; int lan_vsi_id; struct i40e_pf* pf; } ;
struct TYPE_2__ {int vf_base_id; } ;
struct i40e_hw {TYPE_1__ func_caps; } ;
struct i40e_pf {struct i40e_hw hw; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct i40e_vf*) ;
 int FUNC_4 (struct i40e_vf*,int ,int,int) ;
 int FUNC_5 (struct i40e_vf*) ;
 int FUNC_6 (struct i40e_vf*) ;
 int FUNC_7 (struct i40e_pf*,int) ;
 int FUNC_8 (struct i40e_hw*,int ) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (struct i40e_hw*,int ,int ) ;

__attribute__((used)) static void FUNC_12(struct i40e_vf *VAR_5)
{
 struct i40e_pf *VAR_6 = VAR_5->pf;
 struct i40e_hw *VAR_7 = &VAR_6->hw;
 u32 VAR_8;


 FUNC_4(VAR_5, VAR_5->lan_vsi_id, 0, 0);


 FUNC_6(VAR_5);
 VAR_8 = FUNC_8(VAR_7, FUNC_1(VAR_5->vf_id));
 VAR_8 &= ~VAR_3;
 FUNC_11(VAR_7, FUNC_1(VAR_5->vf_id), VAR_8);


 if (!FUNC_3(VAR_5)) {
  int VAR_9 = VAR_5->vf_id + VAR_7->func_caps.vf_base_id;
  FUNC_5(VAR_5);
  FUNC_9(VAR_0, &VAR_5->vf_states);
  FUNC_2(VAR_1, &VAR_5->vf_states);

  if (!FUNC_10(VAR_2,
     &VAR_5->vf_states))
   FUNC_7(VAR_6, VAR_9);
  VAR_5->num_vlan = 0;
 }





 FUNC_11(VAR_7, FUNC_0(VAR_5->vf_id), VAR_4);
}
