
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcn36xx_vif {scalar_t__ pw_state; } ;
struct wcn36xx_tx_bd {int dummy; } ;
struct wcn36xx_dxe_desc {int fr_len; int ctrl; int dst_addr_l; int src_addr_l; } ;
struct wcn36xx_dxe_ctl {struct wcn36xx_dxe_ctl* next; struct sk_buff* skb; scalar_t__ bd_cpu_addr; int bd_phy_addr; struct wcn36xx_dxe_desc* desc; } ;
struct wcn36xx_dxe_ch {int lock; int def_ctrl; int reg_ctrl; int ctrl_bd; int ctrl_skb; struct wcn36xx_dxe_ctl* head_blk_ctl; int dxe_wq; } ;
struct wcn36xx {int queues_stopped; int tx_rings_empty_state; int dev; int hw; struct wcn36xx_dxe_ch dxe_tx_h_ch; struct wcn36xx_dxe_ch dxe_tx_l_ch; } ;
struct sk_buff {int len; scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,scalar_t__,int,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,struct wcn36xx_tx_bd*,int) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ,char*,char*,int) ;
 int FUNC_11 (struct wcn36xx*,int ,int ) ;
 int FUNC_12 (char*) ;
 int FUNC_13 () ;

int FUNC_14(struct wcn36xx *VAR_8,
    struct wcn36xx_vif *VAR_9,
    struct wcn36xx_tx_bd *VAR_10,
    struct sk_buff *VAR_11,
    bool VAR_12)
{
 struct wcn36xx_dxe_desc *VAR_13, *VAR_14;
 struct wcn36xx_dxe_ctl *VAR_15, *VAR_16;
 struct wcn36xx_dxe_ch *VAR_17 = ((void*)0);
 unsigned long VAR_18;
 int VAR_19;

 VAR_17 = VAR_12 ? &VAR_8->dxe_tx_l_ch : &VAR_8->dxe_tx_h_ch;

 FUNC_6(&VAR_17->lock, VAR_18);
 VAR_15 = VAR_17->head_blk_ctl;
 VAR_16 = VAR_15->next;






 if (((void*)0) != VAR_16->skb) {
  FUNC_3(VAR_8->hw);
  VAR_8->queues_stopped = 1;
  FUNC_7(&VAR_17->lock, VAR_18);
  return -VAR_1;
 }

 if (FUNC_8(VAR_16->bd_cpu_addr)) {
  FUNC_12("bd_cpu_addr cannot be NULL for skb DXE\n");
  VAR_19 = -VAR_2;
  goto unlock;
 }

 VAR_13 = VAR_15->desc;
 VAR_14 = VAR_16->desc;

 VAR_15->skb = ((void*)0);


 FUNC_4(VAR_15->bd_cpu_addr, VAR_10, sizeof(*VAR_10));


 VAR_13->src_addr_l = VAR_15->bd_phy_addr;
 VAR_13->dst_addr_l = VAR_17->dxe_wq;
 VAR_13->fr_len = sizeof(struct wcn36xx_tx_bd);

 FUNC_9(VAR_5, "DXE TX\n");

 FUNC_10(VAR_6, "DESC1 >>> ",
    (char *)VAR_13, sizeof(*VAR_13));
 FUNC_10(VAR_6,
    "BD   >>> ", (char *)VAR_15->bd_cpu_addr,
    sizeof(struct wcn36xx_tx_bd));

 VAR_14->src_addr_l = FUNC_1(VAR_8->dev,
           VAR_11->data,
           VAR_11->len,
           VAR_0);
 if (FUNC_2(VAR_8->dev, VAR_14->src_addr_l)) {
  FUNC_0(VAR_8->dev, "unable to DMA map src_addr_l\n");
  VAR_19 = -VAR_3;
  goto unlock;
 }

 VAR_16->skb = VAR_11;
 VAR_14->dst_addr_l = VAR_17->dxe_wq;
 VAR_14->fr_len = VAR_16->skb->len;

 FUNC_10(VAR_6, "DESC2 >>> ",
    (char *)VAR_14, sizeof(*VAR_14));
 FUNC_10(VAR_6, "SKB   >>> ",
    (char *)VAR_16->skb->data, VAR_16->skb->len);


  VAR_17->head_blk_ctl = VAR_16->next;


 FUNC_13();
 VAR_14->ctrl = VAR_17->ctrl_skb;
 FUNC_13();
 VAR_13->ctrl = VAR_17->ctrl_bd;






 if (VAR_12 && VAR_9->pw_state == VAR_4) {
  FUNC_5(VAR_8->tx_rings_empty_state,
         VAR_7,
         VAR_7);
 } else {



  FUNC_11(VAR_8,
   VAR_17->reg_ctrl, VAR_17->def_ctrl);
 }

 VAR_19 = 0;
unlock:
 FUNC_7(&VAR_17->lock, VAR_18);
 return VAR_19;
}
