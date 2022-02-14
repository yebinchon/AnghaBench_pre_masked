
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {scalar_t__ data; } ;
struct p54_common {int dummy; } ;
struct ieee80211_hw {struct p54_common* priv; } ;
typedef int __le16 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct p54_common*,struct sk_buff*) ;
 int FUNC_2 (struct p54_common*,struct sk_buff*) ;

int FUNC_3(struct ieee80211_hw *VAR_1, struct sk_buff *VAR_2)
{
 struct p54_common *VAR_3 = VAR_1->priv;
 u16 VAR_4 = FUNC_0(*((__le16 *)VAR_2->data));

 if (VAR_4 & VAR_0)
  return FUNC_1(VAR_3, VAR_2);
 else
  return FUNC_2(VAR_3, VAR_2);
}
