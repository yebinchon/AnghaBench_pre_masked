
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int rcq_chain; int rxq_chain; int descq_array; } ;
struct TYPE_3__ {int txq_chain; int descq_mem; } ;
struct qed_ll2_info {int b_active; int mutex; int cid; TYPE_2__ rx_queue; TYPE_1__ tx_queue; } ;
struct qed_hwfn {int cdev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct qed_hwfn*,int ) ;
 struct qed_ll2_info* FUNC_5 (struct qed_hwfn*,int ) ;
 int FUNC_6 (struct qed_hwfn*,struct qed_ll2_info*) ;

void FUNC_7(void *VAR_0, u8 VAR_1)
{
 struct qed_hwfn *VAR_2 = VAR_0;
 struct qed_ll2_info *VAR_3 = ((void*)0);

 VAR_3 = FUNC_5(VAR_2, VAR_1);
 if (!VAR_3)
  return;

 FUNC_0(VAR_3->tx_queue.descq_mem);
 FUNC_3(VAR_2->cdev, &VAR_3->tx_queue.txq_chain);

 FUNC_0(VAR_3->rx_queue.descq_array);
 FUNC_3(VAR_2->cdev, &VAR_3->rx_queue.rxq_chain);
 FUNC_3(VAR_2->cdev, &VAR_3->rx_queue.rcq_chain);

 FUNC_4(VAR_2, VAR_3->cid);

 FUNC_6(VAR_2, VAR_3);

 FUNC_1(&VAR_3->mutex);
 VAR_3->b_active = 0;
 FUNC_2(&VAR_3->mutex);
}
