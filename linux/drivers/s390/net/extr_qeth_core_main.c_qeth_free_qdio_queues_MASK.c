
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int no_out_queues; int ** out_qs; TYPE_3__* in_q; int state; } ;
struct qeth_card {TYPE_2__ qdio; int buffer_reclaim_work; } ;
struct TYPE_6__ {TYPE_1__* bufs; } ;
struct TYPE_4__ {scalar_t__ rx_skb; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct qeth_card*) ;
 int FUNC_4 (struct qeth_card*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_7(struct qeth_card *VAR_2)
{
 int VAR_3, VAR_4;

 if (FUNC_0(&VAR_2->qdio.state, VAR_1) ==
  VAR_1)
  return;

 FUNC_4(VAR_2);
 FUNC_1(&VAR_2->buffer_reclaim_work);
 for (VAR_4 = 0; VAR_4 < VAR_0; ++VAR_4) {
  if (VAR_2->qdio.in_q->bufs[VAR_4].rx_skb)
   FUNC_2(VAR_2->qdio.in_q->bufs[VAR_4].rx_skb);
 }
 FUNC_6(VAR_2->qdio.in_q);
 VAR_2->qdio.in_q = ((void*)0);

 FUNC_3(VAR_2);

 for (VAR_3 = 0; VAR_3 < VAR_2->qdio.no_out_queues; VAR_3++) {
  FUNC_5(VAR_2->qdio.out_qs[VAR_3]);
  VAR_2->qdio.out_qs[VAR_3] = ((void*)0);
 }
}
