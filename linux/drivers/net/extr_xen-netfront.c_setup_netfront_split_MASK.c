
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netfront_queue {char* name; int tx_irq; int rx_irq; scalar_t__ tx_evtchn; TYPE_1__* info; scalar_t__ rx_evtchn; int rx_irq_name; int tx_irq_name; } ;
struct TYPE_2__ {int xbdev; } ;


 int FUNC_0 (scalar_t__,int ,int ,int ,struct netfront_queue*) ;
 int FUNC_1 (int ,int,char*,char*) ;
 int FUNC_2 (int,struct netfront_queue*) ;
 int FUNC_3 (int ,scalar_t__*) ;
 int FUNC_4 (int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(struct netfront_queue *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_3(VAR_2->info->xbdev, &VAR_2->tx_evtchn);
 if (VAR_3 < 0)
  goto fail;
 VAR_3 = FUNC_3(VAR_2->info->xbdev, &VAR_2->rx_evtchn);
 if (VAR_3 < 0)
  goto alloc_rx_evtchn_fail;

 FUNC_1(VAR_2->tx_irq_name, sizeof(VAR_2->tx_irq_name),
   "%s-tx", VAR_2->name);
 VAR_3 = FUNC_0(VAR_2->tx_evtchn,
     VAR_1,
     0, VAR_2->tx_irq_name, VAR_2);
 if (VAR_3 < 0)
  goto bind_tx_fail;
 VAR_2->tx_irq = VAR_3;

 FUNC_1(VAR_2->rx_irq_name, sizeof(VAR_2->rx_irq_name),
   "%s-rx", VAR_2->name);
 VAR_3 = FUNC_0(VAR_2->rx_evtchn,
     VAR_0,
     0, VAR_2->rx_irq_name, VAR_2);
 if (VAR_3 < 0)
  goto bind_rx_fail;
 VAR_2->rx_irq = VAR_3;

 return 0;

bind_rx_fail:
 FUNC_2(VAR_2->tx_irq, VAR_2);
 VAR_2->tx_irq = 0;
bind_tx_fail:
 FUNC_4(VAR_2->info->xbdev, VAR_2->rx_evtchn);
 VAR_2->rx_evtchn = 0;
alloc_rx_evtchn_fail:
 FUNC_4(VAR_2->info->xbdev, VAR_2->tx_evtchn);
 VAR_2->tx_evtchn = 0;
fail:
 return VAR_3;
}
