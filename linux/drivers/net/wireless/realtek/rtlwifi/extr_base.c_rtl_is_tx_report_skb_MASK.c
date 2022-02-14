
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct sk_buff {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
typedef int __le16 ;
typedef int __be16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int * FUNC_3 (struct ieee80211_hw*,struct sk_buff*,int) ;

bool FUNC_4(struct ieee80211_hw *VAR_1, struct sk_buff *VAR_2)
{
 u16 VAR_3;
 const u8 *VAR_4;
 __le16 VAR_5 = FUNC_2(VAR_2);

 VAR_4 = FUNC_3(VAR_1, VAR_2, 1);
 VAR_3 = FUNC_0((__be16 *)VAR_4);

 if (VAR_3 == VAR_0 || FUNC_1(VAR_5))
  return 1;

 return 0;
}
