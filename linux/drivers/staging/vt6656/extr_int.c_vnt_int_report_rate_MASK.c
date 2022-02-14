
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct vnt_usb_send_context {scalar_t__ fb_option; int in_use; int skb; } ;
struct vnt_private {int num_tx_context; int hw; struct vnt_usb_send_context** tx_context; } ;
struct TYPE_8__ {TYPE_3__* rates; } ;
struct TYPE_6__ {TYPE_1__* rates; } ;
struct ieee80211_tx_info {scalar_t__ band; int flags; TYPE_4__ status; TYPE_2__ control; } ;
struct ieee80211_rate {int hw_value; } ;
typedef int s8 ;
struct TYPE_7__ {int count; int idx; } ;
struct TYPE_5__ {int idx; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct ieee80211_tx_info* FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int** VAR_9 ;
 int** VAR_10 ;
 struct ieee80211_rate* FUNC_1 (int ,struct ieee80211_tx_info*) ;
 int FUNC_2 (struct ieee80211_tx_info*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct vnt_private *VAR_11, u8 VAR_12, u8 VAR_13)
{
 struct vnt_usb_send_context *VAR_14;
 struct ieee80211_tx_info *VAR_15;
 struct ieee80211_rate *VAR_16;
 u8 VAR_17 = (VAR_13 & 0xf0) >> 4;
 s8 VAR_18;

 if (VAR_12 >= VAR_11->num_tx_context)
  return -VAR_2;

 VAR_14 = VAR_11->tx_context[VAR_12];

 if (!VAR_14->skb)
  return -VAR_2;

 VAR_15 = FUNC_0(VAR_14->skb);
 VAR_18 = VAR_15->control.rates[0].idx;

 if (VAR_14->fb_option && !(VAR_13 & (VAR_8 | VAR_7))) {
  u8 VAR_19;
  u8 VAR_20 = VAR_17;

  VAR_16 = FUNC_1(VAR_11->hw, VAR_15);
  VAR_19 = VAR_16->hw_value - VAR_5;

  if (VAR_20 > 4)
   VAR_20 = 4;

  if (VAR_14->fb_option == VAR_0)
   VAR_19 = VAR_9[VAR_19][VAR_20];
  else if (VAR_14->fb_option == VAR_1)
   VAR_19 = VAR_10[VAR_19][VAR_20];

  if (VAR_15->band == VAR_4)
   VAR_18 = VAR_19 - VAR_6;
  else
   VAR_18 = VAR_19;
 }

 FUNC_2(VAR_15);

 VAR_15->status.rates[0].count = VAR_17;

 if (!(VAR_13 & (VAR_8 | VAR_7))) {
  VAR_15->status.rates[0].idx = VAR_18;
  VAR_15->flags |= VAR_3;
 }

 FUNC_3(VAR_11->hw, VAR_14->skb);

 VAR_14->in_use = 0;

 return 0;
}
