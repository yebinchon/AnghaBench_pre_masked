
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct vnt_tx_fifo_head {int fifo_ctl; } ;
struct vnt_td_info {int skb; scalar_t__ buf; } ;
struct vnt_private {int hw; } ;
struct TYPE_8__ {TYPE_3__* rates; } ;
struct TYPE_6__ {TYPE_1__* rates; } ;
struct ieee80211_tx_info {scalar_t__ band; int flags; TYPE_4__ status; TYPE_2__ control; } ;
struct ieee80211_rate {int hw_value; } ;
typedef int s8 ;
struct TYPE_7__ {int count; int idx; } ;
struct TYPE_5__ {int idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ieee80211_tx_info* FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int** VAR_12 ;
 int** VAR_13 ;
 struct ieee80211_rate* FUNC_1 (int ,struct ieee80211_tx_info*) ;
 int FUNC_2 (struct ieee80211_tx_info*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct vnt_private *VAR_14,
          struct vnt_td_info *VAR_15, u8 VAR_16, u8 VAR_17)
{
 struct vnt_tx_fifo_head *VAR_18;
 struct ieee80211_tx_info *VAR_19;
 struct ieee80211_rate *VAR_20;
 u16 VAR_21;
 u8 VAR_22 = (VAR_16 & VAR_10);
 s8 VAR_23;

 if (!VAR_15)
  return -VAR_1;

 if (!VAR_15->skb)
  return -VAR_0;

 VAR_18 = (struct vnt_tx_fifo_head *)VAR_15->buf;
 VAR_21 = (FUNC_3(VAR_18->fifo_ctl) &
   (VAR_2 | VAR_3));

 VAR_19 = FUNC_0(VAR_15->skb);
 VAR_23 = VAR_19->control.rates[0].idx;

 if (VAR_21 && !(VAR_17 & VAR_11)) {
  u8 VAR_24;
  u8 VAR_25 = VAR_22;

  VAR_20 = FUNC_1(VAR_14->hw, VAR_19);
  VAR_24 = VAR_20->hw_value - VAR_8;

  if (VAR_25 > 4)
   VAR_25 = 4;

  if (VAR_21 & VAR_2)
   VAR_24 = VAR_12[VAR_24][VAR_25];
  else if (VAR_21 & VAR_3)
   VAR_24 = VAR_13[VAR_24][VAR_25];

  if (VAR_19->band == VAR_7)
   VAR_23 = VAR_24 - VAR_9;
  else
   VAR_23 = VAR_24;
 }

 FUNC_2(VAR_19);

 VAR_19->status.rates[0].count = VAR_22;

 if (!(VAR_17 & VAR_11)) {
  VAR_19->status.rates[0].idx = VAR_23;

  if (VAR_19->flags & VAR_4)
   VAR_19->flags |= VAR_6;
  else
   VAR_19->flags |= VAR_5;
 }

 return 0;
}
