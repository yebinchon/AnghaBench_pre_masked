
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ionic_queue {struct ionic_desc_info* tail; TYPE_3__* head; int name; TYPE_2__* lif; } ;
struct ionic_desc_info {scalar_t__ index; int * cb_arg; int (* cb ) (struct ionic_queue*,struct ionic_desc_info*,struct ionic_cq_info*,void*) ;struct ionic_desc_info* next; } ;
struct ionic_cq_info {int dummy; } ;
typedef int (* ionic_desc_cb ) (struct ionic_queue*,struct ionic_desc_info*,struct ionic_cq_info*,void*) ;
struct TYPE_6__ {scalar_t__ index; } ;
struct TYPE_5__ {TYPE_1__* ionic; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int ,char*,int ,unsigned int,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct ionic_queue*,unsigned int) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3(struct ionic_queue *VAR_0, struct ionic_cq_info *VAR_1,
       unsigned int VAR_2)
{
 struct ionic_desc_info *VAR_3;
 ionic_desc_cb VAR_4;
 void *VAR_5;


 if (VAR_0->tail->index == VAR_0->head->index)
  return;


 if (FUNC_2(!FUNC_1(VAR_0, VAR_2)))
  FUNC_0(VAR_0->lif->ionic->dev,
   "ionic stop is not posted %s stop %u tail %u head %u\n",
   VAR_0->name, VAR_2, VAR_0->tail->index, VAR_0->head->index);

 do {
  VAR_3 = VAR_0->tail;
  VAR_0->tail = VAR_3->next;

  VAR_4 = VAR_3->cb;
  VAR_5 = VAR_3->cb_arg;

  VAR_3->cb = ((void*)0);
  VAR_3->cb_arg = ((void*)0);

  if (VAR_4)
   VAR_4(VAR_0, VAR_3, VAR_1, VAR_5);
 } while (VAR_3->index != VAR_2);
}
