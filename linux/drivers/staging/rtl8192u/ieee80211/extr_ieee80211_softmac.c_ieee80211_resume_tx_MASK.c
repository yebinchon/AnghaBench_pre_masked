
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int frag; TYPE_3__* txb; } ;
struct TYPE_4__ {int tx_packets; } ;
struct ieee80211_device {TYPE_2__ tx_pending; int dev; TYPE_1__ stats; int rate; int (* softmac_data_hard_start_xmit ) (int ,int ,int ) ;scalar_t__ queue_stop; } ;
struct TYPE_6__ {int nr_frags; int * fragments; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_device *VAR_0)
{
 int VAR_1;
 for (VAR_1 = VAR_0->tx_pending.frag; VAR_1 < VAR_0->tx_pending.txb->nr_frags; VAR_1++) {
  if (VAR_0->queue_stop) {
   VAR_0->tx_pending.frag = VAR_1;
   return;
  } else {
   VAR_0->softmac_data_hard_start_xmit(VAR_0->tx_pending.txb->fragments[VAR_1],
          VAR_0->dev, VAR_0->rate);

   VAR_0->stats.tx_packets++;
   FUNC_1(VAR_0->dev);
  }
 }

 FUNC_0(VAR_0->tx_pending.txb);
 VAR_0->tx_pending.txb = ((void*)0);
}
