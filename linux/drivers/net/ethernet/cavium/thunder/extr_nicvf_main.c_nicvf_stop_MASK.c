
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int msg; } ;
union nic_mbx {TYPE_1__ msg; } ;
struct queue_set {int rbdr_cnt; int cq_cnt; } ;
struct nicvf_cq_poll {int napi; } ;
struct nicvf {int link_up; int sqs_count; int num_vec; struct nicvf* pnicvf; int * ptp_skb; struct nicvf_cq_poll** napi; struct queue_set* qs; int rbdr_work; scalar_t__ rb_work_scheduled; int qs_err_task; int rbdr_task; int pdev; TYPE_2__** snicvf; int sqs_mode; int netdev; scalar_t__ nicvf_rx_mode_wq; int link_change_work; } ;
struct net_device {int num_tx_queues; } ;
struct TYPE_4__ {struct net_device* netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct net_device*,int) ;
 struct nicvf* FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct nicvf*,int ,int) ;
 int FUNC_13 (struct nicvf*,int) ;
 int FUNC_14 (struct nicvf*,int ,int) ;
 int FUNC_15 (struct nicvf*) ;
 int FUNC_16 (struct nicvf*,int) ;
 int FUNC_17 (struct nicvf*,union nic_mbx*) ;
 int FUNC_18 (struct nicvf*) ;
 int FUNC_19 (int ,int) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int *) ;

int FUNC_22(struct net_device *VAR_5)
{
 int VAR_6, VAR_7;
 struct nicvf *VAR_8 = FUNC_6(VAR_5);
 struct queue_set *VAR_9 = VAR_8->qs;
 struct nicvf_cq_poll *VAR_10 = ((void*)0);
 union nic_mbx VAR_11 = {};


 if (VAR_8->nicvf_rx_mode_wq) {
  FUNC_0(&VAR_8->link_change_work);
  FUNC_2(VAR_8->nicvf_rx_mode_wq);
 }

 VAR_11.msg.msg = VAR_4;
 FUNC_17(VAR_8, &VAR_11);

 FUNC_8(VAR_5);
 FUNC_11(VAR_8->netdev);
 VAR_8->link_up = 0;


 if (!VAR_8->sqs_mode) {
  for (VAR_7 = 0; VAR_7 < VAR_8->sqs_count; VAR_7++) {
   if (!VAR_8->snicvf[VAR_7])
    continue;
   FUNC_22(VAR_8->snicvf[VAR_7]->netdev);
   VAR_8->snicvf[VAR_7] = ((void*)0);
  }
 }


 for (VAR_7 = 0; VAR_7 < VAR_9->rbdr_cnt; VAR_7++) {
  FUNC_14(VAR_8, VAR_3, VAR_7);
  FUNC_12(VAR_8, VAR_3, VAR_7);
 }
 FUNC_14(VAR_8, VAR_2, 0);
 FUNC_12(VAR_8, VAR_2, 0);


 for (VAR_6 = 0; VAR_6 < VAR_8->num_vec; VAR_6++)
  FUNC_20(FUNC_19(VAR_8->pdev, VAR_6));

 FUNC_21(&VAR_8->rbdr_task);
 FUNC_21(&VAR_8->qs_err_task);
 if (VAR_8->rb_work_scheduled)
  FUNC_0(&VAR_8->rbdr_work);

 for (VAR_7 = 0; VAR_7 < VAR_8->qs->cq_cnt; VAR_7++) {
  VAR_10 = VAR_8->napi[VAR_7];
  if (!VAR_10)
   continue;
  FUNC_4(&VAR_10->napi);



  FUNC_14(VAR_8, VAR_0, VAR_7);
  FUNC_12(VAR_8, VAR_0, VAR_7);
  FUNC_3(&VAR_10->napi);
  FUNC_9(&VAR_10->napi);
 }

 FUNC_10(VAR_5);

 for (VAR_7 = 0; VAR_7 < VAR_5->num_tx_queues; VAR_7++)
  FUNC_7(FUNC_5(VAR_5, VAR_7));


 FUNC_13(VAR_8, 0);


 FUNC_16(VAR_8, 0);


 FUNC_14(VAR_8, VAR_1, 0);

 FUNC_18(VAR_8);

 FUNC_15(VAR_8);


 if (VAR_8->ptp_skb) {
  FUNC_1(VAR_8->ptp_skb);
  VAR_8->ptp_skb = ((void*)0);
 }


 VAR_8->pnicvf = VAR_8;

 return 0;
}
