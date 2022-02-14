
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dev_addr; } ;
struct ethtool_ringparam {scalar_t__ rx_pending; scalar_t__ tx_pending; } ;
struct bnad {scalar_t__ rxq_depth; scalar_t__ txq_depth; int num_rx; int cfg_flags; int num_tx; int conf_mutex; TYPE_2__* tx_info; int bna_lock; TYPE_1__* rx_info; } ;
struct TYPE_4__ {int tx; } ;
struct TYPE_3__ {scalar_t__ rx; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bnad*,int) ;
 int FUNC_1 (struct bnad*,int) ;
 int FUNC_2 (struct bnad*) ;
 int FUNC_3 (struct bnad*,int ) ;
 int FUNC_4 (struct bnad*,int ) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct bnad*,int) ;
 int FUNC_7 (struct bnad*,int) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 struct bnad* FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_15(struct net_device *VAR_6,
     struct ethtool_ringparam *VAR_7)
{
 int VAR_8, VAR_9, VAR_10 = 0;
 struct bnad *VAR_11 = FUNC_11(VAR_6);
 unsigned long VAR_12;

 FUNC_9(&VAR_11->conf_mutex);
 if (VAR_7->rx_pending == VAR_11->rxq_depth &&
     VAR_7->tx_pending == VAR_11->txq_depth) {
  FUNC_10(&VAR_11->conf_mutex);
  return 0;
 }

 if (VAR_7->rx_pending < VAR_4 ||
     VAR_7->rx_pending > VAR_2 ||
     !FUNC_8(VAR_7->rx_pending)) {
  FUNC_10(&VAR_11->conf_mutex);
  return -VAR_5;
 }
 if (VAR_7->tx_pending < VAR_4 ||
     VAR_7->tx_pending > VAR_3 ||
     !FUNC_8(VAR_7->tx_pending)) {
  FUNC_10(&VAR_11->conf_mutex);
  return -VAR_5;
 }

 if (VAR_7->rx_pending != VAR_11->rxq_depth) {
  VAR_11->rxq_depth = VAR_7->rx_pending;
  if (!FUNC_12(VAR_6)) {
   FUNC_10(&VAR_11->conf_mutex);
   return 0;
  }

  for (VAR_8 = 0; VAR_8 < VAR_11->num_rx; VAR_8++) {
   if (!VAR_11->rx_info[VAR_8].rx)
    continue;
   FUNC_0(VAR_11, VAR_8);
   VAR_9 = FUNC_6(VAR_11, VAR_8);
   if (VAR_9 && !VAR_10)
    VAR_10 = VAR_9;
  }

  if (!VAR_10 && VAR_11->rx_info[0].rx) {

   FUNC_4(VAR_11, 0);
   FUNC_2(VAR_11);
   FUNC_13(&VAR_11->bna_lock, VAR_12);
   FUNC_3(VAR_11, VAR_6->dev_addr);
   FUNC_14(&VAR_11->bna_lock, VAR_12);
   VAR_11->cfg_flags &= ~(VAR_0 |
          VAR_1);
   FUNC_5(VAR_6);
  }
 }
 if (VAR_7->tx_pending != VAR_11->txq_depth) {
  VAR_11->txq_depth = VAR_7->tx_pending;
  if (!FUNC_12(VAR_6)) {
   FUNC_10(&VAR_11->conf_mutex);
   return 0;
  }

  for (VAR_8 = 0; VAR_8 < VAR_11->num_tx; VAR_8++) {
   if (!VAR_11->tx_info[VAR_8].tx)
    continue;
   FUNC_1(VAR_11, VAR_8);
   VAR_9 = FUNC_7(VAR_11, VAR_8);
   if (VAR_9 && !VAR_10)
    VAR_10 = VAR_9;
  }
 }

 FUNC_10(&VAR_11->conf_mutex);
 return VAR_10;
}
