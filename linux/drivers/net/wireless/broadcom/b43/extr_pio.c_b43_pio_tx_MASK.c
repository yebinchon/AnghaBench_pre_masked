
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {int len; scalar_t__ data; } ;
struct ieee80211_tx_info {int flags; } ;
struct ieee80211_hdr {int frame_control; } ;
struct TYPE_5__ {struct b43_pio_txqueue* tx_queue_mcast; } ;
struct b43_wldev {TYPE_2__* wl; TYPE_1__ pio; } ;
struct b43_pio_txqueue {unsigned int buffer_size; scalar_t__ free_packet_slots; unsigned int buffer_used; int stopped; int queue_prio; } ;
struct TYPE_6__ {int hw; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ieee80211_tx_info* FUNC_1 (struct sk_buff*) ;
 int VAR_4 ;
 unsigned int FUNC_2 (struct b43_wldev*) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (TYPE_2__*,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,struct sk_buff*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct b43_pio_txqueue*,struct sk_buff*) ;
 unsigned int FUNC_10 (int,int) ;
 struct b43_pio_txqueue* FUNC_11 (struct b43_wldev*,int ) ;
 int FUNC_12 (struct sk_buff*) ;
 scalar_t__ FUNC_13 (int) ;

int FUNC_14(struct b43_wldev *VAR_5, struct sk_buff *VAR_6)
{
 struct b43_pio_txqueue *VAR_7;
 struct ieee80211_hdr *VAR_8;
 unsigned int VAR_9, VAR_10;
 int VAR_11 = 0;
 struct ieee80211_tx_info *VAR_12 = FUNC_1(VAR_6);

 VAR_8 = (struct ieee80211_hdr *)VAR_6->data;

 if (VAR_12->flags & VAR_4) {

  VAR_7 = VAR_5->pio.tx_queue_mcast;


  VAR_8->frame_control |= FUNC_6(VAR_3);
 } else {

  VAR_7 = FUNC_11(VAR_5, FUNC_12(VAR_6));
 }

 VAR_9 = FUNC_2(VAR_5);
 VAR_10 = FUNC_10(VAR_6->len + VAR_9, 4);

 if (FUNC_13(VAR_10 > VAR_7->buffer_size)) {
  VAR_11 = -VAR_1;
  FUNC_3(VAR_5->wl, "PIO: TX packet longer than queue.\n");
  goto out;
 }
 if (FUNC_13(VAR_7->free_packet_slots == 0)) {
  VAR_11 = -VAR_1;
  FUNC_5(VAR_5->wl, "PIO: TX packet overflow.\n");
  goto out;
 }
 FUNC_0(VAR_7->buffer_used > VAR_7->buffer_size);

 if (VAR_10 > (VAR_7->buffer_size - VAR_7->buffer_used)) {

  VAR_11 = -VAR_0;
  FUNC_8(VAR_5->wl->hw, FUNC_12(VAR_6));
  VAR_7->stopped = 1;
  goto out;
 }




 VAR_7->queue_prio = FUNC_12(VAR_6);

 VAR_11 = FUNC_9(VAR_7, VAR_6);
 if (FUNC_13(VAR_11 == -VAR_2)) {


  FUNC_7(VAR_5->wl->hw, VAR_6);
  VAR_11 = 0;
  goto out;
 }
 if (FUNC_13(VAR_11)) {
  FUNC_4(VAR_5->wl, "PIO transmission failure\n");
  goto out;
 }

 FUNC_0(VAR_7->buffer_used > VAR_7->buffer_size);
 if (((VAR_7->buffer_size - VAR_7->buffer_used) < FUNC_10(2 + 2 + 6, 4)) ||
     (VAR_7->free_packet_slots == 0)) {

  FUNC_8(VAR_5->wl->hw, FUNC_12(VAR_6));
  VAR_7->stopped = 1;
 }

out:
 return VAR_11;
}
