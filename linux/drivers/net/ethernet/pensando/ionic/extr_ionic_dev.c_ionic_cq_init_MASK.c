
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ionic_lif {int dummy; } ;
struct ionic_intr_info {int dummy; } ;
struct ionic_cq_info {int last; unsigned int index; struct ionic_cq_info* next; } ;
struct ionic_cq {unsigned int num_descs; size_t desc_size; int done_color; struct ionic_cq_info* info; struct ionic_cq_info* tail; struct ionic_intr_info* bound_intr; struct ionic_lif* lif; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;

int FUNC_2(struct ionic_lif *VAR_1, struct ionic_cq *VAR_2,
    struct ionic_intr_info *VAR_3,
    unsigned int VAR_4, size_t VAR_5)
{
 struct ionic_cq_info *VAR_6;
 unsigned int VAR_7;
 unsigned int VAR_8;

 if (VAR_5 == 0 || !FUNC_1(VAR_4))
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_4);
 if (VAR_7 < 2 || VAR_7 > 16)
  return -VAR_0;

 VAR_2->lif = VAR_1;
 VAR_2->bound_intr = VAR_3;
 VAR_2->num_descs = VAR_4;
 VAR_2->desc_size = VAR_5;
 VAR_2->tail = VAR_2->info;
 VAR_2->done_color = 1;

 VAR_6 = VAR_2->info;

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  if (VAR_8 + 1 == VAR_4) {
   VAR_6->next = VAR_2->info;
   VAR_6->last = 1;
  } else {
   VAR_6->next = VAR_6 + 1;
  }
  VAR_6->index = VAR_8;
  VAR_6++;
 }

 return 0;
}
