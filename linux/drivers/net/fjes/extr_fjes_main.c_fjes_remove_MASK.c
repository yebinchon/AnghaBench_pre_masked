
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct net_device {int dummy; } ;
struct fjes_hw {int dummy; } ;
struct fjes_adapter {int napi; scalar_t__ txrx_wq; scalar_t__ control_wq; int tx_stall_task; int raise_intr_rxdata_task; int unshare_watch_task; int interrupt_watch_task; struct fjes_hw hw; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 struct net_device* FUNC_3 (int *) ;
 int FUNC_4 (struct fjes_adapter*) ;
 int FUNC_5 (struct fjes_hw*) ;
 int FUNC_6 (struct net_device*) ;
 struct fjes_adapter* FUNC_7 (struct net_device*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct net_device*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_0)
{
 struct net_device *VAR_1 = FUNC_3(&VAR_0->dev);
 struct fjes_adapter *VAR_2 = FUNC_7(VAR_1);
 struct fjes_hw *VAR_3 = &VAR_2->hw;

 FUNC_4(VAR_2);

 FUNC_0(&VAR_2->interrupt_watch_task);
 FUNC_1(&VAR_2->unshare_watch_task);
 FUNC_1(&VAR_2->raise_intr_rxdata_task);
 FUNC_1(&VAR_2->tx_stall_task);
 if (VAR_2->control_wq)
  FUNC_2(VAR_2->control_wq);
 if (VAR_2->txrx_wq)
  FUNC_2(VAR_2->txrx_wq);

 FUNC_9(VAR_1);

 FUNC_5(VAR_3);

 FUNC_8(&VAR_2->napi);

 FUNC_6(VAR_1);

 return 0;
}
