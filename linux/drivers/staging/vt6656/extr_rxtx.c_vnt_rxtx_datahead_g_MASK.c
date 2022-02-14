
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct vnt_usb_send_context {int tx_hdr_size; int pkt_type; int need_ack; int tx_rate; int frame_len; TYPE_1__* skb; struct vnt_private* priv; } ;
struct vnt_tx_datahead_g {void* duration_a; int hdr; void* time_stamp_off_b; void* time_stamp_off_a; void* duration_b; int b; int a; } ;
struct vnt_private {int current_aid; int top_cck_basic_rate; } ;
struct ieee80211_hdr {int frame_control; } ;
typedef void* __le16 ;
struct TYPE_2__ {scalar_t__ data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 void* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (struct vnt_private*,int ,int ) ;
 int FUNC_5 (struct vnt_private*,int ,int ,int ,int *) ;
 int FUNC_6 (struct vnt_usb_send_context*,int *) ;
 void* FUNC_7 (struct vnt_private*,int ) ;

__attribute__((used)) static u16 FUNC_8(struct vnt_usb_send_context *VAR_1,
          struct vnt_tx_datahead_g *VAR_2)
{
 struct vnt_private *VAR_3 = VAR_1->priv;
 struct ieee80211_hdr *VAR_4 =
    (struct ieee80211_hdr *)VAR_1->skb->data;
 u32 VAR_5 = VAR_1->frame_len;
 u16 VAR_6 = VAR_1->tx_rate;
 u8 VAR_7 = VAR_1->need_ack;


 FUNC_5(VAR_3, VAR_5, VAR_6, VAR_1->pkt_type, &VAR_2->a);
 FUNC_5(VAR_3, VAR_5, VAR_3->top_cck_basic_rate,
     VAR_0, &VAR_2->b);


 if (FUNC_2(VAR_4->frame_control)) {
  __le16 VAR_8 = FUNC_1(VAR_3->current_aid | FUNC_0(14) | FUNC_0(15));

  VAR_2->duration_a = VAR_8;
  VAR_2->duration_b = VAR_8;
 } else {
  VAR_2->duration_a = FUNC_4(VAR_3,
      VAR_1->pkt_type, VAR_7);
  VAR_2->duration_b = FUNC_4(VAR_3,
            VAR_0, VAR_7);
 }

 VAR_2->time_stamp_off_a = FUNC_7(VAR_3, VAR_6);
 VAR_2->time_stamp_off_b = FUNC_7(VAR_3,
         VAR_3->top_cck_basic_rate);

 VAR_1->tx_hdr_size = FUNC_6(VAR_1, &VAR_2->hdr);

 return FUNC_3(VAR_2->duration_a);
}
