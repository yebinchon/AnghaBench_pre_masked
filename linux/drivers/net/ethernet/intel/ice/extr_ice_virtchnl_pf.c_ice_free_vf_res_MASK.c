
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ice_vf {int lan_vsi_idx; int first_vector_idx; int vf_states; scalar_t__ num_mac; scalar_t__ lan_vsi_num; struct ice_pf* pf; } ;
struct ice_pf {int num_vf_msix; int hw; int * vsi; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct ice_vf *VAR_4)
{
 struct ice_pf *VAR_5 = VAR_4->pf;
 int VAR_6, VAR_7;




 FUNC_1(VAR_1, VAR_4->vf_states);


 if (VAR_4->lan_vsi_idx) {
  FUNC_3(VAR_5->vsi[VAR_4->lan_vsi_idx]);
  VAR_4->lan_vsi_idx = 0;
  VAR_4->lan_vsi_num = 0;
  VAR_4->num_mac = 0;
 }

 VAR_7 = VAR_4->first_vector_idx + VAR_5->num_vf_msix - 1;

 for (VAR_6 = VAR_4->first_vector_idx; VAR_6 <= VAR_7; VAR_6++) {
  FUNC_4(&VAR_5->hw, FUNC_0(VAR_6), VAR_0);
  FUNC_2(&VAR_5->hw);
 }

 FUNC_1(VAR_2, VAR_4->vf_states);
 FUNC_1(VAR_3, VAR_4->vf_states);
}
