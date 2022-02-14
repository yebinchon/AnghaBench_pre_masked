
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct ionic_lif {struct ionic* ionic; } ;
struct TYPE_6__ {TYPE_2__* port_info; } ;
struct ionic {int dev_cmd_lock; TYPE_3__ idev; } ;
struct ethtool_pauseparam {scalar_t__ tx_pause; scalar_t__ rx_pause; scalar_t__ autoneg; } ;
struct TYPE_4__ {int pause_type; } ;
struct TYPE_5__ {TYPE_1__ config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (struct ionic*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct ionic_lif* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_5,
    struct ethtool_pauseparam *VAR_6)
{
 struct ionic_lif *VAR_7 = FUNC_4(VAR_5);
 struct ionic *VAR_8 = VAR_7->ionic;
 u32 VAR_9;
 int VAR_10;

 if (VAR_6->autoneg)
  return -VAR_1;


 VAR_9 = VAR_4;
 if (VAR_6->rx_pause)
  VAR_9 |= VAR_2;
 if (VAR_6->tx_pause)
  VAR_9 |= VAR_3;

 if (VAR_9 == VAR_7->ionic->idev.port_info->config.pause_type)
  return 0;

 FUNC_2(&VAR_8->dev_cmd_lock);
 FUNC_0(&VAR_7->ionic->idev, VAR_9);
 VAR_10 = FUNC_1(VAR_8, VAR_0);
 FUNC_3(&VAR_8->dev_cmd_lock);
 if (VAR_10)
  return VAR_10;

 return 0;
}
