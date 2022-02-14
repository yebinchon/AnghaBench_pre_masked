
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spider_net_descr {struct spider_net_descr* next; int bus_addr; int hwdescr; } ;
struct TYPE_2__ {struct spider_net_descr* head; struct spider_net_descr* tail; } ;
struct spider_net_card {int tx_timer; TYPE_1__ tx_chain; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct spider_net_card*,int ) ;
 int FUNC_3 (struct spider_net_card*,int ,int ) ;

__attribute__((used)) static inline void
FUNC_4(struct spider_net_card *VAR_7)
{
 struct spider_net_descr *VAR_8;

 if (FUNC_2(VAR_7, VAR_3) &
   VAR_4)
  goto out;

 VAR_8 = VAR_7->tx_chain.tail;
 for (;;) {
  if (FUNC_1(VAR_8->hwdescr) ==
    VAR_0) {
   FUNC_3(VAR_7, VAR_2,
     VAR_8->bus_addr);
   FUNC_3(VAR_7, VAR_3,
     VAR_1);
   break;
  }
  if (VAR_8 == VAR_7->tx_chain.head)
   break;
  VAR_8 = VAR_8->next;
 }

out:
 FUNC_0(&VAR_7->tx_timer, VAR_6 + VAR_5);
}
