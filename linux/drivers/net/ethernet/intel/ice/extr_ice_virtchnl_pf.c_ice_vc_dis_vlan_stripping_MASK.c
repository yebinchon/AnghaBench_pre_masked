
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ice_vsi {int dummy; } ;
struct ice_vf {size_t lan_vsi_idx; int vf_states; struct ice_pf* pf; } ;
struct ice_pf {struct ice_vsi** vsi; } ;
typedef enum virtchnl_status_code { ____Placeholder_virtchnl_status_code } virtchnl_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ice_vf*,int ,int,int *,int ) ;
 scalar_t__ FUNC_1 (struct ice_vsi*,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct ice_vf *VAR_4)
{
 enum virtchnl_status_code VAR_5 = VAR_3;
 struct ice_pf *VAR_6 = VAR_4->pf;
 struct ice_vsi *VAR_7;

 if (!FUNC_2(VAR_0, VAR_4->vf_states)) {
  VAR_5 = VAR_2;
  goto error_param;
 }

 VAR_7 = VAR_6->vsi[VAR_4->lan_vsi_idx];
 if (!VAR_7) {
  VAR_5 = VAR_2;
  goto error_param;
 }

 if (FUNC_1(VAR_7, 0))
  VAR_5 = VAR_2;

error_param:
 return FUNC_0(VAR_4, VAR_1,
         VAR_5, ((void*)0), 0);
}
