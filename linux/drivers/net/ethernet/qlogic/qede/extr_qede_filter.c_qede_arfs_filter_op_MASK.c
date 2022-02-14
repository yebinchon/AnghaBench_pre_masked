
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct qede_dev {TYPE_2__* arfs; } ;
struct TYPE_3__ {int dst_port; int src_port; } ;
struct qede_arfs_fltr_node {scalar_t__ rxq_id; int used; scalar_t__ next_rxq_id; int state; scalar_t__ filter_op; TYPE_1__ tuple; int sw_id; int flow_id; int fw_rc; } ;
struct TYPE_4__ {int arfs_list_lock; } ;


 int FUNC_0 (struct qede_dev*,char*,int ,int ,int ,int ,int ,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct qede_dev*,struct qede_arfs_fltr_node*,scalar_t__,int) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(void *VAR_1, void *VAR_2, u8 VAR_3)
{
 struct qede_arfs_fltr_node *VAR_4 = VAR_2;
 struct qede_dev *VAR_5 = VAR_1;

 VAR_4->fw_rc = VAR_3;

 if (VAR_3) {
  FUNC_0(VAR_5,
     "Failed arfs filter configuration fw_rc=%d, flow_id=%d, sw_id=0x%llx, src_port=%d, dst_port=%d, rxq=%d\n",
     VAR_3, VAR_4->flow_id, VAR_4->sw_id,
     FUNC_2(VAR_4->tuple.src_port),
     FUNC_2(VAR_4->tuple.dst_port), VAR_4->rxq_id);

  FUNC_5(&VAR_5->arfs->arfs_list_lock);

  VAR_4->used = 0;
  FUNC_1(VAR_0, &VAR_4->state);

  FUNC_6(&VAR_5->arfs->arfs_list_lock);
  return;
 }

 FUNC_5(&VAR_5->arfs->arfs_list_lock);

 VAR_4->used = 0;

 if (VAR_4->filter_op) {
  FUNC_4(VAR_0, &VAR_4->state);
  if (VAR_4->rxq_id != VAR_4->next_rxq_id)
   FUNC_3(VAR_5, VAR_4, VAR_4->rxq_id,
       0);
 } else {
  FUNC_1(VAR_0, &VAR_4->state);
  if (VAR_4->rxq_id != VAR_4->next_rxq_id) {
   VAR_4->rxq_id = VAR_4->next_rxq_id;
   FUNC_3(VAR_5, VAR_4,
       VAR_4->rxq_id, 1);
  }
 }

 FUNC_6(&VAR_5->arfs->arfs_list_lock);
}
