
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netdev_private {TYPE_1__* tx_ring; scalar_t__ cur_tx; scalar_t__ dirty_tx; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ cmd_status; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 struct netdev_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1)
{
 struct netdev_private *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;


 FUNC_0(VAR_1);
 VAR_2->dirty_tx = VAR_2->cur_tx = 0;
 for (VAR_3=0;VAR_3<VAR_0;VAR_3++)
  VAR_2->tx_ring[VAR_3].cmd_status = 0;

 FUNC_2(VAR_1);
}
