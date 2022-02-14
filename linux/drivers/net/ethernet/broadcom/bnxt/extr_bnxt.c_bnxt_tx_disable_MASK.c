
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt_tx_ring_info {int dev_state; } ;
struct bnxt {int tx_nr_rings; int dev; struct bnxt_tx_ring_info* tx_ring; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct bnxt *VAR_1)
{
 int VAR_2;
 struct bnxt_tx_ring_info *VAR_3;

 if (VAR_1->tx_ring) {
  for (VAR_2 = 0; VAR_2 < VAR_1->tx_nr_rings; VAR_2++) {
   VAR_3 = &VAR_1->tx_ring[VAR_2];
   VAR_3->dev_state = VAR_0;
  }
 }

 FUNC_1(VAR_1->dev);
 FUNC_0(VAR_1->dev);
}
