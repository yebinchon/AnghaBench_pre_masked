
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct vnt_usb_send_context {struct ieee80211_hdr* hdr; } ;
struct vnt_mic_hdr {int id; int* ccmp_pn; int addr4; void* seq_ctrl; void* frame_control; int addr3; int addr2; int addr1; void* hlen; int mic_addr2; void* payload_len; } ;
struct sk_buff {int dummy; } ;
struct ieee80211_key_conf {int cipher; int keylen; int * key; int tx_pn; scalar_t__ icv_len; } ;
struct ieee80211_hdr {int addr4; int frame_control; int seq_ctrl; int addr3; int addr2; int addr1; } ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct ieee80211_key_conf*,struct sk_buff*,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *,int *,int) ;

__attribute__((used)) static void FUNC_9(struct vnt_usb_send_context *VAR_2,
      u8 *VAR_3, struct ieee80211_key_conf *VAR_4,
      struct sk_buff *VAR_5, u16 VAR_6,
      struct vnt_mic_hdr *VAR_7)
{
 struct ieee80211_hdr *VAR_8 = VAR_2->hdr;
 u64 VAR_9;
 u8 *VAR_10 = ((u8 *)VAR_8 + FUNC_4(VAR_5));


 VAR_6 -= FUNC_4(VAR_5);
 VAR_6 -= VAR_4->icv_len;

 switch (VAR_4->cipher) {
 case 128:
 case 129:
  FUNC_8(VAR_3, VAR_10, 3);
  FUNC_8(VAR_3 + 3, VAR_4->key, VAR_4->keylen);

  if (VAR_4->keylen == VAR_1) {
   FUNC_8(VAR_3 + 8, VAR_10, 3);
   FUNC_8(VAR_3 + 11,
          VAR_4->key, VAR_1);
  }

  break;
 case 130:
  FUNC_5(VAR_4, VAR_5, VAR_3);

  break;
 case 131:

  if (!VAR_7)
   return;

  VAR_7->id = 0x59;
  VAR_7->payload_len = FUNC_1(VAR_6);
  FUNC_3(VAR_7->mic_addr2, VAR_8->addr2);

  VAR_9 = FUNC_0(&VAR_4->tx_pn);
  VAR_7->ccmp_pn[5] = VAR_9;
  VAR_7->ccmp_pn[4] = VAR_9 >> 8;
  VAR_7->ccmp_pn[3] = VAR_9 >> 16;
  VAR_7->ccmp_pn[2] = VAR_9 >> 24;
  VAR_7->ccmp_pn[1] = VAR_9 >> 32;
  VAR_7->ccmp_pn[0] = VAR_9 >> 40;

  if (FUNC_6(VAR_8->frame_control))
   VAR_7->hlen = FUNC_1(28);
  else
   VAR_7->hlen = FUNC_1(22);

  FUNC_3(VAR_7->addr1, VAR_8->addr1);
  FUNC_3(VAR_7->addr2, VAR_8->addr2);
  FUNC_3(VAR_7->addr3, VAR_8->addr3);

  VAR_7->frame_control = FUNC_2(
   FUNC_7(VAR_8->frame_control) & 0xc78f);
  VAR_7->seq_ctrl = FUNC_2(
    FUNC_7(VAR_8->seq_ctrl) & 0xf);

  if (FUNC_6(VAR_8->frame_control))
   FUNC_3(VAR_7->addr4, VAR_8->addr4);

  FUNC_8(VAR_3, VAR_4->key, VAR_0);

  break;
 default:
  break;
 }
}
