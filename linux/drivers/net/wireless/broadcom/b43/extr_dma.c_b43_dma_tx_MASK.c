
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct ieee80211_tx_info {int flags; } ;
struct ieee80211_hdr {int frame_control; } ;
struct TYPE_4__ {struct b43_dmaring* tx_ring_mcast; } ;
struct b43_wldev {TYPE_2__* wl; TYPE_1__ dma; } ;
struct b43_dmaring {int stopped; int index; void* queue_prio; int tx; } ;
struct TYPE_5__ {int* tx_queue_stopped; int hw; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ieee80211_tx_info* FUNC_1 (struct sk_buff*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct b43_wldev*,int ) ;
 int FUNC_4 (TYPE_2__*,char*,int ) ;
 int FUNC_5 (TYPE_2__*,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct b43_dmaring*,struct sk_buff*) ;
 scalar_t__ FUNC_8 (struct b43_dmaring*) ;
 int FUNC_9 (int ,struct sk_buff*) ;
 int FUNC_10 (int ,unsigned int) ;
 struct b43_dmaring* FUNC_11 (struct b43_wldev*,void*) ;
 scalar_t__ FUNC_12 (struct b43_dmaring*) ;
 void* FUNC_13 (struct sk_buff*) ;
 scalar_t__ FUNC_14 (int) ;

int FUNC_15(struct b43_wldev *VAR_6, struct sk_buff *VAR_7)
{
 struct b43_dmaring *VAR_8;
 struct ieee80211_hdr *VAR_9;
 int VAR_10 = 0;
 struct ieee80211_tx_info *VAR_11 = FUNC_1(VAR_7);

 VAR_9 = (struct ieee80211_hdr *)VAR_7->data;
 if (VAR_11->flags & VAR_4) {

  VAR_8 = VAR_6->dma.tx_ring_mcast;


  VAR_9->frame_control |= FUNC_6(VAR_3);
 } else {

  VAR_8 = FUNC_11(
   VAR_6, FUNC_13(VAR_7));
 }

 FUNC_0(!VAR_8->tx);

 if (FUNC_14(VAR_8->stopped)) {




  if (FUNC_3(VAR_6, VAR_0))
   FUNC_5(VAR_6->wl, "Packet after queue stopped\n");
  VAR_10 = -VAR_2;
  goto out;
 }

 if (FUNC_2(FUNC_8(VAR_8) < VAR_5)) {


  FUNC_5(VAR_6->wl, "DMA queue overflow\n");
  VAR_10 = -VAR_2;
  goto out;
 }




 VAR_8->queue_prio = FUNC_13(VAR_7);

 VAR_10 = FUNC_7(VAR_8, VAR_7);
 if (FUNC_14(VAR_10 == -VAR_1)) {


  FUNC_9(VAR_6->wl->hw, VAR_7);
  VAR_10 = 0;
  goto out;
 }
 if (FUNC_14(VAR_10)) {
  FUNC_5(VAR_6->wl, "DMA tx mapping failure\n");
  goto out;
 }
 if ((FUNC_8(VAR_8) < VAR_5) ||
     FUNC_12(VAR_8)) {

  unsigned int VAR_12 = FUNC_13(VAR_7);
  FUNC_10(VAR_6->wl->hw, VAR_12);
  VAR_6->wl->tx_queue_stopped[VAR_12] = 1;
  VAR_8->stopped = 1;
  if (FUNC_3(VAR_6, VAR_0)) {
   FUNC_4(VAR_6->wl, "Stopped TX ring %d\n", VAR_8->index);
  }
 }
out:

 return VAR_10;
}
