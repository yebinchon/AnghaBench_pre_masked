
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct hnae3_handle {TYPE_2__* ae_algo; } ;
struct ethtool_pauseparam {int tx_pause; int rx_pause; int autoneg; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* set_pauseparam ) (struct hnae3_handle*,int ,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct hnae3_handle* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct hnae3_handle*,int ,struct net_device*,char*,int ,int ,int ) ;
 int FUNC_2 (struct hnae3_handle*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2,
          struct ethtool_pauseparam *VAR_3)
{
 struct hnae3_handle *VAR_4 = FUNC_0(VAR_2);

 FUNC_1(VAR_4, VAR_1, VAR_2,
    "set pauseparam: autoneg=%u, rx:%u, tx:%u\n",
    VAR_3->autoneg, VAR_3->rx_pause, VAR_3->tx_pause);

 if (VAR_4->ae_algo->ops->set_pauseparam)
  return VAR_4->ae_algo->ops->set_pauseparam(VAR_4, VAR_3->autoneg,
             VAR_3->rx_pause,
             VAR_3->tx_pause);
 return -VAR_0;
}
