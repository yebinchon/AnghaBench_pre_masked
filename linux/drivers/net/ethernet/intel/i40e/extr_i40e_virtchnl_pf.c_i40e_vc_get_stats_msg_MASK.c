
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct virtchnl_queue_select {int vsi_id; } ;
struct i40e_eth_stats {int dummy; } ;
struct i40e_vsi {struct i40e_eth_stats eth_stats; } ;
struct i40e_vf {size_t lan_vsi_idx; int vf_states; struct i40e_pf* pf; } ;
struct i40e_pf {struct i40e_vsi** vsi; } ;
typedef int stats ;
typedef int i40e_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i40e_vsi*) ;
 int FUNC_1 (struct i40e_vf*,int ) ;
 int FUNC_2 (struct i40e_vf*,int ,int ,int *,int) ;
 int FUNC_3 (struct i40e_eth_stats*,int ,int) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct i40e_vf *VAR_3, u8 *VAR_4)
{
 struct virtchnl_queue_select *VAR_5 =
     (struct virtchnl_queue_select *)VAR_4;
 struct i40e_pf *VAR_6 = VAR_3->pf;
 struct i40e_eth_stats VAR_7;
 i40e_status VAR_8 = 0;
 struct i40e_vsi *VAR_9;

 FUNC_3(&VAR_7, 0, sizeof(struct i40e_eth_stats));

 if (!FUNC_4(VAR_1, &VAR_3->vf_states)) {
  VAR_8 = VAR_0;
  goto error_param;
 }

 if (!FUNC_1(VAR_3, VAR_5->vsi_id)) {
  VAR_8 = VAR_0;
  goto error_param;
 }

 VAR_9 = VAR_6->vsi[VAR_3->lan_vsi_idx];
 if (!VAR_9) {
  VAR_8 = VAR_0;
  goto error_param;
 }
 FUNC_0(VAR_9);
 VAR_7 = VAR_9->eth_stats;

error_param:

 return FUNC_2(VAR_3, VAR_2, VAR_8,
          (u8 *)&VAR_7, sizeof(VAR_7));
}
