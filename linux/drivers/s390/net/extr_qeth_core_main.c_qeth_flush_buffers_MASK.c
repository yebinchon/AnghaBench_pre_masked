
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qeth_qdio_out_q {int queue_no; struct qeth_card* card; int napi; int set_pci_flags_count; int used_buffers; int do_pack; TYPE_1__* bufstates; struct qeth_qdio_out_buffer** bufs; } ;
struct qeth_qdio_out_buffer {int next_element_to_fill; TYPE_3__* buffer; } ;
struct qeth_card {int dummy; } ;
struct TYPE_6__ {TYPE_2__* element; } ;
struct TYPE_5__ {int sflags; int eflags; } ;
struct TYPE_4__ {struct qeth_qdio_out_buffer* user; } ;


 int FUNC_0 (struct qeth_card*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct qeth_card*) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct qeth_card*,int,char*) ;
 int FUNC_3 (struct qeth_card*,int,char*,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int ,unsigned int,int,int,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct qeth_card*) ;

__attribute__((used)) static void FUNC_9(struct qeth_qdio_out_q *VAR_8, int VAR_9,
          int VAR_10)
{
 struct qeth_card *VAR_11 = VAR_8->card;
 struct qeth_qdio_out_buffer *VAR_12;
 int VAR_13;
 int VAR_14;
 unsigned int VAR_15;

 for (VAR_14 = VAR_9; VAR_14 < VAR_9 + VAR_10; ++VAR_14) {
  int VAR_16 = VAR_14 % VAR_3;
  VAR_12 = VAR_8->bufs[VAR_16];
  VAR_12->buffer->element[VAR_12->next_element_to_fill - 1].eflags |=
    VAR_6;

  if (VAR_8->bufstates)
   VAR_8->bufstates[VAR_16].user = VAR_12;

  if (FUNC_1(VAR_8->card))
   continue;

  if (!VAR_8->do_pack) {
   if ((FUNC_5(&VAR_8->used_buffers) >=
    (VAR_4 -
     VAR_5)) &&
       !FUNC_5(&VAR_8->set_pci_flags_count)) {


    FUNC_4(&VAR_8->set_pci_flags_count);
    VAR_12->buffer->element[0].sflags |= VAR_7;
   }
  } else {
   if (!FUNC_5(&VAR_8->set_pci_flags_count)) {
    FUNC_4(&VAR_8->set_pci_flags_count);
    VAR_12->buffer->element[0].sflags |= VAR_7;
   }
  }
 }

 VAR_15 = VAR_2;
 if (FUNC_5(&VAR_8->set_pci_flags_count))
  VAR_15 |= VAR_1;
 VAR_13 = FUNC_6(FUNC_0(VAR_8->card), VAR_15,
       VAR_8->queue_no, VAR_9, VAR_10);


 if (FUNC_1(VAR_11))
  FUNC_7(&VAR_8->napi);

 if (VAR_13) {

  if (VAR_13 == -VAR_0)
   return;
  FUNC_2(VAR_8->card, 2, "flushbuf");
  FUNC_3(VAR_8->card, 2, " q%d", VAR_8->queue_no);
  FUNC_3(VAR_8->card, 2, " idx%d", VAR_9);
  FUNC_3(VAR_8->card, 2, " c%d", VAR_10);
  FUNC_3(VAR_8->card, 2, " err%d", VAR_13);



  FUNC_8(VAR_8->card);
  return;
 }
}
