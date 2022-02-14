
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct spider_net_descr_chain {TYPE_3__* head; struct spider_net_descr* tail; } ;
struct spider_net_descr {struct spider_net_descr* next; int bus_addr; TYPE_2__* prev; } ;
struct spider_net_card {struct spider_net_descr_chain rx_chain; } ;
struct TYPE_6__ {struct TYPE_6__* next; } ;
struct TYPE_5__ {TYPE_1__* hwdescr; } ;
struct TYPE_4__ {int next_descr_addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct spider_net_card*) ;
 int FUNC_1 (struct spider_net_card*) ;
 scalar_t__ FUNC_2 (struct spider_net_card*,TYPE_3__*) ;
 int FUNC_3 (struct spider_net_card*) ;

__attribute__((used)) static int
FUNC_4(struct spider_net_card *VAR_1)
{
 struct spider_net_descr_chain *VAR_2 = &VAR_1->rx_chain;
 struct spider_net_descr *VAR_3 = VAR_2->tail;
 struct spider_net_descr *VAR_4 = VAR_3;


 do {
  VAR_4->prev->hwdescr->next_descr_addr = VAR_4->bus_addr;
  VAR_4 = VAR_4->next;
 } while (VAR_4 != VAR_3);




 if (FUNC_2(VAR_1, VAR_2->head))
  goto error;
 else
  VAR_2->head = VAR_2->head->next;



 FUNC_3(VAR_1);
 FUNC_0(VAR_1);
 return 0;

error:
 FUNC_1(VAR_1);
 return -VAR_0;
}
