
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vqs ;
typedef int u8 ;
struct virtchnl_queue_select {scalar_t__ tx_queues; scalar_t__ rx_queues; int vsi_id; } ;
struct iavf_adapter {scalar_t__ current_op; int aq_required; int num_active_queues; TYPE_1__* vsi_res; TYPE_2__* pdev; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int vsi_id; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,char*,scalar_t__) ;
 int FUNC_2 (struct iavf_adapter*,scalar_t__,int *,int) ;

void FUNC_3(struct iavf_adapter *VAR_3)
{
 struct virtchnl_queue_select VAR_4;

 if (VAR_3->current_op != VAR_2) {

  FUNC_1(&VAR_3->pdev->dev, "Cannot disable queues, command %d pending\n",
   VAR_3->current_op);
  return;
 }
 VAR_3->current_op = VAR_1;
 VAR_4.vsi_id = VAR_3->vsi_res->vsi_id;
 VAR_4.tx_queues = FUNC_0(VAR_3->num_active_queues) - 1;
 VAR_4.rx_queues = VAR_4.tx_queues;
 VAR_3->aq_required &= ~VAR_0;
 FUNC_2(VAR_3, VAR_1,
    (u8 *)&VAR_4, sizeof(VAR_4));
}
