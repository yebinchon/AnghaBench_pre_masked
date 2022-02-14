
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ionic_queue {int dbval; TYPE_2__* head; int hw_type; int hw_index; int name; struct ionic_lif* lif; } ;
struct ionic_lif {int kern_dbpage; int index; TYPE_1__* ionic; } ;
struct device {int dummy; } ;
typedef int ionic_desc_cb ;
struct TYPE_4__ {int index; struct TYPE_4__* next; void* cb_arg; int cb; } ;
struct TYPE_3__ {struct device* dev; } ;


 int FUNC_0 (struct device*,char*,int ,int ,int ,int ,int,int) ;
 int FUNC_1 (int ,int ,int) ;

void FUNC_2(struct ionic_queue *VAR_0, bool VAR_1, ionic_desc_cb VAR_2,
    void *VAR_3)
{
 struct device *VAR_4 = VAR_0->lif->ionic->dev;
 struct ionic_lif *VAR_5 = VAR_0->lif;

 VAR_0->head->cb = VAR_2;
 VAR_0->head->cb_arg = VAR_3;
 VAR_0->head = VAR_0->head->next;

 FUNC_0(VAR_4, "lif=%d qname=%s qid=%d qtype=%d p_index=%d ringdb=%d\n",
  VAR_0->lif->index, VAR_0->name, VAR_0->hw_type, VAR_0->hw_index,
  VAR_0->head->index, VAR_1);

 if (VAR_1)
  FUNC_1(VAR_5->kern_dbpage, VAR_0->hw_type,
     VAR_0->dbval | VAR_0->head->index);
}
