
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u16 ;
struct virtchnl_rss_lut {scalar_t__ lut_entries; scalar_t__* lut; int vsi_id; } ;
struct i40e_vsi {int dummy; } ;
struct i40e_vf {scalar_t__ num_queue_pairs; size_t lan_vsi_idx; int vf_states; struct i40e_pf* pf; } ;
struct i40e_pf {struct i40e_vsi** vsi; } ;
typedef int i40e_status ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct i40e_vsi*,int *,scalar_t__*,scalar_t__) ;
 int FUNC_1 (struct i40e_vf*,int ) ;
 int FUNC_2 (struct i40e_vf*,int ,int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct i40e_vf *VAR_4, u8 *VAR_5)
{
 struct virtchnl_rss_lut *VAR_6 =
  (struct virtchnl_rss_lut *)VAR_5;
 struct i40e_pf *VAR_7 = VAR_4->pf;
 struct i40e_vsi *VAR_8 = ((void*)0);
 i40e_status VAR_9 = 0;
 u16 VAR_10;

 if (!FUNC_3(VAR_2, &VAR_4->vf_states) ||
     !FUNC_1(VAR_4, VAR_6->vsi_id) ||
     (VAR_6->lut_entries != VAR_1)) {
  VAR_9 = VAR_0;
  goto err;
 }

 for (VAR_10 = 0; VAR_10 < VAR_6->lut_entries; VAR_10++)
  if (VAR_6->lut[VAR_10] >= VAR_4->num_queue_pairs) {
   VAR_9 = VAR_0;
   goto err;
  }

 VAR_8 = VAR_7->vsi[VAR_4->lan_vsi_idx];
 VAR_9 = FUNC_0(VAR_8, ((void*)0), VAR_6->lut, VAR_1);

err:
 return FUNC_2(VAR_4, VAR_3,
           VAR_9);
}
