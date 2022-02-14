
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ethtool_pauseparam {scalar_t__ autoneg; scalar_t__ rx_pause; scalar_t__ tx_pause; } ;
struct TYPE_4__ {scalar_t__ rx_pause; scalar_t__ tx_pause; } ;
struct TYPE_6__ {TYPE_1__ pause_config; } ;
struct TYPE_5__ {TYPE_3__ enet; } ;
struct bnad {int conf_mutex; int bna_lock; TYPE_2__ bna; } ;
struct bna_pause_config {scalar_t__ rx_pause; scalar_t__ tx_pause; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,struct bna_pause_config*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct bnad* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_6(struct net_device *VAR_2,
      struct ethtool_pauseparam *VAR_3)
{
 struct bnad *VAR_4 = FUNC_3(VAR_2);
 struct bna_pause_config VAR_5;
 unsigned long VAR_6;

 if (VAR_3->autoneg == VAR_0)
  return -VAR_1;

 FUNC_1(&VAR_4->conf_mutex);
 if (VAR_3->rx_pause != VAR_4->bna.enet.pause_config.rx_pause ||
     VAR_3->tx_pause != VAR_4->bna.enet.pause_config.tx_pause) {
  VAR_5.rx_pause = VAR_3->rx_pause;
  VAR_5.tx_pause = VAR_3->tx_pause;
  FUNC_4(&VAR_4->bna_lock, VAR_6);
  FUNC_0(&VAR_4->bna.enet, &VAR_5);
  FUNC_5(&VAR_4->bna_lock, VAR_6);
 }
 FUNC_2(&VAR_4->conf_mutex);
 return 0;
}
