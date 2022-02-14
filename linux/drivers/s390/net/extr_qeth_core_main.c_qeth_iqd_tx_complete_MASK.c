
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct qeth_qdio_out_q {int max_elements; TYPE_2__* bufstates; struct qeth_card* card; struct qeth_qdio_out_buffer** bufs; } ;
struct qeth_qdio_out_buffer {TYPE_4__* buffer; int state; } ;
struct TYPE_7__ {scalar_t__ cq; } ;
struct qeth_card {TYPE_3__ options; } ;
struct TYPE_8__ {TYPE_1__* element; } ;
struct TYPE_6__ {int flags; } ;
struct TYPE_5__ {int sflags; } ;


 int VAR_0 ;
 int FUNC_0 (struct qeth_card*,int,char*) ;
 int FUNC_1 (struct qeth_card*,int,char*,unsigned int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *,scalar_t__,int ) ;
 int FUNC_4 (struct qeth_qdio_out_q*,struct qeth_qdio_out_buffer*,int,int) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (struct qeth_qdio_out_q*,unsigned int) ;
 int FUNC_7 (struct qeth_qdio_out_q*,struct qeth_qdio_out_buffer*,int ) ;
 int FUNC_8 (struct qeth_card*) ;
 int FUNC_9 (TYPE_4__*,int ) ;

__attribute__((used)) static void FUNC_10(struct qeth_qdio_out_q *VAR_5,
     unsigned int VAR_6, bool VAR_7, int VAR_8)
{
 struct qeth_qdio_out_buffer *VAR_9 = VAR_5->bufs[VAR_6];
 u8 VAR_10 = VAR_9->buffer->element[15].sflags;
 struct qeth_card *VAR_11 = VAR_5->card;

 if (VAR_5->bufstates && (VAR_5->bufstates[VAR_6].flags &
     VAR_0)) {
  FUNC_2(VAR_11->options.cq != VAR_1);

  if (FUNC_3(&VAR_9->state, VAR_3,
         VAR_2) ==
      VAR_3)
   FUNC_7(VAR_5, VAR_9, VAR_4);

  FUNC_1(VAR_11, 5, "pel%u", VAR_6);


  FUNC_9(VAR_9->buffer, VAR_5->max_elements);
  if (FUNC_6(VAR_5, VAR_6)) {
   FUNC_0(VAR_11, 2, "outofbuf");
   FUNC_8(VAR_11);
  }

  return;
 }

 if (VAR_11->options.cq == VAR_1)
  FUNC_7(VAR_5, VAR_9,
     FUNC_5(VAR_10, 0));
 FUNC_4(VAR_5, VAR_9, VAR_7, VAR_8);
}
