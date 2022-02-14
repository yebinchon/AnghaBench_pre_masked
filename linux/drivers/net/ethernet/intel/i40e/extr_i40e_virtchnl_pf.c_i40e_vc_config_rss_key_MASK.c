
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct virtchnl_rss_key {scalar_t__ key_len; int key; int vsi_id; } ;
struct i40e_vsi {int dummy; } ;
struct i40e_vf {size_t lan_vsi_idx; int vf_states; struct i40e_pf* pf; } ;
struct i40e_pf {struct i40e_vsi** vsi; } ;
typedef int i40e_status ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct i40e_vsi*,int ,int *,int ) ;
 int FUNC_1 (struct i40e_vf*,int ) ;
 int FUNC_2 (struct i40e_vf*,int ,int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct i40e_vf *VAR_4, u8 *VAR_5)
{
 struct virtchnl_rss_key *VAR_6 =
  (struct virtchnl_rss_key *)VAR_5;
 struct i40e_pf *VAR_7 = VAR_4->pf;
 struct i40e_vsi *VAR_8 = ((void*)0);
 i40e_status VAR_9 = 0;

 if (!FUNC_3(VAR_2, &VAR_4->vf_states) ||
     !FUNC_1(VAR_4, VAR_6->vsi_id) ||
     (VAR_6->key_len != VAR_1)) {
  VAR_9 = VAR_0;
  goto err;
 }

 VAR_8 = VAR_7->vsi[VAR_4->lan_vsi_idx];
 VAR_9 = FUNC_0(VAR_8, VAR_6->key, ((void*)0), 0);
err:

 return FUNC_2(VAR_4, VAR_3,
           VAR_9);
}
