
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int data; } ;
struct ieee80211_hw {int dummy; } ;



 int FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(struct ieee80211_hw *VAR_0, struct sk_buff *VAR_1)
{
 u8 VAR_2 = FUNC_0(VAR_1->data);

 switch (VAR_2) {
 case 128:
  return 1;
 default:
  break;
 }

 return 0;
}
