
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct virtchnl_vsi_queue_config_info {scalar_t__ vsi_id; scalar_t__ num_queue_pairs; struct virtchnl_queue_pair_info* qpair; } ;
struct TYPE_6__ {scalar_t__ queue_id; scalar_t__ vsi_id; } ;
struct TYPE_7__ {scalar_t__ vsi_id; scalar_t__ queue_id; } ;
struct virtchnl_queue_pair_info {TYPE_2__ txq; TYPE_3__ rxq; } ;
struct i40e_vf {size_t lan_vsi_idx; int num_tc; TYPE_4__* ch; scalar_t__ adq_enabled; int vf_states; struct i40e_pf* pf; } ;
struct i40e_pf {TYPE_1__** vsi; } ;
typedef int i40e_status ;
struct TYPE_8__ {int num_qps; scalar_t__ vsi_id; size_t vsi_idx; } ;
struct TYPE_5__ {int num_queue_pairs; } ;


 int FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct i40e_vf*,scalar_t__,scalar_t__,TYPE_3__*) ;
 scalar_t__ FUNC_2 (struct i40e_vf*,scalar_t__,scalar_t__,TYPE_2__*) ;
 int FUNC_3 (struct i40e_vf*,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct i40e_vf*,scalar_t__) ;
 int FUNC_5 (struct i40e_vf*,int ,int ) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct i40e_vf *VAR_6, u8 *VAR_7)
{
 struct virtchnl_vsi_queue_config_info *VAR_8 =
     (struct virtchnl_vsi_queue_config_info *)VAR_7;
 struct virtchnl_queue_pair_info *VAR_9;
 struct i40e_pf *VAR_10 = VAR_6->pf;
 u16 VAR_11, VAR_12 = 0;
 u16 VAR_13 = 0;
 i40e_status VAR_14 = 0;
 int VAR_15, VAR_16 = 0, VAR_17 = 0;

 if (!FUNC_6(VAR_4, &VAR_6->vf_states)) {
  VAR_14 = VAR_1;
  goto error_param;
 }

 if (!FUNC_4(VAR_6, VAR_8->vsi_id)) {
  VAR_14 = VAR_1;
  goto error_param;
 }

 if (VAR_8->num_queue_pairs > VAR_2) {
  VAR_14 = VAR_1;
  goto error_param;
 }

 if (VAR_6->adq_enabled) {
  for (VAR_15 = 0; VAR_15 < VAR_3; VAR_15++)
   VAR_13 += VAR_6->ch[VAR_15].num_qps;
  if (VAR_13 != VAR_8->num_queue_pairs) {
   VAR_14 = VAR_1;
   goto error_param;
  }
 }

 VAR_11 = VAR_8->vsi_id;

 for (VAR_15 = 0; VAR_15 < VAR_8->num_queue_pairs; VAR_15++) {
  VAR_9 = &VAR_8->qpair[VAR_15];

  if (!VAR_6->adq_enabled) {
   if (!FUNC_3(VAR_6, VAR_11,
            VAR_9->txq.queue_id)) {
    VAR_14 = VAR_1;
    goto error_param;
   }

   VAR_12 = VAR_9->txq.queue_id;

   if (VAR_9->txq.vsi_id != VAR_8->vsi_id ||
       VAR_9->rxq.vsi_id != VAR_8->vsi_id ||
       VAR_9->rxq.queue_id != VAR_12) {
    VAR_14 = VAR_1;
    goto error_param;
   }
  }

  if (VAR_6->adq_enabled) {
   if (VAR_17 >= FUNC_0(VAR_6->ch)) {
    VAR_14 = VAR_0;
    goto error_param;
   }
   VAR_11 = VAR_6->ch[VAR_17].vsi_id;
  }

  if (FUNC_1(VAR_6, VAR_11, VAR_12,
          &VAR_9->rxq) ||
      FUNC_2(VAR_6, VAR_11, VAR_12,
          &VAR_9->txq)) {
   VAR_14 = VAR_1;
   goto error_param;
  }






  if (VAR_6->adq_enabled) {
   if (VAR_17 >= FUNC_0(VAR_6->ch)) {
    VAR_14 = VAR_0;
    goto error_param;
   }
   if (VAR_16 == (VAR_6->ch[VAR_17].num_qps - 1)) {
    VAR_17++;
    VAR_16 = 0;
    VAR_12 = 0;
   } else {
    VAR_16++;
    VAR_12++;
   }
  }
 }

 if (!VAR_6->adq_enabled) {
  VAR_10->vsi[VAR_6->lan_vsi_idx]->num_queue_pairs =
   VAR_8->num_queue_pairs;
 } else {
  for (VAR_15 = 0; VAR_15 < VAR_6->num_tc; VAR_15++)
   VAR_10->vsi[VAR_6->ch[VAR_15].vsi_idx]->num_queue_pairs =
          VAR_6->ch[VAR_15].num_qps;
 }

error_param:

 return FUNC_5(VAR_6, VAR_5,
           VAR_14);
}
