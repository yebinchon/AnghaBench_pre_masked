
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct queue_set {void* sq_cnt; void* rq_cnt; int cq_len; int sq_len; int rbdr_len; int cq_cnt; int rbdr_cnt; } ;
struct nicvf {scalar_t__ xdp_tx_queues; void* tx_queues; void* rx_queues; struct queue_set* qs; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct queue_set* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int ,void*,void*) ;
 void* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 () ;
 int VAR_8 ;

int FUNC_4(struct nicvf *VAR_9)
{
 struct queue_set *VAR_10;

 VAR_10 = FUNC_0(&VAR_9->pdev->dev, sizeof(*VAR_10), VAR_3);
 if (!VAR_10)
  return -VAR_2;
 VAR_9->qs = VAR_10;


 VAR_10->rbdr_cnt = VAR_1;
 VAR_10->rq_cnt = FUNC_2(VAR_8, VAR_4, FUNC_3());
 VAR_10->sq_cnt = FUNC_2(VAR_8, VAR_5, FUNC_3());
 VAR_10->cq_cnt = FUNC_1(VAR_8, VAR_10->rq_cnt, VAR_10->sq_cnt);


 VAR_10->rbdr_len = VAR_6;
 VAR_10->sq_len = VAR_7;
 VAR_10->cq_len = VAR_0;

 VAR_9->rx_queues = VAR_10->rq_cnt;
 VAR_9->tx_queues = VAR_10->sq_cnt;
 VAR_9->xdp_tx_queues = 0;

 return 0;
}
