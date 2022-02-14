
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gelic_descr {scalar_t__ next; } ;
struct TYPE_2__ {scalar_t__ tail; struct gelic_descr* head; } ;
struct gelic_card {TYPE_1__ tx_chain; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct gelic_descr*) ;

__attribute__((used)) static struct gelic_descr *
FUNC_1(struct gelic_card *VAR_1)
{
 if (!VAR_1->tx_chain.head)
  return ((void*)0);

 if (VAR_1->tx_chain.tail != VAR_1->tx_chain.head->next &&
     FUNC_0(VAR_1->tx_chain.head) ==
     VAR_0)
  return VAR_1->tx_chain.head;
 else
  return ((void*)0);

}
