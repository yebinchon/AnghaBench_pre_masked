
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gelic_descr {struct gelic_descr* next; TYPE_2__* skb; scalar_t__ buf_addr; } ;
struct TYPE_3__ {struct gelic_descr* head; } ;
struct gelic_card {TYPE_1__ rx_chain; } ;
struct TYPE_4__ {int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct gelic_card*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (struct gelic_descr*,int ) ;

__attribute__((used)) static void FUNC_5(struct gelic_card *VAR_2)
{
 struct gelic_descr *VAR_3 = VAR_2->rx_chain.head;

 do {
  if (VAR_3->skb) {
   FUNC_3(FUNC_1(VAR_2),
      FUNC_0(VAR_3->buf_addr),
      VAR_3->skb->len,
      VAR_0);
   VAR_3->buf_addr = 0;
   FUNC_2(VAR_3->skb);
   VAR_3->skb = ((void*)0);
   FUNC_4(VAR_3,
            VAR_1);
  }
  VAR_3 = VAR_3->next;
 } while (VAR_3 != VAR_2->rx_chain.head);
}
