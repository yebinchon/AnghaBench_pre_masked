
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {TYPE_2__* rates; } ;
struct ieee80211_tx_info {TYPE_3__ status; int flags; } ;
struct TYPE_14__ {int last_tx; } ;
struct b43legacy_wldev {TYPE_9__* wl; TYPE_4__ stats; } ;
struct b43legacy_txstatus {scalar_t__ rts_count; int frame_count; scalar_t__ acked; int cookie; } ;
struct b43legacy_txhdr_fw3 {int dummy; } ;
struct b43legacy_dmaring {int current_slot; int used_slots; int nr_slots; int stopped; size_t queue_prio; int index; int tx; } ;
struct b43legacy_dmadesc_meta {scalar_t__ is_last_fragment; TYPE_7__* skb; int dmaaddr; } ;
struct TYPE_17__ {int tx_work; TYPE_5__* hw; scalar_t__* tx_queue_stopped; } ;
struct TYPE_16__ {int len; } ;
struct TYPE_11__ {scalar_t__ short_frame_max_tx_count; } ;
struct TYPE_15__ {TYPE_1__ conf; } ;
struct TYPE_12__ {int count; int idx; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 struct ieee80211_tx_info* FUNC_2 (TYPE_7__*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (struct b43legacy_wldev*,int ) ;
 int FUNC_4 (TYPE_9__*,char*,int ,...) ;
 scalar_t__ FUNC_5 (struct b43legacy_dmaring*) ;
 int FUNC_6 (TYPE_5__*,int *) ;
 int FUNC_7 (struct ieee80211_tx_info*) ;
 int FUNC_8 (TYPE_5__*,TYPE_7__*) ;
 int FUNC_9 (TYPE_5__*,size_t) ;
 int VAR_3 ;
 int FUNC_10 (struct b43legacy_dmaring*,int) ;
 int FUNC_11 (struct b43legacy_dmaring*,int,struct b43legacy_dmadesc_meta**) ;
 struct b43legacy_dmaring* FUNC_12 (struct b43legacy_wldev*,int ,int*) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (struct b43legacy_dmaring*,int ,int,int) ;

void FUNC_15(struct b43legacy_wldev *VAR_4,
     const struct b43legacy_txstatus *VAR_5)
{
 struct b43legacy_dmaring *VAR_6;
 struct b43legacy_dmadesc_meta *VAR_7;
 int VAR_8;
 int VAR_9;
 int VAR_10;

 VAR_6 = FUNC_12(VAR_4, VAR_5->cookie, &VAR_9);
 if (FUNC_13(!VAR_6))
  return;
 FUNC_0(!VAR_6->tx);




 VAR_10 = VAR_6->current_slot - VAR_6->used_slots + 1;
 if (VAR_10 < 0)
  VAR_10 = VAR_6->nr_slots + VAR_10;
 if (FUNC_13(VAR_9 != VAR_10)) {



  FUNC_4(VAR_4->wl, "Out of order TX status report on DMA "
        "ring %d. Expected %d, but got %d\n",
        VAR_6->index, VAR_10, VAR_9);
  return;
 }

 while (1) {
  FUNC_0(!(VAR_9 >= 0 && VAR_9 < VAR_6->nr_slots));
  FUNC_11(VAR_6, VAR_9, &VAR_7);

  if (VAR_7->skb)
   FUNC_14(VAR_6, VAR_7->dmaaddr,
      VAR_7->skb->len, 1);
  else
   FUNC_14(VAR_6, VAR_7->dmaaddr,
      sizeof(struct b43legacy_txhdr_fw3),
      1);

  if (VAR_7->is_last_fragment) {
   struct ieee80211_tx_info *VAR_11;
   FUNC_1(!VAR_7->skb);
   VAR_11 = FUNC_2(VAR_7->skb);




   VAR_8 = VAR_11->status.rates[0].count;
   FUNC_7(VAR_11);

   if (VAR_5->acked)
    VAR_11->flags |= VAR_1;

   if (VAR_5->rts_count > VAR_4->wl->hw->conf.short_frame_max_tx_count) {







    VAR_11->status.rates[0].count = 0;
    VAR_11->status.rates[1].count = VAR_5->frame_count;
   } else {
    if (VAR_5->frame_count > VAR_8) {
     VAR_11->status.rates[0].count = VAR_8;
     VAR_11->status.rates[1].count = VAR_5->frame_count -
       VAR_8;

    } else {
     VAR_11->status.rates[0].count = VAR_5->frame_count;
     VAR_11->status.rates[1].idx = -1;
    }
   }





   FUNC_8(VAR_4->wl->hw, VAR_7->skb);

   VAR_7->skb = ((void*)0);
  } else {



   FUNC_0(VAR_7->skb != ((void*)0));
  }


  VAR_6->used_slots--;

  if (VAR_7->is_last_fragment)
   break;
  VAR_9 = FUNC_10(VAR_6, VAR_9);
 }
 VAR_4->stats.last_tx = VAR_3;
 if (VAR_6->stopped) {
  FUNC_0(FUNC_5(VAR_6) < VAR_2);
  VAR_6->stopped = 0;
 }

 if (VAR_4->wl->tx_queue_stopped[VAR_6->queue_prio]) {
  VAR_4->wl->tx_queue_stopped[VAR_6->queue_prio] = 0;
 } else {


  FUNC_9(VAR_4->wl->hw, VAR_6->queue_prio);
  if (FUNC_3(VAR_4, VAR_0))
   FUNC_4(VAR_4->wl, "Woke up TX ring %d\n",
         VAR_6->index);
 }

 FUNC_6(VAR_4->wl->hw, &VAR_4->wl->tx_work);
}
