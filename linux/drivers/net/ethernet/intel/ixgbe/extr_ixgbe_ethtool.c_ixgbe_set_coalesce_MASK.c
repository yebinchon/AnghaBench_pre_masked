
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct net_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ count; } ;
struct TYPE_3__ {scalar_t__ count; } ;
struct ixgbe_q_vector {int itr; TYPE_2__ rx; TYPE_1__ tx; } ;
struct ixgbe_adapter {int rx_itr_setting; int tx_itr_setting; int num_q_vectors; struct ixgbe_q_vector** q_vector; } ;
struct ethtool_coalesce {int tx_coalesce_usecs; int rx_coalesce_usecs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct ixgbe_adapter*) ;
 int FUNC_2 (struct ixgbe_q_vector*) ;
 struct ixgbe_adapter* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_5,
         struct ethtool_coalesce *VAR_6)
{
 struct ixgbe_adapter *VAR_7 = FUNC_3(VAR_5);
 struct ixgbe_q_vector *VAR_8;
 int VAR_9;
 u16 VAR_10, VAR_11, VAR_12;
 bool VAR_13 = 0;

 if (VAR_7->q_vector[0]->tx.count && VAR_7->q_vector[0]->rx.count) {

  if (VAR_6->tx_coalesce_usecs)
   return -VAR_0;
  VAR_12 = VAR_7->rx_itr_setting;
 } else {
  VAR_12 = VAR_7->tx_itr_setting;
 }

 if ((VAR_6->rx_coalesce_usecs > (VAR_4 >> 2)) ||
     (VAR_6->tx_coalesce_usecs > (VAR_4 >> 2)))
  return -VAR_0;

 if (VAR_6->rx_coalesce_usecs > 1)
  VAR_7->rx_itr_setting = VAR_6->rx_coalesce_usecs << 2;
 else
  VAR_7->rx_itr_setting = VAR_6->rx_coalesce_usecs;

 if (VAR_7->rx_itr_setting == 1)
  VAR_11 = VAR_3;
 else
  VAR_11 = VAR_7->rx_itr_setting;

 if (VAR_6->tx_coalesce_usecs > 1)
  VAR_7->tx_itr_setting = VAR_6->tx_coalesce_usecs << 2;
 else
  VAR_7->tx_itr_setting = VAR_6->tx_coalesce_usecs;

 if (VAR_7->tx_itr_setting == 1)
  VAR_10 = VAR_2;
 else
  VAR_10 = VAR_7->tx_itr_setting;


 if (VAR_7->q_vector[0]->tx.count && VAR_7->q_vector[0]->rx.count)
  VAR_7->tx_itr_setting = VAR_7->rx_itr_setting;


 if ((VAR_7->tx_itr_setting != 1) &&
     (VAR_7->tx_itr_setting < VAR_1)) {
  if ((VAR_12 == 1) ||
      (VAR_12 >= VAR_1))
   VAR_13 = 1;
 } else {
  if ((VAR_12 != 1) &&
      (VAR_12 < VAR_1))
   VAR_13 = 1;
 }


 VAR_13 |= FUNC_1(VAR_7);

 for (VAR_9 = 0; VAR_9 < VAR_7->num_q_vectors; VAR_9++) {
  VAR_8 = VAR_7->q_vector[VAR_9];
  if (VAR_8->tx.count && !VAR_8->rx.count)

   VAR_8->itr = VAR_10;
  else

   VAR_8->itr = VAR_11;
  FUNC_2(VAR_8);
 }






 if (VAR_13)
  FUNC_0(VAR_5);

 return 0;
}
