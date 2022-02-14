
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_7__ {int mcs; int stbc; int ba_size; void* txop; int mpdu_density; int wcid; } ;
struct TYPE_8__ {TYPE_3__ ht; } ;
struct txentry_desc {TYPE_4__ u; int flags; } ;
struct sk_buff {scalar_t__ data; } ;
struct rt2x00_sta {int wcid; } ;
struct rt2x00_rate {int mcs; } ;
struct rt2x00_dev {int flags; } ;
struct ieee80211_tx_rate {int flags; int idx; } ;
struct TYPE_5__ {struct ieee80211_tx_rate* rates; } ;
struct ieee80211_tx_info {int flags; TYPE_1__ control; } ;
struct TYPE_6__ {int ampdu_density; } ;
struct ieee80211_sta {scalar_t__ smps_mode; TYPE_2__ ht_cap; } ;
struct ieee80211_hdr {int frame_control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct rt2x00_sta* FUNC_5 (struct ieee80211_sta*) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct rt2x00_dev *VAR_18,
      struct sk_buff *VAR_19,
      struct txentry_desc *VAR_20,
      struct ieee80211_sta *VAR_21,
      const struct rt2x00_rate *VAR_22)
{
 struct ieee80211_tx_info *VAR_23 = FUNC_0(VAR_19);
 struct ieee80211_tx_rate *VAR_24 = &VAR_23->control.rates[0];
 struct ieee80211_hdr *VAR_25 = (struct ieee80211_hdr *)VAR_19->data;
 struct rt2x00_sta *VAR_26 = ((void*)0);
 u8 VAR_27 = 0;

 if (VAR_21) {
  VAR_26 = FUNC_5(VAR_21);
  VAR_20->u.ht.wcid = VAR_26->wcid;
  VAR_27 = VAR_21->ht_cap.ampdu_density;
 }





 if (VAR_24->flags & VAR_12) {
  VAR_20->u.ht.mcs = VAR_24->idx;





  if (VAR_21 && VAR_20->u.ht.mcs > 7 &&
      VAR_21->smps_mode == VAR_5)
   FUNC_1(VAR_3, &VAR_20->flags);
 } else {
  VAR_20->u.ht.mcs = FUNC_4(VAR_22->mcs);
  if (VAR_24->flags & VAR_14)
   VAR_20->u.ht.mcs |= 0x08;
 }

 if (FUNC_6(VAR_0, &VAR_18->flags)) {
  if (!(VAR_23->flags & VAR_7))
   VAR_20->u.ht.txop = VAR_17;
  else
   VAR_20->u.ht.txop = VAR_15;


  return;
 }




 if (VAR_23->flags & VAR_9)
  VAR_20->u.ht.stbc = 1;





 if (VAR_23->flags & VAR_6 &&
     !(VAR_23->flags & VAR_8)) {
  FUNC_1(VAR_1, &VAR_20->flags);
  VAR_20->u.ht.mpdu_density = VAR_27;
  VAR_20->u.ht.ba_size = 7;
 }





 if (VAR_24->flags & VAR_10 ||
     VAR_24->flags & VAR_11)
  FUNC_1(VAR_2, &VAR_20->flags);
 if (VAR_24->flags & VAR_13)
  FUNC_1(VAR_4, &VAR_20->flags);
 if (FUNC_3(VAR_25->frame_control) &&
     !FUNC_2(VAR_25->frame_control))
  VAR_20->u.ht.txop = VAR_15;
 else if (!(VAR_23->flags & VAR_7))
  VAR_20->u.ht.txop = VAR_17;
 else
  VAR_20->u.ht.txop = VAR_16;
}
