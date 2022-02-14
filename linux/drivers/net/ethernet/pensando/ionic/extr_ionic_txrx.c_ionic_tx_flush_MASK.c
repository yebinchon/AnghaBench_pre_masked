
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ionic_txq_comp {int comp_index; int color; } ;
struct ionic_queue {struct ionic_desc_info* tail; } ;
struct ionic_dev {int intr_ctrl; } ;
struct ionic_desc_info {scalar_t__ index; int * cb_arg; int * cb; struct ionic_desc_info* next; } ;
struct ionic_cq {unsigned int num_descs; int done_color; TYPE_3__* bound_intr; TYPE_4__* tail; struct ionic_queue* bound_q; TYPE_2__* lif; } ;
struct TYPE_8__ {struct ionic_txq_comp* cq_desc; struct TYPE_8__* next; scalar_t__ last; } ;
struct TYPE_7__ {int index; } ;
struct TYPE_6__ {TYPE_1__* ionic; } ;
struct TYPE_5__ {struct ionic_dev idev; } ;


 int FUNC_0 (struct ionic_cq*) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ,unsigned int,int ) ;
 int FUNC_3 (struct ionic_queue*,struct ionic_desc_info*,TYPE_4__*,int *) ;
 scalar_t__ FUNC_4 (int ) ;

void FUNC_5(struct ionic_cq *VAR_0)
{
 struct ionic_txq_comp *VAR_1 = VAR_0->tail->cq_desc;
 struct ionic_dev *VAR_2 = &VAR_0->lif->ionic->idev;
 struct ionic_queue *VAR_3 = VAR_0->bound_q;
 struct ionic_desc_info *VAR_4;
 unsigned int VAR_5 = 0;


 while (VAR_5 < VAR_0->num_descs &&
        FUNC_1(VAR_1->color, VAR_0->done_color)) {




  do {
   VAR_4 = VAR_3->tail;
   VAR_3->tail = VAR_4->next;
   FUNC_3(VAR_3, VAR_4, VAR_0->tail,
           VAR_4->cb_arg);
   VAR_4->cb = ((void*)0);
   VAR_4->cb_arg = ((void*)0);
  } while (VAR_4->index != FUNC_4(VAR_1->comp_index));

  if (VAR_0->tail->last)
   VAR_0->done_color = !VAR_0->done_color;

  VAR_0->tail = VAR_0->tail->next;
  VAR_1 = VAR_0->tail->cq_desc;
  FUNC_0(VAR_0);

  VAR_5++;
 }

 if (VAR_5)
  FUNC_2(VAR_2->intr_ctrl, VAR_0->bound_intr->index,
       VAR_5, 0);
}
