
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
struct TYPE_3__ {int (* get_pauseparam ) (struct hnae3_handle*,int *,int *,int *) ;} ;


 struct hnae3_handle* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct hnae3_handle*,int *,int *,int *) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0,
    struct ethtool_pauseparam *VAR_1)
{
 struct hnae3_handle *VAR_2 = FUNC_0(VAR_0);

 if (VAR_2->ae_algo->ops->get_pauseparam)
  VAR_2->ae_algo->ops->get_pauseparam(VAR_2, &VAR_1->autoneg,
   &VAR_1->rx_pause, &VAR_1->tx_pause);
}
