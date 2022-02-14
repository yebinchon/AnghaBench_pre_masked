
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qeth_rx {int dummy; } ;
struct qeth_qdio_out_q {int state; int set_pci_flags_count; int used_buffers; scalar_t__ bulk_start; int * prev_hdr; scalar_t__ do_pack; scalar_t__ next_buf_to_fill; int max_elements; int qdio_bufs; } ;
struct TYPE_5__ {int buf_count; } ;
struct TYPE_6__ {unsigned int no_out_queues; struct qeth_qdio_out_q** out_qs; TYPE_2__ in_buf_pool; TYPE_1__* in_q; } ;
struct qeth_card {int dev; TYPE_3__ qdio; int rx; } ;
struct TYPE_4__ {int next_buf_to_init; int * bufs; int qdio_bufs; } ;


 int FUNC_0 (struct qeth_card*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct qeth_card*,int,char*) ;
 int FUNC_2 (struct qeth_card*,int,char*,int) ;
 int FUNC_3 (struct qeth_card*) ;
 int VAR_2 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,int ,int ,int ,int) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int ,unsigned int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct qeth_card*) ;
 int FUNC_11 (struct qeth_card*,int *) ;
 int FUNC_12 (struct qeth_card*) ;

int FUNC_13(struct qeth_card *VAR_3)
{
 unsigned int VAR_4;
 int VAR_5;

 FUNC_1(VAR_3, 2, "initqdqs");


 FUNC_9(VAR_3->qdio.in_q->qdio_bufs, VAR_1);
 FUNC_6(&VAR_3->rx, 0, sizeof(struct qeth_rx));
 FUNC_12(VAR_3);

 for (VAR_4 = 0; VAR_4 < VAR_3->qdio.in_buf_pool.buf_count - 1; ++VAR_4)
  FUNC_11(VAR_3, &VAR_3->qdio.in_q->bufs[VAR_4]);
 VAR_3->qdio.in_q->next_buf_to_init =
  VAR_3->qdio.in_buf_pool.buf_count - 1;
 VAR_5 = FUNC_5(FUNC_0(VAR_3), VAR_0, 0, 0,
       VAR_3->qdio.in_buf_pool.buf_count - 1);
 if (VAR_5) {
  FUNC_2(VAR_3, 2, "1err%d", VAR_5);
  return VAR_5;
 }


 VAR_5 = FUNC_10(VAR_3);
 if (VAR_5) {
  return VAR_5;
 }


 for (VAR_4 = 0; VAR_4 < VAR_3->qdio.no_out_queues; ++VAR_4) {
  struct qeth_qdio_out_q *VAR_6 = VAR_3->qdio.out_qs[VAR_4];

  FUNC_9(VAR_6->qdio_bufs, VAR_1);
  VAR_6->max_elements = FUNC_3(VAR_3);
  VAR_6->next_buf_to_fill = 0;
  VAR_6->do_pack = 0;
  VAR_6->prev_hdr = ((void*)0);
  VAR_6->bulk_start = 0;
  FUNC_4(&VAR_6->used_buffers, 0);
  FUNC_4(&VAR_6->set_pci_flags_count, 0);
  FUNC_4(&VAR_6->state, VAR_2);
  FUNC_8(FUNC_7(VAR_3->dev, VAR_4));
 }
 return 0;
}
