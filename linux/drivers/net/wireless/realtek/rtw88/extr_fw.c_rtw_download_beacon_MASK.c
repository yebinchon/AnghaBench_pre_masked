
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; int data; } ;
struct rtw_dev {struct ieee80211_hw* hw; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (struct ieee80211_hw*,struct ieee80211_vif*) ;
 int FUNC_2 (struct rtw_dev*,int ,int ) ;
 int FUNC_3 (struct rtw_dev*,char*) ;

__attribute__((used)) static int
FUNC_4(struct rtw_dev *VAR_1, struct ieee80211_vif *VAR_2)
{
 struct ieee80211_hw *VAR_3 = VAR_1->hw;
 struct sk_buff *VAR_4;
 int VAR_5 = 0;

 VAR_4 = FUNC_1(VAR_3, VAR_2);
 if (!VAR_4) {
  FUNC_3(VAR_1, "failed to get beacon skb\n");
  VAR_5 = -VAR_0;
  goto out;
 }

 VAR_5 = FUNC_2(VAR_1, VAR_4->data, VAR_4->len);
 if (VAR_5)
  FUNC_3(VAR_1, "failed to download drv rsvd page\n");

 FUNC_0(VAR_4);

out:
 return VAR_5;
}
