
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct channel_data {int * tx_skb; TYPE_3__* cosa; TYPE_2__* netdev; } ;
struct TYPE_6__ {int rxtx; } ;
struct TYPE_4__ {int tx_aborted_errors; int tx_errors; int rx_missed_errors; int rx_errors; } ;
struct TYPE_5__ {TYPE_1__ stats; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int *) ;
 struct channel_data* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_1)
{
 struct channel_data *VAR_2 = FUNC_2(VAR_1);

 if (FUNC_4(VAR_0, &VAR_2->cosa->rxtx)) {
  VAR_2->netdev->stats.rx_errors++;
  VAR_2->netdev->stats.rx_missed_errors++;
 } else {
  VAR_2->netdev->stats.tx_errors++;
  VAR_2->netdev->stats.tx_aborted_errors++;
 }
 FUNC_0(VAR_2->cosa);
 if (VAR_2->tx_skb) {
  FUNC_1(VAR_2->tx_skb);
  VAR_2->tx_skb = ((void*)0);
 }
 FUNC_3(VAR_1);
}
