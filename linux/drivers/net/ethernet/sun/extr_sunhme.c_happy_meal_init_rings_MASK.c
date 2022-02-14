
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int data; } ;
struct hmeal_init_block {int * happy_meal_txd; int * happy_meal_rxd; } ;
struct happy_meal {int dma_dev; struct sk_buff** rx_skbs; scalar_t__ tx_old; scalar_t__ tx_new; scalar_t__ rx_old; scalar_t__ rx_new; struct hmeal_init_block* happy_block; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,int ,int,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 struct sk_buff* FUNC_4 (int,int ) ;
 int FUNC_5 (struct happy_meal*) ;
 int FUNC_6 (struct happy_meal*,int *,int,int ) ;
 int FUNC_7 (struct happy_meal*,int *,int ,int ) ;
 int FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_10(struct happy_meal *VAR_8)
{
 struct hmeal_init_block *VAR_9 = VAR_8->happy_block;
 int VAR_10;

 FUNC_0(("happy_meal_init_rings: counters to zero, "));
 VAR_8->rx_new = VAR_8->rx_old = VAR_8->tx_new = VAR_8->tx_old = 0;


 FUNC_0(("clean, "));
 FUNC_5(VAR_8);


 FUNC_0(("init rxring, "));
 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
  struct sk_buff *VAR_11;
  u32 VAR_12;

  VAR_11 = FUNC_4(VAR_4, VAR_2);
  if (!VAR_11) {
   FUNC_6(VAR_8, &VAR_9->happy_meal_rxd[VAR_10], 0, 0);
   continue;
  }
  VAR_8->rx_skbs[VAR_10] = VAR_11;


  FUNC_8(VAR_11, (VAR_1 + VAR_5 + 4));
  VAR_12 = FUNC_2(VAR_8->dma_dev, VAR_11->data, VAR_4,
      VAR_0);
  if (FUNC_3(VAR_8->dma_dev, VAR_12)) {
   FUNC_1(VAR_11);
   FUNC_6(VAR_8, &VAR_9->happy_meal_rxd[VAR_10], 0, 0);
   continue;
  }
  FUNC_6(VAR_8, &VAR_9->happy_meal_rxd[VAR_10],
         (VAR_3 | ((VAR_4 - VAR_5) << 16)),
         VAR_12);
  FUNC_9(VAR_11, VAR_5);
 }

 FUNC_0(("init txring, "));
 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++)
  FUNC_7(VAR_8, &VAR_9->happy_meal_txd[VAR_10], 0, 0);

 FUNC_0(("done\n"));
}
