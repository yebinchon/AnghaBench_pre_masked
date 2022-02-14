
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ice_vf {int vf_id; } ;
struct ice_pf {int sriov_base_vector; int num_vf_msix; } ;



__attribute__((used)) static int FUNC_0(struct ice_pf *VAR_0, struct ice_vf *VAR_1)
{
 return VAR_0->sriov_base_vector + VAR_1->vf_id * VAR_0->num_vf_msix;
}
