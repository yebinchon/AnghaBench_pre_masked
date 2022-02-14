
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl12xx_vif {int pending_auth_complete_work; int pending_auth_reply_time; } ;
struct wl1271_tx_hw_descr {int dummy; } ;
struct wl1271 {int hw; } ;
struct sk_buff {scalar_t__ data; } ;
struct ieee80211_hdr {int addr1; int frame_control; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int ) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct wl1271*,struct wl12xx_vif*,int ) ;
 int FUNC_5 (struct wl1271*,struct wl12xx_vif*,int *,int) ;

__attribute__((used)) static void FUNC_6(struct wl1271 *VAR_2,
       struct wl12xx_vif *VAR_3,
       struct sk_buff *VAR_4)
{
 struct ieee80211_hdr *VAR_5;

 VAR_5 = (struct ieee80211_hdr *)(VAR_4->data +
           sizeof(struct wl1271_tx_hw_descr));
 if (!FUNC_1(VAR_5->frame_control))
  return;






 FUNC_4(VAR_2, VAR_3, VAR_5->addr1);






 FUNC_5(VAR_2, VAR_3, ((void*)0), 1);
 VAR_3->pending_auth_reply_time = VAR_1;
 FUNC_0(&VAR_3->pending_auth_complete_work);
 FUNC_2(VAR_2->hw,
    &VAR_3->pending_auth_complete_work,
    FUNC_3(VAR_0));
}
