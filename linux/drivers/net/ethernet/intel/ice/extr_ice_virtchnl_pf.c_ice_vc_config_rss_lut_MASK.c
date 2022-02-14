
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct virtchnl_rss_lut {scalar_t__ lut_entries; int lut; int vsi_id; } ;
struct ice_vsi {int dummy; } ;
struct ice_vf {size_t lan_vsi_idx; struct ice_pf* pf; int vf_states; } ;
struct ice_pf {struct ice_vsi** vsi; int flags; } ;
typedef enum virtchnl_status_code { ____Placeholder_virtchnl_status_code } virtchnl_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct ice_vsi*,int *,int ,scalar_t__) ;
 int FUNC_1 (struct ice_vf*,int ) ;
 int FUNC_2 (struct ice_vf*,int ,int,int *,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct ice_vf *VAR_7, u8 *VAR_8)
{
 struct virtchnl_rss_lut *VAR_9 = (struct virtchnl_rss_lut *)VAR_8;
 enum virtchnl_status_code VAR_10 = VAR_6;
 struct ice_pf *VAR_11 = VAR_7->pf;
 struct ice_vsi *VAR_12 = ((void*)0);

 if (!FUNC_3(VAR_1, VAR_7->vf_states)) {
  VAR_10 = VAR_5;
  goto error_param;
 }

 if (!FUNC_1(VAR_7, VAR_9->vsi_id)) {
  VAR_10 = VAR_5;
  goto error_param;
 }

 if (VAR_9->lut_entries != VAR_2) {
  VAR_10 = VAR_5;
  goto error_param;
 }

 if (!FUNC_3(VAR_0, VAR_7->pf->flags)) {
  VAR_10 = VAR_5;
  goto error_param;
 }

 VAR_12 = VAR_11->vsi[VAR_7->lan_vsi_idx];
 if (!VAR_12) {
  VAR_10 = VAR_5;
  goto error_param;
 }

 if (FUNC_0(VAR_12, ((void*)0), VAR_9->lut, VAR_2))
  VAR_10 = VAR_4;
error_param:
 return FUNC_2(VAR_7, VAR_3, VAR_10,
         ((void*)0), 0);
}
