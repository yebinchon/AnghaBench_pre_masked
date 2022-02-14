
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct virtchnl_queue_select {scalar_t__ rx_queues; scalar_t__ tx_queues; int vsi_id; } ;
struct i40e_vf {size_t lan_vsi_idx; int num_tc; int queues_enabled; TYPE_1__* ch; scalar_t__ adq_enabled; int vf_states; struct i40e_pf* pf; } ;
struct i40e_pf {int * vsi; } ;
typedef int i40e_status ;
struct TYPE_2__ {size_t vsi_idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,int) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int) ;
 int FUNC_2 (struct i40e_vf*,int ) ;
 int FUNC_3 (struct i40e_vf*,int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct i40e_vf *VAR_4, u8 *VAR_5)
{
 struct virtchnl_queue_select *VAR_6 =
     (struct virtchnl_queue_select *)VAR_5;
 struct i40e_pf *VAR_7 = VAR_4->pf;
 i40e_status VAR_8 = 0;
 int VAR_9;

 if (!FUNC_5(VAR_2, &VAR_4->vf_states)) {
  VAR_8 = VAR_0;
  goto error_param;
 }

 if (!FUNC_2(VAR_4, VAR_6->vsi_id)) {
  VAR_8 = VAR_0;
  goto error_param;
 }

 if ((0 == VAR_6->rx_queues) && (0 == VAR_6->tx_queues)) {
  VAR_8 = VAR_0;
  goto error_param;
 }


 if (FUNC_0(VAR_7->vsi[VAR_4->lan_vsi_idx], VAR_6->rx_queues,
      1)) {
  VAR_8 = VAR_1;
  goto error_param;
 }
 if (FUNC_1(VAR_7->vsi[VAR_4->lan_vsi_idx], VAR_6->tx_queues,
      1)) {
  VAR_8 = VAR_1;
  goto error_param;
 }


 if (VAR_4->adq_enabled) {

  for (VAR_9 = 1; VAR_9 < VAR_4->num_tc; VAR_9++) {
   if (FUNC_4(VAR_7->vsi[VAR_4->ch[VAR_9].vsi_idx]))
    VAR_8 = VAR_1;
  }
 }

 VAR_4->queues_enabled = 1;

error_param:

 return FUNC_3(VAR_4, VAR_3,
           VAR_8);
}
