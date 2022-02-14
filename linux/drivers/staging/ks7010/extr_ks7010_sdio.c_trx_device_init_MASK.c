
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int rx_dev_lock; scalar_t__ qtail; scalar_t__ qhead; } ;
struct TYPE_3__ {int tx_dev_lock; scalar_t__ qtail; scalar_t__ qhead; } ;
struct ks_wlan_private {int rx_bh_task; TYPE_2__ rx_dev; TYPE_1__ tx_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct ks_wlan_private *VAR_1)
{
 VAR_1->tx_dev.qhead = 0;
 VAR_1->tx_dev.qtail = 0;

 VAR_1->rx_dev.qhead = 0;
 VAR_1->rx_dev.qtail = 0;

 FUNC_0(&VAR_1->tx_dev.tx_dev_lock);
 FUNC_0(&VAR_1->rx_dev.rx_dev_lock);

 FUNC_1(&VAR_1->rx_bh_task, VAR_0, (unsigned long)VAR_1);

 return 0;
}
