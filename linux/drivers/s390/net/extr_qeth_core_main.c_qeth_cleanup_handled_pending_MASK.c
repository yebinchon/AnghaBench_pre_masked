
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct qeth_qdio_out_q {TYPE_3__* card; struct qeth_qdio_out_buffer** bufs; } ;
struct qeth_qdio_out_buffer {int state; struct qeth_qdio_out_buffer* next_pending; TYPE_2__* q; } ;
struct TYPE_5__ {scalar_t__ cq; } ;
struct TYPE_7__ {TYPE_1__ options; } ;
struct TYPE_6__ {TYPE_3__* card; } ;


 int FUNC_0 (TYPE_3__*,int,char*) ;
 int FUNC_1 (TYPE_3__*,int,char*,long) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ,struct qeth_qdio_out_buffer*) ;
 int FUNC_5 (struct qeth_qdio_out_q*,int) ;
 int VAR_2 ;
 int FUNC_6 (struct qeth_qdio_out_buffer*,int,int ) ;

__attribute__((used)) static void FUNC_7(struct qeth_qdio_out_q *VAR_3, int VAR_4,
      int VAR_5)
{
 if (VAR_3->card->options.cq != VAR_0)
  return;

 if (VAR_3->bufs[VAR_4]->next_pending != ((void*)0)) {
  struct qeth_qdio_out_buffer *VAR_6 = VAR_3->bufs[VAR_4];
  struct qeth_qdio_out_buffer *VAR_7 = VAR_3->bufs[VAR_4]->next_pending;

  while (VAR_7) {
   if (VAR_5 ||
       FUNC_3(&VAR_7->state) ==
         VAR_1) {
    struct qeth_qdio_out_buffer *VAR_8 = VAR_7;
    FUNC_0(VAR_8->q->card, 5, "fp");
    FUNC_1(VAR_8->q->card, 5, "%lx", (long) VAR_8);



    FUNC_6(VAR_7, VAR_5, 0);

    VAR_7 = VAR_8->next_pending;
    FUNC_2(VAR_6->next_pending != VAR_8);
    VAR_6->next_pending = VAR_7;
    FUNC_4(VAR_2, VAR_8);
   } else {
    VAR_6 = VAR_7;
    VAR_7 = VAR_7->next_pending;
   }

  }
 }
 if (VAR_5 && (FUNC_3(&(VAR_3->bufs[VAR_4]->state)) ==
     VAR_1)) {

  FUNC_5(VAR_3, VAR_4);
  FUNC_0(VAR_3->card, 2, "clprecov");
 }
}
