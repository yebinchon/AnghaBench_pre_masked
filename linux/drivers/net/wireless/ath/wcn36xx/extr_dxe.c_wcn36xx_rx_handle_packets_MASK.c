
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wcn36xx_dxe_desc {int ctrl; int dst_addr_l; } ;
struct wcn36xx_dxe_ctl {struct wcn36xx_dxe_desc* desc; struct wcn36xx_dxe_ctl* next; struct sk_buff* skb; } ;
struct wcn36xx_dxe_ch {int lock; struct wcn36xx_dxe_ctl* head_blk_ctl; } ;
struct wcn36xx {int dev; } ;
struct sk_buff {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,struct wcn36xx_dxe_ctl*,int ) ;
 int FUNC_5 (struct wcn36xx*,int,int*) ;
 int FUNC_6 (struct wcn36xx*,int ,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct wcn36xx*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_9(struct wcn36xx *VAR_12,
         struct wcn36xx_dxe_ch *VAR_13,
         u32 VAR_14,
         u32 VAR_15,
         u32 VAR_16,
         u32 VAR_17)
{
 struct wcn36xx_dxe_desc *VAR_18;
 struct wcn36xx_dxe_ctl *VAR_19;
 dma_addr_t VAR_20;
 struct sk_buff *VAR_21;
 u32 VAR_22;
 int VAR_23;

 FUNC_5(VAR_12, VAR_17, &VAR_22);
 FUNC_6(VAR_12, VAR_5, VAR_16);

 if (VAR_22 & VAR_4) {
  FUNC_6(VAR_12,
        VAR_8,
        VAR_16);

  FUNC_7("DXE IRQ reported error on RX channel\n");
 }

 if (VAR_22 & VAR_2)
  FUNC_6(VAR_12,
        VAR_6,
        VAR_16);

 if (VAR_22 & VAR_3)
  FUNC_6(VAR_12,
        VAR_7,
        VAR_16);

 if (!(VAR_22 & (VAR_2 |
       VAR_3)))
  return 0;

 FUNC_2(&VAR_13->lock);

 VAR_19 = VAR_13->head_blk_ctl;
 VAR_18 = VAR_19->desc;

 while (!(FUNC_0(VAR_18->ctrl) & VAR_11)) {
  VAR_21 = VAR_19->skb;
  VAR_20 = VAR_18->dst_addr_l;
  VAR_23 = FUNC_4(VAR_12->dev, VAR_19, VAR_1);
  if (0 == VAR_23) {



   FUNC_1(VAR_12->dev, VAR_20, VAR_10,
     VAR_0);
   FUNC_8(VAR_12, VAR_21);
  }

  VAR_18->ctrl = VAR_14;
  VAR_19 = VAR_19->next;
  VAR_18 = VAR_19->desc;
 }
 FUNC_6(VAR_12, VAR_9, VAR_15);

 VAR_13->head_blk_ctl = VAR_19;

 FUNC_3(&VAR_13->lock);

 return 0;
}
