
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wcn36xx_dxe_ctl {struct wcn36xx_dxe_ctl* next; TYPE_2__* skb; TYPE_1__* desc; } ;
struct wcn36xx_dxe_ch {int lock; struct wcn36xx_dxe_ctl* tail_blk_ctl; struct wcn36xx_dxe_ctl* head_blk_ctl; } ;
struct wcn36xx {int queues_stopped; int hw; int dev; } ;
struct ieee80211_tx_info {int flags; } ;
struct TYPE_5__ {int len; } ;
struct TYPE_4__ {int src_addr_l; int ctrl; } ;


 int VAR_0 ;
 struct ieee80211_tx_info* FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,TYPE_2__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct wcn36xx *VAR_4, struct wcn36xx_dxe_ch *VAR_5)
{
 struct wcn36xx_dxe_ctl *VAR_6;
 struct ieee80211_tx_info *VAR_7;
 unsigned long VAR_8;






 FUNC_5(&VAR_5->lock, VAR_8);
 VAR_6 = VAR_5->tail_blk_ctl;
 do {
  if (FUNC_1(VAR_6->desc->ctrl) & VAR_3)
   break;

  if (VAR_6->skb &&
      FUNC_1(VAR_6->desc->ctrl) & VAR_2) {
   FUNC_2(VAR_4->dev, VAR_6->desc->src_addr_l,
      VAR_6->skb->len, VAR_0);
   VAR_7 = FUNC_0(VAR_6->skb);
   if (!(VAR_7->flags & VAR_1)) {

    FUNC_3(VAR_4->hw, VAR_6->skb);
   }

   if (VAR_4->queues_stopped) {
    VAR_4->queues_stopped = 0;
    FUNC_4(VAR_4->hw);
   }

   VAR_6->skb = ((void*)0);
  }
  VAR_6 = VAR_6->next;
 } while (VAR_6 != VAR_5->head_blk_ctl);

 VAR_5->tail_blk_ctl = VAR_6;
 FUNC_6(&VAR_5->lock, VAR_8);
}
