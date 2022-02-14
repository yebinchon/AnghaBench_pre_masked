
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct spider_net_descr {struct spider_net_descr* next; int * skb; TYPE_2__* hwdescr; } ;
struct TYPE_3__ {struct spider_net_descr* head; } ;
struct spider_net_card {int pdev; TYPE_1__ rx_chain; } ;
struct TYPE_4__ {int buf_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct spider_net_card *VAR_2)
{
 struct spider_net_descr *VAR_3;

 VAR_3 = VAR_2->rx_chain.head;
 do {
  if (VAR_3->skb) {
   FUNC_1(VAR_2->pdev, VAR_3->hwdescr->buf_addr,
      VAR_1,
      VAR_0);
   FUNC_0(VAR_3->skb);
   VAR_3->skb = ((void*)0);
  }
  VAR_3 = VAR_3->next;
 } while (VAR_3 != VAR_2->rx_chain.head);
}
