
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ionic_rxq_comp {int comp_index; int pkt_type_color; } ;
struct ionic_queue {struct ionic_desc_info* tail; TYPE_1__* head; } ;
struct ionic_desc_info {scalar_t__ index; int * cb_arg; int * cb; struct ionic_desc_info* next; } ;
struct ionic_cq_info {struct ionic_rxq_comp* cq_desc; } ;
struct ionic_cq {int done_color; struct ionic_queue* bound_q; } ;
struct TYPE_2__ {scalar_t__ index; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ionic_queue*,struct ionic_desc_info*,struct ionic_cq_info*,int *) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static bool FUNC_3(struct ionic_cq *VAR_0, struct ionic_cq_info *VAR_1)
{
 struct ionic_rxq_comp *VAR_2 = VAR_1->cq_desc;
 struct ionic_queue *VAR_3 = VAR_0->bound_q;
 struct ionic_desc_info *VAR_4;

 if (!FUNC_0(VAR_2->pkt_type_color, VAR_0->done_color))
  return 0;


 if (VAR_3->tail->index == VAR_3->head->index)
  return 0;

 VAR_4 = VAR_3->tail;
 if (VAR_4->index != FUNC_2(VAR_2->comp_index))
  return 0;

 VAR_3->tail = VAR_4->next;


 FUNC_1(VAR_3, VAR_4, VAR_1, VAR_4->cb_arg);

 VAR_4->cb = ((void*)0);
 VAR_4->cb_arg = ((void*)0);

 return 1;
}
