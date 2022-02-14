
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct netfront_queue {int rx_irq; int tx_irq; scalar_t__ tx_evtchn; TYPE_2__* info; scalar_t__ rx_evtchn; } ;
struct TYPE_4__ {int xbdev; TYPE_1__* netdev; } ;
struct TYPE_3__ {int name; } ;


 int FUNC_0 (scalar_t__,int ,int ,int ,struct netfront_queue*) ;
 int FUNC_1 (int ,scalar_t__*) ;
 int FUNC_2 (int ,scalar_t__) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct netfront_queue *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1->info->xbdev, &VAR_1->tx_evtchn);
 if (VAR_2 < 0)
  goto fail;

 VAR_2 = FUNC_0(VAR_1->tx_evtchn,
     VAR_0,
     0, VAR_1->info->netdev->name, VAR_1);
 if (VAR_2 < 0)
  goto bind_fail;
 VAR_1->rx_evtchn = VAR_1->tx_evtchn;
 VAR_1->rx_irq = VAR_1->tx_irq = VAR_2;

 return 0;

bind_fail:
 FUNC_2(VAR_1->info->xbdev, VAR_1->tx_evtchn);
 VAR_1->tx_evtchn = 0;
fail:
 return VAR_2;
}
