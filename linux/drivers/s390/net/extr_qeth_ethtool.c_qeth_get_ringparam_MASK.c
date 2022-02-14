
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buf_count; } ;
struct TYPE_4__ {TYPE_1__ in_buf_pool; } ;
struct qeth_card {TYPE_2__ qdio; } ;
struct net_device {struct qeth_card* ml_priv; } ;
struct ethtool_ringparam {void* tx_pending; scalar_t__ rx_jumbo_pending; scalar_t__ rx_mini_pending; int rx_pending; void* tx_max_pending; scalar_t__ rx_jumbo_max_pending; scalar_t__ rx_mini_max_pending; void* rx_max_pending; } ;


 void* VAR_0 ;

__attribute__((used)) static void FUNC_0(struct net_device *VAR_1,
          struct ethtool_ringparam *VAR_2)
{
 struct qeth_card *VAR_3 = VAR_1->ml_priv;

 VAR_2->rx_max_pending = VAR_0;
 VAR_2->rx_mini_max_pending = 0;
 VAR_2->rx_jumbo_max_pending = 0;
 VAR_2->tx_max_pending = VAR_0;

 VAR_2->rx_pending = VAR_3->qdio.in_buf_pool.buf_count;
 VAR_2->rx_mini_pending = 0;
 VAR_2->rx_jumbo_pending = 0;
 VAR_2->tx_pending = VAR_0;
}
