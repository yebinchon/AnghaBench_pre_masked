
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct channel_data {TYPE_2__* netdev; int * tx_skb; int name; } ;
struct TYPE_3__ {int tx_bytes; int tx_packets; int tx_aborted_errors; int tx_errors; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static int FUNC_3(struct channel_data *VAR_0, int VAR_1)
{
 if (!VAR_0->tx_skb) {
  FUNC_2("%s: tx_done with empty skb!\n", VAR_0->name);
  VAR_0->netdev->stats.tx_errors++;
  VAR_0->netdev->stats.tx_aborted_errors++;
  return 1;
 }
 FUNC_0(VAR_0->tx_skb);
 VAR_0->tx_skb = ((void*)0);
 VAR_0->netdev->stats.tx_packets++;
 VAR_0->netdev->stats.tx_bytes += VAR_1;
 FUNC_1(VAR_0->netdev);
 return 1;
}
