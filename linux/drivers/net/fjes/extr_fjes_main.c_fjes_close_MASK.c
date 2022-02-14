
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct fjes_hw {int max_epid; int my_epid; int epstop_task; int update_zone_task; int rx_status_lock; TYPE_4__* ep_shm_info; } ;
struct fjes_adapter {int tx_stall_task; int raise_intr_rxdata_task; scalar_t__ unshare_watch_bitmask; int unshare_watch_task; int interrupt_watch_task; struct fjes_hw hw; int napi; } ;
struct TYPE_7__ {TYPE_2__* info; } ;
struct TYPE_8__ {TYPE_3__ tx; } ;
struct TYPE_5__ {int rx_status; } ;
struct TYPE_6__ {TYPE_1__ v1i; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct fjes_adapter*) ;
 int FUNC_3 (struct fjes_adapter*) ;
 scalar_t__ FUNC_4 (struct fjes_hw*,int) ;
 int FUNC_5 (struct fjes_hw*) ;
 int FUNC_6 (struct fjes_hw*) ;
 int FUNC_7 (int *) ;
 struct fjes_adapter* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_13(struct net_device *VAR_2)
{
 struct fjes_adapter *VAR_3 = FUNC_8(VAR_2);
 struct fjes_hw *VAR_4 = &VAR_3->hw;
 unsigned long VAR_5;
 int VAR_6;

 FUNC_10(VAR_2);
 FUNC_9(VAR_2);

 FUNC_5(VAR_4);

 FUNC_7(&VAR_3->napi);

 FUNC_11(&VAR_4->rx_status_lock, VAR_5);
 for (VAR_6 = 0; VAR_6 < VAR_4->max_epid; VAR_6++) {
  if (VAR_6 == VAR_4->my_epid)
   continue;

  if (FUNC_4(VAR_4, VAR_6) ==
      VAR_0)
   VAR_3->hw.ep_shm_info[VAR_6]
       .tx.info->v1i.rx_status &=
    ~VAR_1;
 }
 FUNC_12(&VAR_4->rx_status_lock, VAR_5);

 FUNC_2(VAR_3);

 FUNC_0(&VAR_3->interrupt_watch_task);
 FUNC_1(&VAR_3->unshare_watch_task);
 VAR_3->unshare_watch_bitmask = 0;
 FUNC_1(&VAR_3->raise_intr_rxdata_task);
 FUNC_1(&VAR_3->tx_stall_task);

 FUNC_1(&VAR_4->update_zone_task);
 FUNC_1(&VAR_4->epstop_task);

 FUNC_6(VAR_4);

 FUNC_3(VAR_3);

 return 0;
}
