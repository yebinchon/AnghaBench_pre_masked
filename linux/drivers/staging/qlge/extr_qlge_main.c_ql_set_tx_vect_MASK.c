
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ql_adapter {int tx_ring_count; int intr_count; int rss_ring_count; int rx_ring_count; TYPE_1__* rx_ring; int flags; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct ql_adapter *VAR_1)
{
 int VAR_2, VAR_3, VAR_4;
 u32 VAR_5 = VAR_1->tx_ring_count / VAR_1->intr_count;

 if (FUNC_0(FUNC_1(VAR_0, &VAR_1->flags))) {

  for (VAR_4 = 0, VAR_3 = 0, VAR_2 = VAR_1->rss_ring_count;
      VAR_2 < VAR_1->rx_ring_count; VAR_2++) {
   if (VAR_3 == VAR_5) {
    VAR_4++;
    VAR_3 = 0;
   }
   VAR_1->rx_ring[VAR_2].irq = VAR_4;
   VAR_3++;
  }
 } else {



  for (VAR_2 = 0; VAR_2 < VAR_1->rx_ring_count; VAR_2++)
   VAR_1->rx_ring[VAR_2].irq = 0;
 }
}
