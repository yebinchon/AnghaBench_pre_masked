
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device_stats {int tx_dropped; } ;
struct net_device {struct net_device_stats stats; } ;
struct mtk_tx_ring {int thresh; int free_count; } ;
struct mtk_mac {struct mtk_eth* hw; } ;
struct mtk_eth {int page_lock; int state; struct mtk_tx_ring tx_ring; } ;
struct TYPE_4__ {int gso_type; int gso_size; } ;
struct TYPE_3__ {int check; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct mtk_eth*) ;
 scalar_t__ FUNC_5 (struct sk_buff*,struct net_device*,int,struct mtk_tx_ring*,int) ;
 struct mtk_mac* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct mtk_eth*,int ,struct net_device*,char*) ;
 int FUNC_8 (struct mtk_eth*,int ,struct net_device*,char*) ;
 scalar_t__ FUNC_9 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_10 (struct sk_buff*) ;
 TYPE_2__* FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 TYPE_1__* FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (int ,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_16 (int) ;

__attribute__((used)) static int FUNC_17(struct sk_buff *VAR_7, struct net_device *VAR_8)
{
 struct mtk_mac *VAR_9 = FUNC_6(VAR_8);
 struct mtk_eth *VAR_10 = VAR_9->hw;
 struct mtk_tx_ring *VAR_11 = &VAR_10->tx_ring;
 struct net_device_stats *VAR_12 = &VAR_8->stats;
 bool VAR_13 = 0;
 int VAR_14;





 FUNC_12(&VAR_10->page_lock);

 if (FUNC_16(FUNC_15(VAR_0, &VAR_10->state)))
  goto drop;

 VAR_14 = FUNC_3(VAR_7);
 if (FUNC_16(FUNC_0(&VAR_11->free_count) <= VAR_14)) {
  FUNC_4(VAR_10);
  FUNC_7(VAR_10, VAR_6, VAR_8,
     "Tx Ring full when queue awake!\n");
  FUNC_13(&VAR_10->page_lock);
  return VAR_1;
 }


 if (FUNC_10(VAR_7)) {
  if (FUNC_9(VAR_7, 0)) {
   FUNC_8(VAR_10, VAR_5, VAR_8,
       "GSO expand head fail.\n");
   goto drop;
  }

  if (FUNC_11(VAR_7)->gso_type &
    (VAR_3 | VAR_4)) {
   VAR_13 = 1;
   FUNC_14(VAR_7)->check = FUNC_2(FUNC_11(VAR_7)->gso_size);
  }
 }

 if (FUNC_5(VAR_7, VAR_8, VAR_14, VAR_11, VAR_13) < 0)
  goto drop;

 if (FUNC_16(FUNC_0(&VAR_11->free_count) <= VAR_11->thresh))
  FUNC_4(VAR_10);

 FUNC_13(&VAR_10->page_lock);

 return VAR_2;

drop:
 FUNC_13(&VAR_10->page_lock);
 VAR_12->tx_dropped++;
 FUNC_1(VAR_7);
 return VAR_2;
}
