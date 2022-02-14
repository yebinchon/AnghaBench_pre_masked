
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ len; } ;
struct TYPE_5__ {int tx_packets; int tx_bytes; } ;
struct net_device {TYPE_2__ stats; } ;
struct happy_meal_txd {int tx_flags; int tx_addr; } ;
struct happy_meal {int tx_old; int tx_new; int dma_dev; struct sk_buff** tx_skbs; struct net_device* dev; TYPE_1__* happy_block; } ;
struct TYPE_6__ {int nr_frags; } ;
struct TYPE_4__ {struct happy_meal_txd* happy_meal_txd; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct happy_meal*) ;
 int VAR_4 ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ,int,int,int ) ;
 int FUNC_5 (int ,int,int,int ) ;
 int FUNC_6 (struct happy_meal*,int *) ;
 scalar_t__ FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 TYPE_3__* FUNC_9 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_10(struct happy_meal *VAR_5)
{
 struct happy_meal_txd *VAR_6 = &VAR_5->happy_block->happy_meal_txd[0];
 struct happy_meal_txd *VAR_7;
 struct net_device *VAR_8 = VAR_5->dev;
 int VAR_9;

 VAR_9 = VAR_5->tx_old;
 FUNC_1(("TX<"));
 while (VAR_9 != VAR_5->tx_new) {
  struct sk_buff *VAR_10;
  u32 VAR_11, VAR_12, VAR_13;
  int VAR_14;

  FUNC_1(("[%d]", VAR_9));
  VAR_7 = &VAR_6[VAR_9];
  VAR_11 = FUNC_6(VAR_5, &VAR_7->tx_flags);
  if (VAR_11 & VAR_2)
   break;
  VAR_10 = VAR_5->tx_skbs[VAR_9];
  if (FUNC_9(VAR_10)->nr_frags) {
   int VAR_15;

   VAR_15 = VAR_9 + FUNC_9(VAR_10)->nr_frags;
   VAR_15 &= (VAR_4 - 1);
   VAR_11 = FUNC_6(VAR_5, &VAR_6[VAR_15].tx_flags);
   if (VAR_11 & VAR_2)
    break;
  }
  VAR_5->tx_skbs[VAR_9] = ((void*)0);
  VAR_8->stats.tx_bytes += VAR_10->len;

  for (VAR_14 = 0; VAR_14 <= FUNC_9(VAR_10)->nr_frags; VAR_14++) {
   VAR_12 = FUNC_6(VAR_5, &VAR_7->tx_addr);
   VAR_13 = FUNC_6(VAR_5, &VAR_7->tx_flags);

   VAR_13 &= VAR_3;
   if (!VAR_14)
    FUNC_5(VAR_5->dma_dev, VAR_12, VAR_13, VAR_0);
   else
    FUNC_4(VAR_5->dma_dev, VAR_12, VAR_13, VAR_0);

   VAR_9 = FUNC_0(VAR_9);
   VAR_7 = &VAR_6[VAR_9];
  }

  FUNC_3(VAR_10);
  VAR_8->stats.tx_packets++;
 }
 VAR_5->tx_old = VAR_9;
 FUNC_1((">"));

 if (FUNC_7(VAR_8) &&
     FUNC_2(VAR_5) > (VAR_1 + 1))
  FUNC_8(VAR_8);
}
