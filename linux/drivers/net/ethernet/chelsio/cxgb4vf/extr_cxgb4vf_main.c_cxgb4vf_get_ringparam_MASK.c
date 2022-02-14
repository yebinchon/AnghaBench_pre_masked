
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sge {TYPE_6__* ethtxq; TYPE_4__* ethrxq; } ;
struct port_info {size_t first_qset; TYPE_1__* adapter; } ;
struct net_device {int dummy; } ;
struct ethtool_ringparam {int tx_pending; scalar_t__ rx_jumbo_pending; int rx_mini_pending; scalar_t__ rx_pending; int tx_max_pending; scalar_t__ rx_jumbo_max_pending; int rx_mini_max_pending; int rx_max_pending; } ;
struct TYPE_11__ {int size; } ;
struct TYPE_12__ {TYPE_5__ q; } ;
struct TYPE_9__ {int size; } ;
struct TYPE_8__ {scalar_t__ size; } ;
struct TYPE_10__ {TYPE_3__ rspq; TYPE_2__ fl; } ;
struct TYPE_7__ {struct sge sge; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct port_info* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_4,
      struct ethtool_ringparam *VAR_5)
{
 const struct port_info *VAR_6 = FUNC_0(VAR_4);
 const struct sge *VAR_7 = &VAR_6->adapter->sge;

 VAR_5->rx_max_pending = VAR_1;
 VAR_5->rx_mini_max_pending = VAR_0;
 VAR_5->rx_jumbo_max_pending = 0;
 VAR_5->tx_max_pending = VAR_2;

 VAR_5->rx_pending = VAR_7->ethrxq[VAR_6->first_qset].fl.size - VAR_3;
 VAR_5->rx_mini_pending = VAR_7->ethrxq[VAR_6->first_qset].rspq.size;
 VAR_5->rx_jumbo_pending = 0;
 VAR_5->tx_pending = VAR_7->ethtxq[VAR_6->first_qset].q.size;
}
