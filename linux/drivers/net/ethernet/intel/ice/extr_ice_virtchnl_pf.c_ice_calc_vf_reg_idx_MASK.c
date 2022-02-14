
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ice_vf {int vf_id; struct ice_pf* pf; } ;
struct ice_q_vector {int v_idx; } ;
struct ice_pf {int sriov_base_vector; int num_vf_msix; } ;


 int VAR_0 ;

int FUNC_0(struct ice_vf *VAR_1, struct ice_q_vector *VAR_2)
{
 struct ice_pf *VAR_3;

 if (!VAR_1 || !VAR_2)
  return -VAR_0;

 VAR_3 = VAR_1->pf;


 return VAR_3->sriov_base_vector + VAR_3->num_vf_msix * VAR_1->vf_id +
  VAR_2->v_idx + 1;
}
