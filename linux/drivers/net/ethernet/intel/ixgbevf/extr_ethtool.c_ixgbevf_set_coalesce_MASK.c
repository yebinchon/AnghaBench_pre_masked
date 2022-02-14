
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u16 ;
struct net_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ count; } ;
struct TYPE_3__ {scalar_t__ count; } ;
struct ixgbevf_q_vector {void* itr; TYPE_2__ rx; TYPE_1__ tx; } ;
struct ixgbevf_adapter {int rx_itr_setting; int tx_itr_setting; int num_msix_vectors; struct ixgbevf_q_vector** q_vector; } ;
struct ethtool_coalesce {int tx_coalesce_usecs; int rx_coalesce_usecs; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ixgbevf_q_vector*) ;
 struct ixgbevf_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_5,
    struct ethtool_coalesce *VAR_6)
{
 struct ixgbevf_adapter *VAR_7 = FUNC_1(VAR_5);
 struct ixgbevf_q_vector *VAR_8;
 int VAR_9, VAR_10;
 u16 VAR_11, VAR_12;


 if (VAR_7->q_vector[0]->tx.count &&
     VAR_7->q_vector[0]->rx.count && VAR_6->tx_coalesce_usecs)
  return -VAR_0;

 if ((VAR_6->rx_coalesce_usecs > (VAR_3 >> 2)) ||
     (VAR_6->tx_coalesce_usecs > (VAR_3 >> 2)))
  return -VAR_0;

 if (VAR_6->rx_coalesce_usecs > 1)
  VAR_7->rx_itr_setting = VAR_6->rx_coalesce_usecs << 2;
 else
  VAR_7->rx_itr_setting = VAR_6->rx_coalesce_usecs;

 if (VAR_7->rx_itr_setting == 1)
  VAR_12 = VAR_2;
 else
  VAR_12 = VAR_7->rx_itr_setting;

 if (VAR_6->tx_coalesce_usecs > 1)
  VAR_7->tx_itr_setting = VAR_6->tx_coalesce_usecs << 2;
 else
  VAR_7->tx_itr_setting = VAR_6->tx_coalesce_usecs;

 if (VAR_7->tx_itr_setting == 1)
  VAR_11 = VAR_1;
 else
  VAR_11 = VAR_7->tx_itr_setting;

 VAR_9 = VAR_7->num_msix_vectors - VAR_4;

 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
  VAR_8 = VAR_7->q_vector[VAR_10];
  if (VAR_8->tx.count && !VAR_8->rx.count)

   VAR_8->itr = VAR_11;
  else

   VAR_8->itr = VAR_12;
  FUNC_0(VAR_8);
 }

 return 0;
}
