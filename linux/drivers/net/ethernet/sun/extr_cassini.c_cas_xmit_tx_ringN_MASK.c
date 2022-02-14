
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct sk_buff {scalar_t__ ip_summed; int const csum_offset; int len; scalar_t__ data; } ;
struct net_device {int dummy; } ;
struct cas {int* tx_new; int * tx_lock; scalar_t__ regs; TYPE_2__* pdev; struct sk_buff*** tx_skbs; struct net_device* dev; } ;
typedef int skb_frag_t ;
typedef int dma_addr_t ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int nr_frags; int * frags; } ;


 int FUNC_0 (int ,int const) ;
 int FUNC_1 (struct cas*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct cas*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int,int) ;
 int VAR_8 ;
 int FUNC_5 (struct cas*,unsigned long,int) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (struct cas*,int,int,int ,int,int,int) ;
 int FUNC_9 (int ,void*,int) ;
 int FUNC_10 (struct net_device*,char*) ;
 int FUNC_11 (struct cas*,int ,int ,struct net_device*,char*,int,int,int ,int) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (TYPE_2__*,int ,int ,int,int ) ;
 int FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*,int,int ,int) ;
 int FUNC_17 (int *,int const*,int ,int,int ) ;
 unsigned long FUNC_18 (int const*) ;
 int FUNC_19 (int const*) ;
 int FUNC_20 (int const*) ;
 int FUNC_21 (struct sk_buff*) ;
 TYPE_1__* FUNC_22 (struct sk_buff*) ;
 int FUNC_23 (int *,unsigned long) ;
 int FUNC_24 (int *,unsigned long) ;
 int VAR_9 ;
 int FUNC_25 (struct cas*,int,int) ;
 int FUNC_26 (struct cas*,int,int,int) ;
 scalar_t__ FUNC_27 (int) ;
 int FUNC_28 (scalar_t__) ;
 int FUNC_29 (int,scalar_t__) ;

__attribute__((used)) static inline int FUNC_30(struct cas *VAR_10, int VAR_11,
        struct sk_buff *VAR_12)
{
 struct net_device *VAR_13 = VAR_10->dev;
 int VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 dma_addr_t VAR_19;
 unsigned long VAR_20;
 u64 VAR_21;
 u32 VAR_22;

 FUNC_23(&VAR_10->tx_lock[VAR_11], VAR_20);


 if (FUNC_3(VAR_10, VAR_11) <=
     FUNC_1(VAR_10)*(FUNC_22(VAR_12)->nr_frags + 1)) {
  FUNC_12(VAR_13);
  FUNC_24(&VAR_10->tx_lock[VAR_11], VAR_20);
  FUNC_10(VAR_13, "BUG! Tx Ring full when queue awake!\n");
  return 1;
 }

 VAR_21 = 0;
 if (VAR_12->ip_summed == VAR_0) {
  const u64 VAR_23 = FUNC_15(VAR_12);
  const u64 VAR_24 = VAR_23 + VAR_12->csum_offset;

  VAR_21 = VAR_5 |
   FUNC_0(VAR_6, VAR_23) |
   FUNC_0(VAR_7, VAR_24);
 }

 VAR_14 = VAR_10->tx_new[VAR_11];
 VAR_10->tx_skbs[VAR_11][VAR_14] = VAR_12;

 VAR_15 = FUNC_22(VAR_12)->nr_frags;
 VAR_22 = FUNC_21(VAR_12);
 VAR_19 = FUNC_14(VAR_10->pdev, FUNC_28(VAR_12->data),
          FUNC_13(VAR_12->data), VAR_22,
          VAR_4);

 VAR_18 = VAR_14;
 VAR_17 = FUNC_5(VAR_10, (unsigned long) VAR_12->data, VAR_22);
 if (FUNC_27(VAR_17)) {

  FUNC_8(VAR_10, VAR_11, VAR_14, VAR_19, VAR_22 - VAR_17,
         VAR_21 | VAR_8, 0);
  VAR_14 = FUNC_4(VAR_11, VAR_14);

  FUNC_16(VAR_12, VAR_22 - VAR_17,
         FUNC_25(VAR_10, VAR_11, VAR_14), VAR_17);
  VAR_19 = FUNC_26(VAR_10, VAR_11, VAR_14, VAR_18);
  FUNC_8(VAR_10, VAR_11, VAR_14, VAR_19, VAR_17, VAR_21,
         (VAR_15 == 0));
 } else {
  FUNC_8(VAR_10, VAR_11, VAR_14, VAR_19, VAR_22, VAR_21 |
         VAR_8, (VAR_15 == 0));
 }
 VAR_14 = FUNC_4(VAR_11, VAR_14);

 for (VAR_16 = 0; VAR_16 < VAR_15; VAR_16++) {
  const skb_frag_t *VAR_25 = &FUNC_22(VAR_12)->frags[VAR_16];

  VAR_22 = FUNC_20(VAR_25);
  VAR_19 = FUNC_17(&VAR_10->pdev->dev, VAR_25, 0, VAR_22,
        VAR_1);

  VAR_17 = FUNC_5(VAR_10, FUNC_18(VAR_25), VAR_22);
  if (FUNC_27(VAR_17)) {
   void *VAR_26;


   FUNC_8(VAR_10, VAR_11, VAR_14, VAR_19, VAR_22 - VAR_17,
          VAR_21, 0);
   VAR_14 = FUNC_4(VAR_11, VAR_14);

   VAR_26 = FUNC_6(FUNC_19(VAR_25));
   FUNC_9(FUNC_25(VAR_10, VAR_11, VAR_14),
          VAR_26 + FUNC_18(VAR_25) + VAR_22 - VAR_17,
          VAR_17);
   FUNC_7(VAR_26);
   VAR_19 = FUNC_26(VAR_10, VAR_11, VAR_14, VAR_18);
   VAR_22 = VAR_17;
  }

  FUNC_8(VAR_10, VAR_11, VAR_14, VAR_19, VAR_22, VAR_21,
         (VAR_16 + 1 == VAR_15));
  VAR_14 = FUNC_4(VAR_11, VAR_14);
 }

 VAR_10->tx_new[VAR_11] = VAR_14;
 if (FUNC_3(VAR_10, VAR_11) <= FUNC_1(VAR_10)*(VAR_3 + 1))
  FUNC_12(VAR_13);

 FUNC_11(VAR_10, VAR_9, VAR_2, VAR_13,
       "tx[%d] queued, slot %d, skblen %d, avail %d\n",
       VAR_11, VAR_14, VAR_12->len, FUNC_3(VAR_10, VAR_11));
 FUNC_29(VAR_14, VAR_10->regs + FUNC_2(VAR_11));
 FUNC_24(&VAR_10->tx_lock[VAR_11], VAR_20);
 return 0;
}
