
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ len; scalar_t__ ip_summed; int data; } ;
struct TYPE_3__ {int tx_dropped; } ;
struct net_device {TYPE_1__ stats; } ;
struct ftgmac100_txdes {void* txdes0; void* txdes3; void* txdes1; } ;
struct ftgmac100 {unsigned int tx_pointer; int txdes0_edotr_mask; struct ftgmac100_txdes* txdes; scalar_t__ base; struct sk_buff** tx_skbs; int dev; } ;
typedef int skb_frag_t ;
typedef int netdev_tx_t ;
typedef int dma_addr_t ;
struct TYPE_4__ {unsigned int nr_frags; int * frags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned int) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ,int ,unsigned int,int ) ;
 scalar_t__ FUNC_4 (int ,int) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct ftgmac100*,unsigned int) ;
 int FUNC_8 (struct ftgmac100*,unsigned int,struct sk_buff*,struct ftgmac100_txdes*,int) ;
 unsigned int FUNC_9 (struct ftgmac100*,unsigned int) ;
 int FUNC_10 (struct sk_buff*,int*) ;
 scalar_t__ FUNC_11 (struct ftgmac100*) ;
 int FUNC_12 (int,scalar_t__) ;
 int FUNC_13 (void*) ;
 scalar_t__ FUNC_14 () ;
 int FUNC_15 (struct net_device*,char*) ;
 int FUNC_16 (struct net_device*,char*) ;
 struct ftgmac100* FUNC_17 (struct net_device*) ;
 int FUNC_18 (struct net_device*) ;
 int FUNC_19 (struct net_device*) ;
 int FUNC_20 (int ,int *,int ,unsigned int,int ) ;
 unsigned int FUNC_21 (int *) ;
 unsigned int FUNC_22 (struct sk_buff*) ;
 TYPE_2__* FUNC_23 (struct sk_buff*) ;
 int FUNC_24 (struct sk_buff*) ;
 scalar_t__ FUNC_25 (struct sk_buff*) ;
 int FUNC_26 () ;
 scalar_t__ FUNC_27 (int) ;

__attribute__((used)) static netdev_tx_t FUNC_28(struct sk_buff *VAR_10,
          struct net_device *VAR_11)
{
 struct ftgmac100 *VAR_12 = FUNC_17(VAR_11);
 struct ftgmac100_txdes *VAR_13, *VAR_14;
 unsigned int VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
 u32 VAR_20, VAR_21, VAR_22;
 dma_addr_t VAR_23;


 if (FUNC_6(VAR_10)) {
  VAR_11->stats.tx_dropped++;
  return VAR_8;
 }


 if (FUNC_27(VAR_10->len > VAR_7)) {
  if (FUNC_14())
   FUNC_15(VAR_11, "tx packet too big\n");
  goto drop;
 }




 VAR_16 = FUNC_23(VAR_10)->nr_frags;


 VAR_22 = 0;
 if (VAR_10->ip_summed == VAR_0 &&
     !FUNC_10(VAR_10, &VAR_22))
  goto drop;


 if (FUNC_25(VAR_10)) {
  VAR_22 |= VAR_6;
  VAR_22 |= FUNC_24(VAR_10) & 0xffff;
 }


 VAR_17 = FUNC_22(VAR_10);


 VAR_23 = FUNC_3(VAR_12->dev, VAR_10->data, VAR_17, VAR_1);
 if (FUNC_4(VAR_12->dev, VAR_23)) {
  if (FUNC_14())
   FUNC_16(VAR_11, "map tx packet head failed\n");
  goto drop;
 }


 VAR_15 = VAR_12->tx_pointer;
 VAR_13 = VAR_14 = &VAR_12->txdes[VAR_15];




 VAR_12->tx_skbs[VAR_15] = VAR_10;
 VAR_20 = FUNC_7(VAR_12, VAR_15);
 VAR_20 |= VAR_5;
 VAR_20 |= FUNC_0(VAR_17);
 VAR_20 |= VAR_3;
 if (VAR_16 == 0)
  VAR_20 |= VAR_4;
 VAR_13->txdes3 = FUNC_1(VAR_23);
 VAR_13->txdes1 = FUNC_1(VAR_22);


 VAR_15 = FUNC_9(VAR_12, VAR_15);


 for (VAR_18 = 0; VAR_18 < VAR_16; VAR_18++) {
  skb_frag_t *VAR_24 = &FUNC_23(VAR_10)->frags[VAR_18];

  VAR_17 = FUNC_21(VAR_24);


  VAR_23 = FUNC_20(VAR_12->dev, VAR_24, 0, VAR_17,
           VAR_1);
  if (FUNC_4(VAR_12->dev, VAR_23))
   goto dma_err;


  VAR_12->tx_skbs[VAR_15] = VAR_10;
  VAR_13 = &VAR_12->txdes[VAR_15];
  VAR_21 = FUNC_7(VAR_12, VAR_15);
  VAR_21 |= VAR_5;
  VAR_21 |= FUNC_0(VAR_17);
  if (VAR_18 == (VAR_16 - 1))
   VAR_21 |= VAR_4;
  VAR_13->txdes0 = FUNC_1(VAR_21);
  VAR_13->txdes1 = 0;
  VAR_13->txdes3 = FUNC_1(VAR_23);


  VAR_15 = FUNC_9(VAR_12, VAR_15);
 }




 FUNC_5();
 VAR_14->txdes0 = FUNC_1(VAR_20);


 VAR_12->tx_pointer = VAR_15;





 if (FUNC_27(FUNC_11(VAR_12) < VAR_9)) {
  FUNC_18(VAR_11);

  FUNC_26();
  if (FUNC_11(VAR_12) >= VAR_9)
   FUNC_19(VAR_11);
 }


 FUNC_12(1, VAR_12->base + VAR_2);

 return VAR_8;

 dma_err:
 if (FUNC_14())
  FUNC_16(VAR_11, "map tx fragment failed\n");


 VAR_15 = VAR_12->tx_pointer;
 FUNC_8(VAR_12, VAR_15, VAR_10, VAR_14, VAR_20);
 VAR_14->txdes0 = FUNC_1(VAR_20 & VAR_12->txdes0_edotr_mask);


 for (VAR_19 = 0; VAR_19 < VAR_18; VAR_19++) {
  VAR_15 = FUNC_9(VAR_12, VAR_15);
  VAR_13 = &VAR_12->txdes[VAR_15];
  VAR_21 = FUNC_13(VAR_13->txdes0);
  FUNC_8(VAR_12, VAR_15, VAR_10, VAR_13, VAR_21);
  VAR_13->txdes0 = FUNC_1(VAR_21 & VAR_12->txdes0_edotr_mask);
 }





 drop:

 FUNC_2(VAR_10);
 VAR_11->stats.tx_dropped++;

 return VAR_8;
}
