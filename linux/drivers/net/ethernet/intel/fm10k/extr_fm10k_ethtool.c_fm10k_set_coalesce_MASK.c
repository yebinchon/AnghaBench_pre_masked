
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u16 ;
struct net_device {int dummy; } ;
struct TYPE_4__ {void* itr; } ;
struct TYPE_3__ {void* itr; } ;
struct fm10k_q_vector {TYPE_2__ rx; TYPE_1__ tx; } ;
struct fm10k_intfc {int num_q_vectors; struct fm10k_q_vector** q_vector; void* rx_itr; void* tx_itr; } ;
struct ethtool_coalesce {scalar_t__ rx_coalesce_usecs; scalar_t__ tx_coalesce_usecs; scalar_t__ use_adaptive_rx_coalesce; scalar_t__ use_adaptive_tx_coalesce; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct fm10k_intfc* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_5,
         struct ethtool_coalesce *VAR_6)
{
 struct fm10k_intfc *VAR_7 = FUNC_0(VAR_5);
 u16 VAR_8, VAR_9;
 int VAR_10;


 if ((VAR_6->rx_coalesce_usecs > VAR_2) ||
     (VAR_6->tx_coalesce_usecs > VAR_2))
  return -VAR_0;


 VAR_8 = VAR_6->tx_coalesce_usecs;
 VAR_9 = VAR_6->rx_coalesce_usecs;


 if (VAR_6->use_adaptive_tx_coalesce)
  VAR_8 = VAR_1 | VAR_4;

 if (VAR_6->use_adaptive_rx_coalesce)
  VAR_9 = VAR_1 | VAR_3;


 VAR_7->tx_itr = VAR_8;
 VAR_7->rx_itr = VAR_9;


 for (VAR_10 = 0; VAR_10 < VAR_7->num_q_vectors; VAR_10++) {
  struct fm10k_q_vector *VAR_11 = VAR_7->q_vector[VAR_10];

  VAR_11->tx.itr = VAR_8;
  VAR_11->rx.itr = VAR_9;
 }

 return 0;
}
