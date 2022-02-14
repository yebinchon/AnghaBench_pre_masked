
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sk_buff {scalar_t__ data; } ;
struct rxpd {int nf; int snr; int rx_pkt_length; int rx_pkt_offset; } ;
struct TYPE_4__ {int center_freq; } ;
struct TYPE_5__ {TYPE_1__ chan; } ;
struct TYPE_6__ {scalar_t__ iftype; } ;
struct mwifiex_private {TYPE_2__ roc_cfg; TYPE_3__ wdev; int adapter; int mgmt_frame_mask; } ;
struct ieee80211_hdr_3addr {int dummy; } ;
struct ieee80211_hdr {int frame_control; } ;
typedef int pkt_len ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_3__*,int ,int ,scalar_t__,int,int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ,char*) ;
 scalar_t__ FUNC_7 (struct mwifiex_private*,int *,int,struct rxpd*) ;
 int FUNC_8 (struct sk_buff*,int) ;

int
FUNC_9(struct mwifiex_private *VAR_3,
       struct sk_buff *VAR_4)
{
 struct rxpd *VAR_5;
 u16 VAR_6;
 struct ieee80211_hdr *VAR_7;

 if (!VAR_4)
  return -1;

 if (!VAR_3->mgmt_frame_mask ||
     VAR_3->wdev.iftype == VAR_2) {
  FUNC_6(VAR_3->adapter, VAR_0,
       "do not receive mgmt frames on uninitialized intf");
  return -1;
 }

 VAR_5 = (struct rxpd *)VAR_4->data;

 FUNC_8(VAR_4, FUNC_4(VAR_5->rx_pkt_offset));
 FUNC_8(VAR_4, sizeof(VAR_6));

 VAR_6 = FUNC_4(VAR_5->rx_pkt_length);

 VAR_7 = (void *)VAR_4->data;
 if (FUNC_3(VAR_7->frame_control)) {
  if (FUNC_7(VAR_3, (u8 *)VAR_7,
           VAR_6, VAR_5))
   return -1;
 }

 FUNC_5(VAR_4->data + sizeof(struct ieee80211_hdr_3addr),
  VAR_4->data + sizeof(struct ieee80211_hdr),
  VAR_6 - sizeof(struct ieee80211_hdr));

 VAR_6 -= VAR_1 + sizeof(VAR_6);
 VAR_5->rx_pkt_length = FUNC_2(VAR_6);

 FUNC_1(&VAR_3->wdev, VAR_3->roc_cfg.chan.center_freq,
    FUNC_0(VAR_5->snr, VAR_5->nf), VAR_4->data, VAR_6,
    0);

 return 0;
}
