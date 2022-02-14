
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct virtchnl_queue_select {int vsi_id; } ;
struct ice_eth_stats {int dummy; } ;
struct ice_vsi {struct ice_eth_stats eth_stats; } ;
struct ice_vf {size_t lan_vsi_idx; int vf_states; struct ice_pf* pf; } ;
struct ice_pf {struct ice_vsi** vsi; } ;
typedef int stats ;
typedef enum virtchnl_status_code { ____Placeholder_virtchnl_status_code } virtchnl_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ice_vsi*) ;
 int FUNC_1 (struct ice_vf*,int ) ;
 int FUNC_2 (struct ice_vf*,int ,int,int *,int) ;
 int FUNC_3 (struct ice_eth_stats*,int ,int) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct ice_vf *VAR_4, u8 *VAR_5)
{
 enum virtchnl_status_code VAR_6 = VAR_3;
 struct virtchnl_queue_select *VAR_7 =
  (struct virtchnl_queue_select *)VAR_5;
 struct ice_pf *VAR_8 = VAR_4->pf;
 struct ice_eth_stats VAR_9;
 struct ice_vsi *VAR_10;

 if (!FUNC_4(VAR_0, VAR_4->vf_states)) {
  VAR_6 = VAR_2;
  goto error_param;
 }

 if (!FUNC_1(VAR_4, VAR_7->vsi_id)) {
  VAR_6 = VAR_2;
  goto error_param;
 }

 VAR_10 = VAR_8->vsi[VAR_4->lan_vsi_idx];
 if (!VAR_10) {
  VAR_6 = VAR_2;
  goto error_param;
 }

 FUNC_3(&VAR_9, 0, sizeof(struct ice_eth_stats));
 FUNC_0(VAR_10);

 VAR_9 = VAR_10->eth_stats;

error_param:

 return FUNC_2(VAR_4, VAR_1, VAR_6,
         (u8 *)&VAR_9, sizeof(VAR_9));
}
