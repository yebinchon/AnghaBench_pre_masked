
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ ip_summed; int len; int data; } ;
struct net_device {int dummy; } ;
struct mtk_tx_ring {int dma_size; int free_count; struct mtk_tx_dma* next_free; struct mtk_tx_dma* last_free; } ;
struct mtk_tx_dma {int txd1; int txd2; int txd3; int txd4; } ;
struct mtk_tx_buf {struct sk_buff* skb; int flags; } ;
struct mtk_mac {int id; struct mtk_eth* hw; } ;
struct mtk_eth {TYPE_1__* soc; int dev; } ;
typedef int skb_frag_t ;
typedef int dma_addr_t ;
struct TYPE_4__ {unsigned int nr_frags; int * frags; } ;
struct TYPE_3__ {int caps; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (unsigned int) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (int ,int ,unsigned int,int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (struct mtk_tx_buf*,int ,int) ;
 unsigned int FUNC_8 (int,int ) ;
 struct mtk_tx_buf* FUNC_9 (struct mtk_tx_ring*,struct mtk_tx_dma*) ;
 void* FUNC_10 (struct mtk_tx_ring*,int) ;
 int FUNC_11 (struct mtk_eth*,struct mtk_tx_buf*) ;
 int FUNC_12 (struct mtk_eth*,int,int ) ;
 int FUNC_13 (struct net_device*,int ) ;
 struct mtk_mac* FUNC_14 (struct net_device*) ;
 int FUNC_15 (struct net_device*,int ) ;
 int FUNC_16 () ;
 scalar_t__ FUNC_17 (int ) ;
 struct mtk_tx_dma* FUNC_18 (struct mtk_tx_ring*,struct mtk_tx_dma*) ;
 int FUNC_19 (struct mtk_eth*,struct mtk_tx_buf*,struct mtk_tx_dma*,int,unsigned int,int ) ;
 int FUNC_20 (int ,int *,unsigned int,unsigned int,int ) ;
 int FUNC_21 (int *) ;
 unsigned int FUNC_22 (struct sk_buff*) ;
 TYPE_2__* FUNC_23 (struct sk_buff*) ;
 int FUNC_24 (struct sk_buff*) ;
 int FUNC_25 (struct sk_buff*) ;
 scalar_t__ FUNC_26 (struct sk_buff*) ;
 int FUNC_27 (struct mtk_tx_ring*,struct mtk_tx_dma*) ;
 scalar_t__ FUNC_28 (int ) ;
 int FUNC_29 () ;

__attribute__((used)) static int FUNC_30(struct sk_buff *VAR_21, struct net_device *VAR_22,
        int VAR_23, struct mtk_tx_ring *VAR_24, bool VAR_25)
{
 struct mtk_mac *VAR_26 = FUNC_14(VAR_22);
 struct mtk_eth *VAR_27 = VAR_26->hw;
 struct mtk_tx_dma *VAR_28, *VAR_29;
 struct mtk_tx_dma *VAR_30, *VAR_31;
 struct mtk_tx_buf *VAR_32, *VAR_33;
 dma_addr_t VAR_34;
 unsigned int VAR_35;
 int VAR_36, VAR_37 = 1;
 u32 VAR_38 = 0, VAR_39;
 int VAR_40 = 0;

 VAR_28 = VAR_24->next_free;
 VAR_30 = FUNC_18(VAR_24, VAR_28);
 if (VAR_28 == VAR_24->last_free)
  return -VAR_2;


 VAR_39 = (VAR_26->id + 1) << VAR_14;
 VAR_38 |= VAR_39;

 VAR_32 = FUNC_9(VAR_24, VAR_28);
 FUNC_7(VAR_32, 0, sizeof(*VAR_32));

 if (VAR_25)
  VAR_38 |= VAR_20;


 if (VAR_21->ip_summed == VAR_0)
  VAR_38 |= VAR_12;


 if (FUNC_26(VAR_21))
  VAR_38 |= VAR_15 | FUNC_25(VAR_21);

 VAR_34 = FUNC_5(VAR_27->dev, VAR_21->data,
         FUNC_22(VAR_21), VAR_1);
 if (FUNC_28(FUNC_6(VAR_27->dev, VAR_34)))
  return -VAR_2;

 FUNC_3(VAR_28->txd1, VAR_34);
 VAR_32->flags |= VAR_11;
 VAR_32->flags |= (!VAR_26->id) ? VAR_8 :
     VAR_9;
 FUNC_19(VAR_27, VAR_32, VAR_30, VAR_34, FUNC_22(VAR_21),
       VAR_40++);


 VAR_29 = VAR_28;
 VAR_31 = FUNC_18(VAR_24, VAR_29);
 VAR_35 = FUNC_23(VAR_21)->nr_frags;

 for (VAR_36 = 0; VAR_36 < VAR_35; VAR_36++) {
  skb_frag_t *VAR_41 = &FUNC_23(VAR_21)->frags[VAR_36];
  unsigned int VAR_42 = 0;
  int VAR_43 = FUNC_21(VAR_41);

  while (VAR_43) {
   bool VAR_44 = 0;
   unsigned int VAR_45;
   bool VAR_46 = 1;

   if (FUNC_0(VAR_27->soc->caps, VAR_5) ||
       (VAR_36 & 0x1)) {
    VAR_29 = FUNC_10(VAR_24, VAR_29->txd2);
    VAR_31 = FUNC_18(VAR_24, VAR_29);
    if (VAR_29 == VAR_24->last_free)
     goto err_dma;

    VAR_37++;
   } else {
    VAR_46 = 0;
   }


   VAR_45 = FUNC_8(VAR_43, VAR_7);
   VAR_34 = FUNC_20(VAR_27->dev, VAR_41, VAR_42,
             VAR_45,
             VAR_1);
   if (FUNC_28(FUNC_6(VAR_27->dev, VAR_34)))
    goto err_dma;

   if (VAR_36 == VAR_35 - 1 &&
       (VAR_43 - VAR_45) == 0)
    VAR_44 = 1;

   FUNC_3(VAR_29->txd1, VAR_34);
   FUNC_3(VAR_29->txd3, (VAR_19 |
            FUNC_2(VAR_45) |
            VAR_44 * VAR_16));
   FUNC_3(VAR_29->txd4, VAR_39);

   VAR_33 = FUNC_9(VAR_24, VAR_29);
   if (VAR_46)
    FUNC_7(VAR_33, 0, sizeof(*VAR_33));
   VAR_33->skb = (struct sk_buff *)VAR_4;
   VAR_33->flags |= VAR_10;
   VAR_33->flags |= (!VAR_26->id) ? VAR_8 :
      VAR_9;

   FUNC_19(VAR_27, VAR_33, VAR_31, VAR_34,
         VAR_45, VAR_40++);

   VAR_43 -= VAR_45;
   VAR_42 += VAR_45;
  }
 }


 VAR_32->skb = VAR_21;

 FUNC_3(VAR_28->txd4, VAR_38);
 FUNC_3(VAR_28->txd3, (VAR_19 | FUNC_2(FUNC_22(VAR_21)) |
    (!VAR_35 * VAR_16)));
 if (!FUNC_0(VAR_27->soc->caps, VAR_5)) {
  if (VAR_40 & 0x1)
   VAR_31->txd2 |= VAR_16;
  else
   VAR_31->txd2 |= VAR_17;
 }

 FUNC_15(VAR_22, VAR_21->len);
 FUNC_24(VAR_21);

 VAR_24->next_free = FUNC_10(VAR_24, VAR_29->txd2);
 FUNC_4(VAR_37, &VAR_24->free_count);




 FUNC_29();

 if (FUNC_0(VAR_27->soc->caps, VAR_5)) {
  if (FUNC_17(FUNC_13(VAR_22, 0)) ||
      !FUNC_16())
   FUNC_12(VAR_27, VAR_29->txd2, VAR_6);
 } else {
  int VAR_47 = FUNC_1(FUNC_27(VAR_24, VAR_29),
          VAR_24->dma_size);
  FUNC_12(VAR_27, VAR_47, VAR_3);
 }

 return 0;

err_dma:
 do {
  VAR_33 = FUNC_9(VAR_24, VAR_28);


  FUNC_11(VAR_27, VAR_33);

  VAR_28->txd3 = VAR_16 | VAR_18;
  if (!FUNC_0(VAR_27->soc->caps, VAR_5))
   VAR_30->txd2 = VAR_13;

  VAR_28 = FUNC_10(VAR_24, VAR_28->txd2);
  VAR_30 = FUNC_18(VAR_24, VAR_28);
 } while (VAR_28 != VAR_29);

 return -VAR_2;
}
