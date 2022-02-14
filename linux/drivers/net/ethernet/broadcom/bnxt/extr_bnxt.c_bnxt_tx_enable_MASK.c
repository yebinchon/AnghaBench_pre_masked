
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bnxt_tx_ring_info {scalar_t__ dev_state; } ;
struct TYPE_2__ {scalar_t__ link_up; } ;
struct bnxt {int tx_nr_rings; int dev; TYPE_1__ link_info; struct bnxt_tx_ring_info* tx_ring; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct bnxt *VAR_0)
{
 int VAR_1;
 struct bnxt_tx_ring_info *VAR_2;

 for (VAR_1 = 0; VAR_1 < VAR_0->tx_nr_rings; VAR_1++) {
  VAR_2 = &VAR_0->tx_ring[VAR_1];
  VAR_2->dev_state = 0;
 }
 FUNC_1(VAR_0->dev);
 if (VAR_0->link_info.link_up)
  FUNC_0(VAR_0->dev);
}
