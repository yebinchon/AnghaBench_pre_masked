
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx_ring_info {int dummy; } ;
typedef struct tx_ring_info rx_ring_info ;
struct niu {int num_rx_rings; int num_tx_rings; struct tx_ring_info* tx_rings; struct tx_ring_info* rx_rings; } ;


 int FUNC_0 (struct tx_ring_info*) ;
 int FUNC_1 (struct niu*,struct tx_ring_info*) ;
 int FUNC_2 (struct niu*,struct tx_ring_info*) ;

__attribute__((used)) static void FUNC_3(struct niu *VAR_0)
{
 int VAR_1;

 if (VAR_0->rx_rings) {
  for (VAR_1 = 0; VAR_1 < VAR_0->num_rx_rings; VAR_1++) {
   struct rx_ring_info *VAR_2 = &VAR_0->rx_rings[VAR_1];

   FUNC_1(VAR_0, VAR_2);
  }
  FUNC_0(VAR_0->rx_rings);
  VAR_0->rx_rings = ((void*)0);
  VAR_0->num_rx_rings = 0;
 }

 if (VAR_0->tx_rings) {
  for (VAR_1 = 0; VAR_1 < VAR_0->num_tx_rings; VAR_1++) {
   struct tx_ring_info *VAR_3 = &VAR_0->tx_rings[VAR_1];

   FUNC_2(VAR_0, VAR_3);
  }
  FUNC_0(VAR_0->tx_rings);
  VAR_0->tx_rings = ((void*)0);
  VAR_0->num_tx_rings = 0;
 }
}
