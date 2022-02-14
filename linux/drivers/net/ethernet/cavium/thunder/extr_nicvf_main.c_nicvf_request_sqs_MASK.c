
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int sqs_id; int vf_id; int msg; } ;
struct TYPE_5__ {int qs_count; int vf_id; int msg; } ;
union nic_mbx {TYPE_2__ nicvf; TYPE_1__ sqs_alloc; } ;
struct nicvf {int sqs_count; int rx_queues; int tx_queues; int xdp_tx_queues; int netdev; TYPE_4__** snicvf; int vf_id; scalar_t__ sqs_mode; } ;
struct TYPE_8__ {int sqs_id; int netdev; TYPE_3__* qs; } ;
struct TYPE_7__ {int rq_cnt; int sq_cnt; int cq_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct nicvf*,union nic_mbx*) ;
 int FUNC_3 (int ,int,int) ;

__attribute__((used)) static void FUNC_4(struct nicvf *VAR_4)
{
 union nic_mbx VAR_5 = {};
 int VAR_6;
 int VAR_7 = VAR_4->sqs_count;
 int VAR_8 = 0, VAR_9 = 0;


 if (VAR_4->sqs_mode || !VAR_4->sqs_count)
  return;

 VAR_5.sqs_alloc.msg = VAR_2;
 VAR_5.sqs_alloc.vf_id = VAR_4->vf_id;
 VAR_5.sqs_alloc.qs_count = VAR_4->sqs_count;
 if (FUNC_2(VAR_4, &VAR_5)) {

  VAR_4->sqs_count = 0;
  return;
 }


 if (!VAR_4->sqs_count)
  return;

 if (VAR_4->rx_queues > VAR_0)
  VAR_8 = VAR_4->rx_queues - VAR_0;

 VAR_9 = VAR_4->tx_queues + VAR_4->xdp_tx_queues;
 if (VAR_9 > VAR_1)
  VAR_9 = VAR_9 - VAR_1;


 for (VAR_6 = 0; VAR_6 < VAR_4->sqs_count; VAR_6++) {
  VAR_5.nicvf.msg = VAR_3;
  VAR_5.nicvf.vf_id = VAR_4->vf_id;
  VAR_5.nicvf.sqs_id = VAR_6;
  FUNC_2(VAR_4, &VAR_5);

  VAR_4->snicvf[VAR_6]->sqs_id = VAR_6;
  if (VAR_8 > VAR_0) {
   VAR_4->snicvf[VAR_6]->qs->rq_cnt = VAR_0;
   VAR_8 -= VAR_0;
  } else {
   VAR_4->snicvf[VAR_6]->qs->rq_cnt = VAR_8;
   VAR_8 = 0;
  }

  if (VAR_9 > VAR_1) {
   VAR_4->snicvf[VAR_6]->qs->sq_cnt = VAR_1;
   VAR_9 -= VAR_1;
  } else {
   VAR_4->snicvf[VAR_6]->qs->sq_cnt = VAR_9;
   VAR_9 = 0;
  }

  VAR_4->snicvf[VAR_6]->qs->cq_cnt =
  FUNC_0(VAR_4->snicvf[VAR_6]->qs->rq_cnt, VAR_4->snicvf[VAR_6]->qs->sq_cnt);


  FUNC_1(VAR_4->snicvf[VAR_6]->netdev);
 }


 if (VAR_7 != VAR_4->sqs_count)
  FUNC_3(VAR_4->netdev,
       VAR_4->tx_queues, VAR_4->rx_queues);
}
