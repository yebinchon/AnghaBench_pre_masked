
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sk_buff {struct ieee80211_tx_info* data; } ;
struct ieee80211_tx_rate {int count; int flags; } ;
struct TYPE_11__ {TYPE_6__* vif; struct ieee80211_tx_rate* rates; } ;
struct ieee80211_tx_info {TYPE_5__ control; int flags; int band; } ;
struct ieee80211_hw {TYPE_1__* wiphy; } ;
struct ieee80211_hdr {int seq_ctrl; struct ieee80211_tx_info* addr3; struct ieee80211_tx_info* addr2; struct ieee80211_tx_info* addr1; scalar_t__ duration_id; int frame_control; } ;
struct ath_vif {int seq_no; } ;
struct ath_softc {TYPE_6__* tx99_vif; TYPE_4__* cur_chan; struct ath_hw* sc_ah; struct ieee80211_hw* hw; } ;
struct ath_hw {scalar_t__ curchan; } ;
struct TYPE_12__ {scalar_t__ drv_priv; } ;
struct TYPE_9__ {TYPE_2__* chan; } ;
struct TYPE_10__ {TYPE_3__ chandef; } ;
struct TYPE_8__ {int band; } ;
struct TYPE_7__ {int* perm_addr; } ;
typedef int PN9Data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 struct sk_buff* FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ieee80211_tx_info*,int*,int) ;
 int FUNC_6 (struct ieee80211_tx_info*,int ,int) ;
 int FUNC_7 (struct sk_buff*,int) ;

__attribute__((used)) static struct sk_buff *FUNC_8(struct ath_softc *VAR_6)
{
 static u8 VAR_7[] = {0xff, 0x87, 0xb8, 0x59, 0xb7, 0xa1, 0xcc, 0x24,
          0x57, 0x5e, 0x4b, 0x9c, 0x0e, 0xe9, 0xea, 0x50,
          0x2a, 0xbe, 0xb4, 0x1b, 0xb6, 0xb0, 0x5d, 0xf1,
          0xe6, 0x9a, 0xe3, 0x45, 0xfd, 0x2c, 0x53, 0x18,
          0x0c, 0xca, 0xc9, 0xfb, 0x49, 0x37, 0xe5, 0xa8,
          0x51, 0x3b, 0x2f, 0x61, 0xaa, 0x72, 0x18, 0x84,
          0x02, 0x23, 0x23, 0xab, 0x63, 0x89, 0x51, 0xb3,
          0xe7, 0x8b, 0x72, 0x90, 0x4c, 0xe8, 0xfb, 0xc0};
 u32 VAR_8 = 1200;
 struct ieee80211_tx_rate *VAR_9;
 struct ieee80211_hw *VAR_10 = VAR_6->hw;
 struct ath_hw *VAR_11 = VAR_6->sc_ah;
 struct ieee80211_hdr *VAR_12;
 struct ieee80211_tx_info *VAR_13;
 struct sk_buff *VAR_14;
 struct ath_vif *VAR_15;

 VAR_14 = FUNC_3(VAR_8, VAR_1);
 if (!VAR_14)
  return ((void*)0);

 FUNC_7(VAR_14, VAR_8);

 FUNC_6(VAR_14->data, 0, VAR_8);

 VAR_12 = (struct ieee80211_hdr *)VAR_14->data;
 VAR_12->frame_control = FUNC_4(VAR_2);
 VAR_12->duration_id = 0;

 FUNC_5(VAR_12->addr1, VAR_10->wiphy->perm_addr, VAR_0);
 FUNC_5(VAR_12->addr2, VAR_10->wiphy->perm_addr, VAR_0);
 FUNC_5(VAR_12->addr3, VAR_10->wiphy->perm_addr, VAR_0);

 if (VAR_6->tx99_vif) {
  VAR_15 = (struct ath_vif *) VAR_6->tx99_vif->drv_priv;
  VAR_12->seq_ctrl |= FUNC_4(VAR_15->seq_no);
 }

 VAR_13 = FUNC_0(VAR_14);
 FUNC_6(VAR_13, 0, sizeof(*VAR_13));
 VAR_9 = &VAR_13->control.rates[0];
 VAR_13->band = VAR_6->cur_chan->chandef.chan->band;
 VAR_13->flags = VAR_3;
 VAR_13->control.vif = VAR_6->tx99_vif;
 VAR_9->count = 1;
 if (VAR_11->curchan && FUNC_1(VAR_11->curchan)) {
  VAR_9->flags |= VAR_5;
  if (FUNC_2(VAR_11->curchan))
   VAR_9->flags |= VAR_4;
 }

 FUNC_5(VAR_14->data + sizeof(*VAR_12), VAR_7, sizeof(VAR_7));

 return VAR_14;
}
