
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ice_vf {int vf_id; scalar_t__ num_vlan; int vf_states; struct ice_pf* pf; } ;
struct ice_hw {int dummy; } ;
struct ice_pf {struct ice_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct ice_vf*) ;
 int FUNC_4 (struct ice_vf*) ;
 int FUNC_5 (struct ice_hw*,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct ice_hw*,int ,int ) ;

__attribute__((used)) static void FUNC_8(struct ice_vf *VAR_4)
{
 struct ice_pf *VAR_5 = VAR_4->pf;
 struct ice_hw *VAR_6;
 u32 VAR_7;

 VAR_6 = &VAR_5->hw;
 VAR_7 = FUNC_5(VAR_6, FUNC_1(VAR_4->vf_id));
 VAR_7 &= ~VAR_3;
 FUNC_7(VAR_6, FUNC_1(VAR_4->vf_id), VAR_7);


 if (!FUNC_3(VAR_4)) {
  FUNC_4(VAR_4);
  FUNC_6(VAR_0, VAR_4->vf_states);
  FUNC_2(VAR_1, VAR_4->vf_states);
  VAR_4->num_vlan = 0;
 }





 FUNC_7(VAR_6, FUNC_0(VAR_4->vf_id), VAR_2);
}
