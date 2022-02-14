
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wl1271 {TYPE_1__* hw; } ;
struct sk_buff {int dummy; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_2__ {int wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct sk_buff*,int ) ;
 struct sk_buff* FUNC_1 (int ,int *,int,int ,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int) ;
 int FUNC_5 (int ,char*,int,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct wl1271 *VAR_8, u8 VAR_9,
       u8 VAR_10)
{
 struct sk_buff *VAR_11;
 enum nl80211_band VAR_12;
 int VAR_13;

 if (VAR_10 == VAR_5)
  VAR_12 = VAR_4;
 else
  VAR_12 = VAR_3;

 VAR_13 = FUNC_2(VAR_9, VAR_12);

 FUNC_5(VAR_0,
       "SMART_CONFIG_SYNC_EVENT_ID, freq: %d (chan: %d band %d)",
       VAR_13, VAR_9, VAR_10);
 VAR_11 = FUNC_1(VAR_8->hw->wiphy, ((void*)0), 20,
       VAR_7,
       VAR_2);

 if (FUNC_4(VAR_11, VAR_6, VAR_13)) {
  FUNC_3(VAR_11);
  return -VAR_1;
 }
 FUNC_0(VAR_11, VAR_2);
 return 0;
}
