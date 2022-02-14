
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {scalar_t__ mpdu_header_off; scalar_t__ mpdu_len; } ;
struct wcn36xx_rx_bd {TYPE_1__ pdu; } ;
struct wcn36xx {int hw; int scan_band; scalar_t__ scan_freq; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct ieee80211_rx_status {int mactime; int antenna; int rate_idx; int flag; scalar_t__ rx_flags; int signal; int band; scalar_t__ freq; } ;
struct ieee80211_hdr {int frame_control; int seq_ctrl; } ;
typedef int status ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct wcn36xx*) ;
 scalar_t__ FUNC_3 (struct wcn36xx*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (struct wcn36xx_rx_bd*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,struct sk_buff*) ;
 int FUNC_9 (int ,struct ieee80211_rx_status*,int) ;
 int FUNC_10 (struct ieee80211_rx_status*,int ,int) ;
 int FUNC_11 (struct sk_buff*,scalar_t__) ;
 int FUNC_12 (struct sk_buff*,scalar_t__) ;
 int FUNC_13 (int ,char*,...) ;
 int FUNC_14 (int ,char*,char*,int) ;

int FUNC_15(struct wcn36xx *VAR_7, struct sk_buff *VAR_8)
{
 struct ieee80211_rx_status VAR_9;
 struct ieee80211_hdr *VAR_10;
 struct wcn36xx_rx_bd *VAR_11;
 u16 VAR_12, VAR_13;





 FUNC_10(&VAR_9, 0, sizeof(VAR_9));

 VAR_11 = (struct wcn36xx_rx_bd *)VAR_8->data;
 FUNC_5((u32 *)VAR_11, sizeof(*VAR_11)/sizeof(u32));
 FUNC_14(VAR_6,
    "BD   <<< ", (char *)VAR_11,
    sizeof(struct wcn36xx_rx_bd));

 FUNC_12(VAR_8, VAR_11->pdu.mpdu_header_off + VAR_11->pdu.mpdu_len);
 FUNC_11(VAR_8, VAR_11->pdu.mpdu_header_off);

 VAR_10 = (struct ieee80211_hdr *) VAR_8->data;
 VAR_12 = FUNC_4(VAR_10->frame_control);
 VAR_13 = FUNC_0(FUNC_4(VAR_10->seq_ctrl));


 if (FUNC_7(VAR_10->frame_control) && VAR_7->scan_freq) {
  VAR_9.freq = VAR_7->scan_freq;
  VAR_9.band = VAR_7->scan_band;
 } else {
  VAR_9.freq = FUNC_3(VAR_7);
  VAR_9.band = FUNC_2(VAR_7);
 }

 VAR_9.mactime = 10;
 VAR_9.signal = -FUNC_6(VAR_11);
 VAR_9.antenna = 1;
 VAR_9.rate_idx = 1;
 VAR_9.flag = 0;
 VAR_9.rx_flags = 0;
 VAR_9.flag |= VAR_1 |
         VAR_2 |
         VAR_0;

 FUNC_13(VAR_5, "status.flags=%x\n", VAR_9.flag);

 FUNC_9(FUNC_1(VAR_8), &VAR_9, sizeof(VAR_9));

 if (FUNC_7(VAR_10->frame_control)) {
  FUNC_13(VAR_3, "beacon skb %p len %d fc %04x sn %d\n",
       VAR_8, VAR_8->len, VAR_12, VAR_13);
  FUNC_14(VAR_4, "SKB <<< ",
     (char *)VAR_8->data, VAR_8->len);
 } else {
  FUNC_13(VAR_5, "rx skb %p len %d fc %04x sn %d\n",
       VAR_8, VAR_8->len, VAR_12, VAR_13);
  FUNC_14(VAR_6, "SKB <<< ",
     (char *)VAR_8->data, VAR_8->len);
 }

 FUNC_8(VAR_7->hw, VAR_8);

 return 0;
}
