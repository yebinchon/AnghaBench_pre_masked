
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qeth_qdio_out_q {int queue_no; int ** bufs; int timer; struct qeth_card* card; } ;
struct TYPE_2__ {int no_out_queues; int state; int * in_q; struct qeth_qdio_out_q** out_qs; } ;
struct qeth_card {TYPE_1__ qdio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qeth_card*,int,struct qeth_qdio_out_q**,int) ;
 int FUNC_1 (struct qeth_card*,int,char*) ;
 int FUNC_2 (struct qeth_card*,int,char*,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,scalar_t__,int ) ;
 int FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (struct qeth_card*) ;
 scalar_t__ FUNC_8 (struct qeth_card*) ;
 struct qeth_qdio_out_q* FUNC_9 () ;
 int * FUNC_10 () ;
 int FUNC_11 (struct qeth_card*) ;
 int FUNC_12 (struct qeth_qdio_out_q*) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (struct qeth_qdio_out_q*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_15 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_16(struct qeth_card *VAR_6)
{
 int VAR_7, VAR_8;

 FUNC_1(VAR_6, 2, "allcqdbf");

 if (FUNC_4(&VAR_6->qdio.state, VAR_3,
  VAR_2) != VAR_3)
  return 0;

 FUNC_1(VAR_6, 2, "inq");
 VAR_6->qdio.in_q = FUNC_10();
 if (!VAR_6->qdio.in_q)
  goto out_nomem;


 if (FUNC_7(VAR_6))
  goto out_freeinq;


 for (VAR_7 = 0; VAR_7 < VAR_6->qdio.no_out_queues; ++VAR_7) {
  struct qeth_qdio_out_q *VAR_9;

  VAR_9 = FUNC_9();
  if (!VAR_9)
   goto out_freeoutq;
  FUNC_2(VAR_6, 2, "outq %i", VAR_7);
  FUNC_0(VAR_6, 2, &VAR_9, sizeof(void *));
  VAR_6->qdio.out_qs[VAR_7] = VAR_9;
  VAR_9->card = VAR_6;
  VAR_9->queue_no = VAR_7;
  FUNC_15(&VAR_9->timer, VAR_5, 0);


  for (VAR_8 = 0; VAR_8 < VAR_1; ++VAR_8) {
   FUNC_3(VAR_9->bufs[VAR_8]);
   if (FUNC_14(VAR_9, VAR_8))
    goto out_freeoutqbufs;
  }
 }


 if (FUNC_8(VAR_6))
  goto out_freeoutq;

 return 0;

out_freeoutqbufs:
 while (VAR_8 > 0) {
  --VAR_8;
  FUNC_6(VAR_4,
    VAR_6->qdio.out_qs[VAR_7]->bufs[VAR_8]);
  VAR_6->qdio.out_qs[VAR_7]->bufs[VAR_8] = ((void*)0);
 }
out_freeoutq:
 while (VAR_7 > 0) {
  FUNC_12(VAR_6->qdio.out_qs[--VAR_7]);
  VAR_6->qdio.out_qs[VAR_7] = ((void*)0);
 }
 FUNC_11(VAR_6);
out_freeinq:
 FUNC_13(VAR_6->qdio.in_q);
 VAR_6->qdio.in_q = ((void*)0);
out_nomem:
 FUNC_5(&VAR_6->qdio.state, VAR_3);
 return -VAR_0;
}
