
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int len; scalar_t__ data; } ;
struct ieee80211_rx_status {int dummy; } ;
struct ieee80211_hdr {int frame_control; } ;
struct d11rxhdr {int dummy; } ;
struct brcms_c_info {TYPE_1__* pub; TYPE_2__* hw; } ;
typedef int rx_status ;
struct TYPE_4__ {scalar_t__ suspended_fifos; } ;
struct TYPE_3__ {int ieee_hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,int) ;
 int FUNC_2 (TYPE_2__*,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,struct sk_buff*) ;
 int FUNC_5 (int ,struct ieee80211_rx_status*,int) ;
 int FUNC_6 (struct ieee80211_rx_status*,int ,int) ;
 int FUNC_7 (struct brcms_c_info*,struct d11rxhdr*,struct sk_buff*,struct ieee80211_rx_status*) ;
 int FUNC_8 (struct sk_buff*,int) ;

__attribute__((used)) static void
FUNC_9(struct brcms_c_info *VAR_2, struct d11rxhdr *VAR_3,
  struct sk_buff *VAR_4)
{
 int VAR_5;
 struct ieee80211_rx_status VAR_6;
 struct ieee80211_hdr *VAR_7;

 FUNC_6(&VAR_6, 0, sizeof(VAR_6));
 FUNC_7(VAR_2, VAR_3, VAR_4, &VAR_6);


 VAR_5 = VAR_4->len - VAR_0 - VAR_1;
 FUNC_8(VAR_4, VAR_0);
 FUNC_1(VAR_4, VAR_5);


 if (VAR_2->hw->suspended_fifos) {
  VAR_7 = (struct ieee80211_hdr *)VAR_4->data;
  if (FUNC_3(VAR_7->frame_control))
   FUNC_2(VAR_2->hw, 0);
 }

 FUNC_5(FUNC_0(VAR_4), &VAR_6, sizeof(VAR_6));
 FUNC_4(VAR_2->pub->ieee_hw, VAR_4);
}
