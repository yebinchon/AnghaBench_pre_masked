
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnt_private {int dummy; } ;
struct sk_buff {int dummy; } ;
struct ieee80211_tx_control {int dummy; } ;
struct ieee80211_hw {struct vnt_private* priv; } ;


 int FUNC_0 (struct ieee80211_hw*,struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct vnt_private*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_0,
    struct ieee80211_tx_control *VAR_1,
    struct sk_buff *VAR_2)
{
 struct vnt_private *VAR_3 = VAR_0->priv;

 if (FUNC_1(VAR_3, VAR_2))
  FUNC_0(VAR_0, VAR_2);
}
