
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct txentry_desc {int flags; } ;
struct sk_buff {scalar_t__ data; } ;
struct rt2x00_intf {int seqno; } ;
struct rt2x00_dev {int dummy; } ;
struct TYPE_2__ {int vif; } ;
struct ieee80211_tx_info {int flags; TYPE_1__ control; } ;
struct ieee80211_hdr {int seq_ctrl; int frame_control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct rt2x00_dev*,int ) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 struct rt2x00_intf* FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct rt2x00_dev *VAR_5,
       struct sk_buff *VAR_6,
       struct txentry_desc *VAR_7)
{
 struct ieee80211_tx_info *VAR_8 = FUNC_0(VAR_6);
 struct ieee80211_hdr *VAR_9 = (struct ieee80211_hdr *)VAR_6->data;
 struct rt2x00_intf *VAR_10 = FUNC_9(VAR_8->control.vif);
 u16 VAR_11;

 if (!(VAR_8->flags & VAR_3))
  return;

 FUNC_2(VAR_1, &VAR_7->flags);

 if (!FUNC_7(VAR_5, VAR_4)) {







      if (FUNC_6(VAR_9->frame_control)) {
   FUNC_2(VAR_1, &VAR_7->flags);

   return;
  }

  FUNC_1(VAR_1, &VAR_7->flags);
 }
 if (FUNC_8(VAR_0, &VAR_7->flags))
  VAR_11 = FUNC_3(0x10, &VAR_10->seqno);
 else
  VAR_11 = FUNC_4(&VAR_10->seqno);

 VAR_9->seq_ctrl &= FUNC_5(VAR_2);
 VAR_9->seq_ctrl |= FUNC_5(VAR_11);
}
