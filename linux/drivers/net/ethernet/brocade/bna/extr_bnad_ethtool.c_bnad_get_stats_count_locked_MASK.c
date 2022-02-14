
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct bnad {int num_rx; int num_rxp_per_rx; int num_tx; int num_txq_per_tx; TYPE_5__* tx_info; TYPE_4__* rx_info; int bna; } ;
struct TYPE_10__ {int tx; } ;
struct TYPE_9__ {TYPE_3__* rx_ctrl; int rx; } ;
struct TYPE_8__ {TYPE_2__* ccb; } ;
struct TYPE_7__ {TYPE_1__** rcb; } ;
struct TYPE_6__ {scalar_t__ rxq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct bnad* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int
FUNC_3(struct net_device *VAR_6)
{
 struct bnad *VAR_7 = FUNC_2(VAR_6);
 int VAR_8, VAR_9, VAR_10 = 0, VAR_11 = 0, VAR_12 = 0;
 u32 VAR_13;

 VAR_13 = FUNC_1(&VAR_7->bna);
 for (VAR_8 = 0; VAR_13; VAR_8++) {
  if (VAR_13 & 1)
   VAR_12++;
  VAR_13 >>= 1;
 }
 VAR_13 = FUNC_0(&VAR_7->bna);
 for (VAR_8 = 0; VAR_13; VAR_8++) {
  if (VAR_13 & 1)
   VAR_11++;
  VAR_13 >>= 1;
 }
 VAR_10 = VAR_0 +
  VAR_12 * VAR_4 +
  VAR_11 * VAR_2;

 for (VAR_8 = 0; VAR_8 < VAR_7->num_rx; VAR_8++) {
  if (!VAR_7->rx_info[VAR_8].rx)
   continue;
  VAR_10 += VAR_7->num_rxp_per_rx * VAR_1;
  VAR_10 += VAR_7->num_rxp_per_rx * VAR_3;
  for (VAR_9 = 0; VAR_9 < VAR_7->num_rxp_per_rx; VAR_9++)
   if (VAR_7->rx_info[VAR_8].rx_ctrl[VAR_9].ccb &&
    VAR_7->rx_info[VAR_8].rx_ctrl[VAR_9].ccb->rcb[1] &&
    VAR_7->rx_info[VAR_8].rx_ctrl[VAR_9].ccb->rcb[1]->rxq)
    VAR_10 += VAR_3;
 }

 for (VAR_8 = 0; VAR_8 < VAR_7->num_tx; VAR_8++) {
  if (!VAR_7->tx_info[VAR_8].tx)
   continue;
  VAR_10 += VAR_7->num_txq_per_tx * VAR_5;
 }
 return VAR_10;
}
