
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ice_vsi {int dummy; } ;
struct ice_vf {size_t lan_vsi_idx; int vf_id; struct ice_pf* pf; } ;
struct ice_pf {struct ice_vsi** vsi; } ;


 int VAR_0 ;
 int FUNC_0 (struct ice_vf*) ;
 int FUNC_1 (struct ice_vsi*,int ,int ) ;
 int FUNC_2 (struct ice_vsi*) ;

__attribute__((used)) static void FUNC_3(struct ice_vf *VAR_1)
{
 struct ice_pf *VAR_2 = VAR_1->pf;
 struct ice_vsi *VAR_3;

 VAR_3 = VAR_2->vsi[VAR_1->lan_vsi_idx];

 FUNC_1(VAR_3, VAR_0, VAR_1->vf_id);
 FUNC_2(VAR_3);
 FUNC_0(VAR_1);
}
