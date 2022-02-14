
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int qs_num; int rq_num; int cfg; int msg; } ;
union nic_mbx {TYPE_1__ rq; } ;
typedef int u64 ;
struct rq_cfg {int ena; scalar_t__ tcp_ena; } ;
struct rcv_queue {int enable; int cq_qs; int cq_idx; int start_rbdr_qs; int start_qs_rbdr_idx; int cont_rbdr_qs; int cont_qs_rbdr_idx; int caching; int xdp_rxq; } ;
struct queue_set {int vnic_id; int rbdr_cnt; struct rcv_queue* rq; } ;
struct nicvf {TYPE_2__* netdev; int sqs_mode; } ;
struct TYPE_4__ {int features; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct rq_cfg*,int ,int) ;
 int FUNC_4 (struct nicvf*,int ) ;
 int FUNC_5 (struct nicvf*,int ,int,int) ;
 int FUNC_6 (struct nicvf*,struct queue_set*,int) ;
 int FUNC_7 (struct nicvf*,union nic_mbx*) ;
 scalar_t__ FUNC_8 (int *,TYPE_2__*,int) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct nicvf *VAR_9, struct queue_set *VAR_10,
       int VAR_11, bool VAR_12)
{
 union nic_mbx VAR_13 = {};
 struct rcv_queue *VAR_14;
 struct rq_cfg VAR_15;

 VAR_14 = &VAR_10->rq[VAR_11];
 VAR_14->enable = VAR_12;


 FUNC_5(VAR_9, VAR_3, VAR_11, 0);

 if (!VAR_14->enable) {
  FUNC_6(VAR_9, VAR_10, VAR_11);
  FUNC_9(&VAR_14->xdp_rxq);
  return;
 }

 VAR_14->cq_qs = VAR_10->vnic_id;
 VAR_14->cq_idx = VAR_11;
 VAR_14->start_rbdr_qs = VAR_10->vnic_id;
 VAR_14->start_qs_rbdr_idx = VAR_10->rbdr_cnt - 1;
 VAR_14->cont_rbdr_qs = VAR_10->vnic_id;
 VAR_14->cont_qs_rbdr_idx = VAR_10->rbdr_cnt - 1;

 VAR_14->caching = 1;


 FUNC_2(FUNC_8(&VAR_14->xdp_rxq, VAR_9->netdev, VAR_11) < 0);


 VAR_13.rq.msg = VAR_1;
 VAR_13.rq.qs_num = VAR_10->vnic_id;
 VAR_13.rq.rq_num = VAR_11;
 VAR_13.rq.cfg = (VAR_14->caching << 26) | (VAR_14->cq_qs << 19) |
     (VAR_14->cq_idx << 16) | (VAR_14->cont_rbdr_qs << 9) |
     (VAR_14->cont_qs_rbdr_idx << 8) |
     (VAR_14->start_rbdr_qs << 1) | (VAR_14->start_qs_rbdr_idx);
 FUNC_7(VAR_9, &VAR_13);

 VAR_13.rq.msg = VAR_0;
 VAR_13.rq.cfg = FUNC_1(63) | FUNC_1(62) |
       (VAR_8 << 16) | (VAR_7 << 8) |
       (VAR_10->vnic_id << 0);
 FUNC_7(VAR_9, &VAR_13);




 VAR_13.rq.msg = VAR_2;
 VAR_13.rq.cfg = FUNC_1(63) | FUNC_1(62) |
       (VAR_8 << 40) | (VAR_6 << 32) |
       (VAR_7 << 16) | (VAR_5 << 8);
 FUNC_7(VAR_9, &VAR_13);

 if (!VAR_9->sqs_mode && (VAR_11 == 0)) {



  FUNC_5(VAR_9, VAR_4, 0,
          (FUNC_0(24) | FUNC_0(23) | FUNC_0(21) | FUNC_0(20)));
  FUNC_4(VAR_9, VAR_9->netdev->features);
 }


 FUNC_3(&VAR_15, 0, sizeof(struct rq_cfg));
 VAR_15.ena = 1;
 VAR_15.tcp_ena = 0;
 FUNC_5(VAR_9, VAR_3, VAR_11, *(u64 *)&VAR_15);
}
