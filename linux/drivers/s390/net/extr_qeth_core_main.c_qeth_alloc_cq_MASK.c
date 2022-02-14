
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int no_in_queues; int no_out_queues; int * c_q; TYPE_2__** out_qs; struct qdio_outbuf_state* out_bufstates; } ;
struct TYPE_5__ {scalar_t__ cq; } ;
struct qeth_card {TYPE_4__* gdev; TYPE_3__ qdio; TYPE_1__ options; } ;
struct qdio_outbuf_state {int dummy; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_6__ {struct qdio_outbuf_state* bufstates; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qeth_card*,int,char*) ;
 int FUNC_1 (struct qeth_card*,int,char*,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *,char*) ;
 struct qdio_outbuf_state* FUNC_3 (int,int,int ) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct qeth_card *VAR_3)
{
 int VAR_4;

 if (VAR_3->options.cq == VAR_2) {
  int VAR_5;
  struct qdio_outbuf_state *VAR_6;

  FUNC_0(VAR_3, 2, "cqon");
  VAR_3->qdio.c_q = FUNC_4();
  if (!VAR_3->qdio.c_q) {
   VAR_4 = -1;
   goto kmsg_out;
  }
  VAR_3->qdio.no_in_queues = 2;
  VAR_3->qdio.out_bufstates =
   FUNC_3(VAR_3->qdio.no_out_queues *
     VAR_1,
    sizeof(struct qdio_outbuf_state),
    VAR_0);
  VAR_6 = VAR_3->qdio.out_bufstates;
  if (VAR_6 == ((void*)0)) {
   VAR_4 = -1;
   goto free_cq_out;
  }
  for (VAR_5 = 0; VAR_5 < VAR_3->qdio.no_out_queues; ++VAR_5) {
   VAR_3->qdio.out_qs[VAR_5]->bufstates = VAR_6;
   VAR_6 += VAR_1;
  }
 } else {
  FUNC_0(VAR_3, 2, "nocq");
  VAR_3->qdio.c_q = ((void*)0);
  VAR_3->qdio.no_in_queues = 1;
 }
 FUNC_1(VAR_3, 2, "iqc%d", VAR_3->qdio.no_in_queues);
 VAR_4 = 0;
out:
 return VAR_4;
free_cq_out:
 FUNC_5(VAR_3->qdio.c_q);
 VAR_3->qdio.c_q = ((void*)0);
kmsg_out:
 FUNC_2(&VAR_3->gdev->dev, "Failed to create completion queue\n");
 goto out;
}
