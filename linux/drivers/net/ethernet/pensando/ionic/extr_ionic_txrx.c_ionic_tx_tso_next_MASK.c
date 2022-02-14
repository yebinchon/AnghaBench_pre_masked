
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ionic_txq_sg_elem {int dummy; } ;
struct ionic_txq_sg_desc {struct ionic_txq_sg_elem* elems; } ;
struct ionic_txq_desc {int dummy; } ;
struct ionic_queue {TYPE_1__* head; } ;
struct TYPE_2__ {struct ionic_txq_desc* desc; struct ionic_txq_sg_desc* sg_desc; } ;



__attribute__((used)) static struct ionic_txq_desc *FUNC_0(struct ionic_queue *VAR_0,
      struct ionic_txq_sg_elem **VAR_1)
{
 struct ionic_txq_sg_desc *VAR_2 = VAR_0->head->sg_desc;
 struct ionic_txq_desc *VAR_3 = VAR_0->head->desc;

 *VAR_1 = VAR_2->elems;
 return VAR_3;
}
