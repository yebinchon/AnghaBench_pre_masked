
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gelic_descr {struct gelic_descr* next; int skb; } ;
struct TYPE_2__ {struct gelic_descr* head; } ;
struct gelic_card {TYPE_1__ rx_chain; } ;


 int FUNC_0 (struct gelic_card*) ;
 int FUNC_1 (struct gelic_card*,struct gelic_descr*) ;

__attribute__((used)) static int FUNC_2(struct gelic_card *VAR_0)
{
 struct gelic_descr *VAR_1 = VAR_0->rx_chain.head;
 int VAR_2;

 do {
  if (!VAR_1->skb) {
   VAR_2 = FUNC_1(VAR_0, VAR_1);
   if (VAR_2)
    goto rewind;
  }
  VAR_1 = VAR_1->next;
 } while (VAR_1 != VAR_0->rx_chain.head);

 return 0;
rewind:
 FUNC_0(VAR_0);
 return VAR_2;
}
