
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ionic_rxq_desc {int len; int addr; } ;
struct ionic_queue {struct ionic_desc_info* head; struct ionic_desc_info* tail; TYPE_2__* lif; } ;
struct ionic_desc_info {int * cb_arg; struct ionic_rxq_desc* desc; struct ionic_desc_info* next; } ;
struct device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ionic; } ;
struct TYPE_3__ {struct device* dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct device*,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct ionic_queue *VAR_1)
{
 struct device *VAR_2 = VAR_1->lif->ionic->dev;
 struct ionic_desc_info *VAR_3;
 struct ionic_rxq_desc *VAR_4;

 for (VAR_3 = VAR_1->tail; VAR_3 != VAR_1->head; VAR_3 = VAR_3->next) {
  VAR_4 = VAR_3->desc;
  FUNC_1(VAR_2, FUNC_3(VAR_4->addr),
     FUNC_2(VAR_4->len), VAR_0);
  FUNC_0(VAR_3->cb_arg);
  VAR_3->cb_arg = ((void*)0);
 }
}
