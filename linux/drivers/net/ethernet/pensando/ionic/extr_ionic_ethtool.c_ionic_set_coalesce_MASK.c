
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct net_device {int dummy; } ;
struct TYPE_10__ {int index; } ;
struct ionic_qcq {TYPE_4__ intr; } ;
struct ionic_lif {scalar_t__ rx_coalesce_usecs; unsigned int nxqs; TYPE_5__* ionic; TYPE_2__* rxqcqs; int state; } ;
struct TYPE_7__ {scalar_t__ intr_coal_div; } ;
struct ionic_identity {TYPE_1__ dev; } ;
struct ethtool_coalesce {scalar_t__ tx_coalesce_usecs; scalar_t__ rx_coalesce_usecs; scalar_t__ rate_sample_interval; scalar_t__ tx_max_coalesced_frames_high; scalar_t__ tx_coalesce_usecs_high; scalar_t__ rx_max_coalesced_frames_high; scalar_t__ rx_coalesce_usecs_high; scalar_t__ pkt_rate_high; scalar_t__ tx_max_coalesced_frames_low; scalar_t__ tx_coalesce_usecs_low; scalar_t__ rx_max_coalesced_frames_low; scalar_t__ rx_coalesce_usecs_low; scalar_t__ pkt_rate_low; scalar_t__ use_adaptive_tx_coalesce; scalar_t__ use_adaptive_rx_coalesce; scalar_t__ stats_block_coalesce_usecs; scalar_t__ tx_max_coalesced_frames_irq; scalar_t__ tx_coalesce_usecs_irq; scalar_t__ tx_max_coalesced_frames; scalar_t__ rx_max_coalesced_frames_irq; scalar_t__ rx_coalesce_usecs_irq; scalar_t__ rx_max_coalesced_frames; } ;
struct TYPE_9__ {int intr_ctrl; } ;
struct TYPE_11__ {TYPE_3__ idev; struct ionic_identity ident; } ;
struct TYPE_8__ {struct ionic_qcq* qcq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_5__*,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_5__*,scalar_t__) ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 struct ionic_lif* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,char*,...) ;
 scalar_t__ FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_5,
         struct ethtool_coalesce *VAR_6)
{
 struct ionic_lif *VAR_7 = FUNC_3(VAR_5);
 struct ionic_identity *VAR_8;
 struct ionic_qcq *VAR_9;
 unsigned int VAR_10;
 u32 VAR_11;
 u32 VAR_12;

 if (VAR_6->rx_max_coalesced_frames ||
     VAR_6->rx_coalesce_usecs_irq ||
     VAR_6->rx_max_coalesced_frames_irq ||
     VAR_6->tx_max_coalesced_frames ||
     VAR_6->tx_coalesce_usecs_irq ||
     VAR_6->tx_max_coalesced_frames_irq ||
     VAR_6->stats_block_coalesce_usecs ||
     VAR_6->use_adaptive_rx_coalesce ||
     VAR_6->use_adaptive_tx_coalesce ||
     VAR_6->pkt_rate_low ||
     VAR_6->rx_coalesce_usecs_low ||
     VAR_6->rx_max_coalesced_frames_low ||
     VAR_6->tx_coalesce_usecs_low ||
     VAR_6->tx_max_coalesced_frames_low ||
     VAR_6->pkt_rate_high ||
     VAR_6->rx_coalesce_usecs_high ||
     VAR_6->rx_max_coalesced_frames_high ||
     VAR_6->tx_coalesce_usecs_high ||
     VAR_6->tx_max_coalesced_frames_high ||
     VAR_6->rate_sample_interval)
  return -VAR_0;

 VAR_8 = &VAR_7->ionic->ident;
 if (VAR_8->dev.intr_coal_div == 0) {
  FUNC_4(VAR_5, "bad HW value in dev.intr_coal_div = %d\n",
       VAR_8->dev.intr_coal_div);
  return -VAR_1;
 }


 if (VAR_6->tx_coalesce_usecs != VAR_7->rx_coalesce_usecs) {
  FUNC_4(VAR_5, "only the rx-usecs can be changed\n");
  return -VAR_0;
 }

 VAR_12 = FUNC_1(VAR_7->ionic, VAR_6->rx_coalesce_usecs);

 if (VAR_12 > VAR_3)
  return -VAR_2;


 if (!VAR_12 && VAR_6->rx_coalesce_usecs)
  VAR_12 = 1;


 VAR_11 = FUNC_0(VAR_7->ionic, VAR_12);

 if (VAR_11 != VAR_7->rx_coalesce_usecs) {
  VAR_7->rx_coalesce_usecs = VAR_11;

  if (FUNC_5(VAR_4, VAR_7->state)) {
   for (VAR_10 = 0; VAR_10 < VAR_7->nxqs; VAR_10++) {
    VAR_9 = VAR_7->rxqcqs[VAR_10].qcq;
    FUNC_2(VAR_7->ionic->idev.intr_ctrl,
           VAR_9->intr.index, VAR_12);
   }
  }
 }

 return 0;
}
