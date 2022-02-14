
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ravb_tx_desc {scalar_t__ die_dt; int dptr; int ds_tagl; } ;
struct ravb_private {int num_tx_desc; scalar_t__* cur_tx; int* dirty_tx; int* num_tx_ring; int *** tx_skb; struct ravb_tx_desc** tx_ring; struct net_device_stats* stats; } ;
struct net_device_stats {int tx_bytes; int tx_packets; } ;
struct TYPE_2__ {int parent; } ;
struct net_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct ravb_private* FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_4, int VAR_5, bool VAR_6)
{
 struct ravb_private *VAR_7 = FUNC_5(VAR_4);
 struct net_device_stats *VAR_8 = &VAR_7->stats[VAR_5];
 int VAR_9 = VAR_7->num_tx_desc;
 struct ravb_tx_desc *VAR_10;
 int VAR_11 = 0;
 int VAR_12;
 u32 VAR_13;

 for (; VAR_7->cur_tx[VAR_5] - VAR_7->dirty_tx[VAR_5] > 0; VAR_7->dirty_tx[VAR_5]++) {
  bool VAR_14;

  VAR_12 = VAR_7->dirty_tx[VAR_5] % (VAR_7->num_tx_ring[VAR_5] *
          VAR_9);
  VAR_10 = &VAR_7->tx_ring[VAR_5][VAR_12];
  VAR_14 = VAR_10->die_dt == VAR_2;
  if (VAR_6 && !VAR_14)
   break;

  FUNC_1();
  VAR_13 = FUNC_3(VAR_10->ds_tagl) & VAR_3;

  if (VAR_7->tx_skb[VAR_5][VAR_12 / VAR_9]) {
   FUNC_2(VAR_4->dev.parent, FUNC_4(VAR_10->dptr),
      VAR_13, VAR_0);

   if (VAR_12 % VAR_9 == VAR_9 - 1) {
    VAR_12 /= VAR_9;
    FUNC_0(VAR_7->tx_skb[VAR_5][VAR_12]);
    VAR_7->tx_skb[VAR_5][VAR_12] = ((void*)0);
    if (VAR_14)
     VAR_8->tx_packets++;
   }
   VAR_11++;
  }
  if (VAR_14)
   VAR_8->tx_bytes += VAR_13;
  VAR_10->die_dt = VAR_1;
 }
 return VAR_11;
}
