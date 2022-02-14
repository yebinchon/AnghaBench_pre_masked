
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rx_dropped; } ;
struct net_device {TYPE_1__ stats; } ;
struct cpmac_priv {int ring_size; struct cpmac_desc* rx_head; } ;
struct cpmac_desc {int dataflags; TYPE_2__* prev; struct cpmac_desc* next; int mapping; int hw_next; } ;
struct TYPE_4__ {scalar_t__ hw_next; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,struct cpmac_desc*) ;
 scalar_t__ FUNC_1 () ;
 struct cpmac_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,char*) ;
 int FUNC_4 (struct cpmac_priv*) ;
 scalar_t__ FUNC_5 (struct cpmac_priv*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_1)
{
 struct cpmac_priv *VAR_2 = FUNC_2(VAR_1);
 struct cpmac_desc *VAR_3;
 int VAR_4;

 if (FUNC_6(!VAR_2->rx_head))
  return;
 VAR_3 = VAR_2->rx_head;
 for (VAR_4 = 0; VAR_4 < VAR_2->ring_size; VAR_4++) {
  if ((VAR_3->dataflags & VAR_0) == 0) {
   if (FUNC_5(VAR_2) && FUNC_1())
    FUNC_3(VAR_1, "packet dropped\n");
   if (FUNC_6(FUNC_4(VAR_2)))
    FUNC_0(VAR_1, VAR_3);
   VAR_3->dataflags = VAR_0;
   VAR_1->stats.rx_dropped++;
  }
  VAR_3->hw_next = VAR_3->next->mapping;
  VAR_3 = VAR_3->next;
 }
 VAR_2->rx_head->prev->hw_next = 0;
}
