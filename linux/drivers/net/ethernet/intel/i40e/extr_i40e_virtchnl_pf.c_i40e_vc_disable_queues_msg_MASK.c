
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct virtchnl_queue_select {scalar_t__ rx_queues; scalar_t__ tx_queues; int vsi_id; } ;
struct i40e_vf {int queues_enabled; size_t lan_vsi_idx; int vf_states; struct i40e_pf* pf; } ;
struct i40e_pf {int * vsi; } ;
typedef int i40e_status ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,int) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int) ;
 int FUNC_2 (struct i40e_vf*,int ) ;
 int FUNC_3 (struct i40e_vf*,int ,int ) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct i40e_vf *VAR_5, u8 *VAR_6)
{
 struct virtchnl_queue_select *VAR_7 =
     (struct virtchnl_queue_select *)VAR_6;
 struct i40e_pf *VAR_8 = VAR_5->pf;
 i40e_status VAR_9 = 0;


 VAR_5->queues_enabled = 0;

 if (!FUNC_4(VAR_3, &VAR_5->vf_states)) {
  VAR_9 = VAR_0;
  goto error_param;
 }

 if (!FUNC_2(VAR_5, VAR_7->vsi_id)) {
  VAR_9 = VAR_0;
  goto error_param;
 }

 if ((VAR_7->rx_queues == 0 && VAR_7->tx_queues == 0) ||
     VAR_7->rx_queues > VAR_2 ||
     VAR_7->tx_queues > VAR_2) {
  VAR_9 = VAR_0;
  goto error_param;
 }


 if (FUNC_1(VAR_8->vsi[VAR_5->lan_vsi_idx], VAR_7->tx_queues,
      0)) {
  VAR_9 = VAR_1;
  goto error_param;
 }
 if (FUNC_0(VAR_8->vsi[VAR_5->lan_vsi_idx], VAR_7->rx_queues,
      0)) {
  VAR_9 = VAR_1;
  goto error_param;
 }
error_param:

 return FUNC_3(VAR_5, VAR_4,
           VAR_9);
}
