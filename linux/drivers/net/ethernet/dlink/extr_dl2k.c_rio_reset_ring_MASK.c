
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct netdev_private {TYPE_2__* rx_ring; TYPE_1__* tx_ring; scalar_t__ old_tx; scalar_t__ old_rx; scalar_t__ cur_tx; scalar_t__ cur_rx; } ;
struct TYPE_4__ {scalar_t__ status; } ;
struct TYPE_3__ {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct netdev_private *VAR_3)
{
 int VAR_4;

 VAR_3->cur_rx = 0;
 VAR_3->cur_tx = 0;
 VAR_3->old_rx = 0;
 VAR_3->old_tx = 0;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
  VAR_3->tx_ring[VAR_4].status = FUNC_0(VAR_1);

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  VAR_3->rx_ring[VAR_4].status = 0;
}
