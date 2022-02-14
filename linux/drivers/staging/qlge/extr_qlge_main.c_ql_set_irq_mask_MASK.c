
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ql_adapter {int tx_ring_count; int intr_count; int rss_ring_count; int rx_ring_count; TYPE_1__* rx_ring; int flags; } ;
struct intr_context {int intr; int irq_mask; } ;
struct TYPE_2__ {int cq_id; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct ql_adapter *VAR_1, struct intr_context *VAR_2)
{
 int VAR_3, VAR_4 = VAR_2->intr;
 u32 VAR_5 = VAR_1->tx_ring_count / VAR_1->intr_count;

 if (FUNC_0(FUNC_1(VAR_0, &VAR_1->flags))) {



  VAR_2->irq_mask = (1 << VAR_1->rx_ring[VAR_4].cq_id);


  for (VAR_3 = 0; VAR_3 < VAR_5; VAR_3++) {
   VAR_2->irq_mask |=
   (1 << VAR_1->rx_ring[VAR_1->rss_ring_count +
   (VAR_4 * VAR_5) + VAR_3].cq_id);
  }
 } else {



  for (VAR_3 = 0; VAR_3 < VAR_1->rx_ring_count; VAR_3++)
   VAR_2->irq_mask |= (1 << VAR_1->rx_ring[VAR_3].cq_id);
 }
}
