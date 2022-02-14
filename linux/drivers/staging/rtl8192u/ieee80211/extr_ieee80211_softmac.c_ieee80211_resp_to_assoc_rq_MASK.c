
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct ieee80211_device {int dummy; } ;


 struct sk_buff* FUNC_0 (struct ieee80211_device*,int *) ;
 int FUNC_1 (struct sk_buff*,struct ieee80211_device*) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_device *VAR_0, u8 *VAR_1)
{
 struct sk_buff *VAR_2 = FUNC_0(VAR_0, VAR_1);

 if (VAR_2)
  FUNC_1(VAR_2, VAR_0);
}
