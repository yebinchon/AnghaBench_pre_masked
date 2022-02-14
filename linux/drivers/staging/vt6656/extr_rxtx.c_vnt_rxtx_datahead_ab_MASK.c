
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct vnt_usb_send_context {int tx_hdr_size; int pkt_type; int need_ack; int tx_rate; int frame_len; TYPE_1__* skb; struct vnt_private* priv; } ;
struct vnt_tx_datahead_ab {int duration; int hdr; int time_stamp_off; int ab; } ;
struct vnt_private {int current_aid; } ;
struct ieee80211_hdr {int frame_control; } ;
typedef int __le16 ;
struct TYPE_2__ {scalar_t__ data; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct vnt_private*,int ,int ) ;
 int FUNC_5 (struct vnt_private*,int ,int ,int ,int *) ;
 int FUNC_6 (struct vnt_usb_send_context*,int *) ;
 int FUNC_7 (struct vnt_private*,int ) ;

__attribute__((used)) static u16 FUNC_8(struct vnt_usb_send_context *VAR_0,
    struct vnt_tx_datahead_ab *VAR_1)
{
 struct vnt_private *VAR_2 = VAR_0->priv;
 struct ieee80211_hdr *VAR_3 =
    (struct ieee80211_hdr *)VAR_0->skb->data;
 u32 VAR_4 = VAR_0->frame_len;
 u16 VAR_5 = VAR_0->tx_rate;
 u8 VAR_6 = VAR_0->need_ack;


 FUNC_5(VAR_2, VAR_4, VAR_5,
     VAR_0->pkt_type, &VAR_1->ab);


 if (FUNC_2(VAR_3->frame_control)) {
  __le16 VAR_7 = FUNC_1(VAR_2->current_aid | FUNC_0(14) | FUNC_0(15));

  VAR_1->duration = VAR_7;
 } else {
  VAR_1->duration = FUNC_4(VAR_2, VAR_0->pkt_type,
          VAR_6);
 }

 VAR_1->time_stamp_off = FUNC_7(VAR_2, VAR_5);

 VAR_0->tx_hdr_size = FUNC_6(VAR_0, &VAR_1->hdr);

 return FUNC_3(VAR_1->duration);
}
