
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct channel_data {TYPE_3__* rx_skb; TYPE_2__* cosa; TYPE_6__* netdev; int name; } ;
struct TYPE_7__ {int rx_bytes; int rx_packets; int rx_frame_errors; int rx_errors; } ;
struct TYPE_10__ {TYPE_1__ stats; } ;
struct TYPE_9__ {TYPE_6__* dev; int protocol; } ;
struct TYPE_8__ {scalar_t__ rxsize; } ;


 int FUNC_0 (TYPE_3__*,TYPE_6__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_4(struct channel_data *VAR_0)
{
 if (!VAR_0->rx_skb) {
  FUNC_2("%s: rx_done with empty skb!\n", VAR_0->name);
  VAR_0->netdev->stats.rx_errors++;
  VAR_0->netdev->stats.rx_frame_errors++;
  return 0;
 }
 VAR_0->rx_skb->protocol = FUNC_0(VAR_0->rx_skb, VAR_0->netdev);
 VAR_0->rx_skb->dev = VAR_0->netdev;
 FUNC_3(VAR_0->rx_skb);
 VAR_0->netdev->stats.rx_packets++;
 VAR_0->netdev->stats.rx_bytes += VAR_0->cosa->rxsize;
 FUNC_1(VAR_0->rx_skb);
 VAR_0->rx_skb = ((void*)0);
 return 0;
}
