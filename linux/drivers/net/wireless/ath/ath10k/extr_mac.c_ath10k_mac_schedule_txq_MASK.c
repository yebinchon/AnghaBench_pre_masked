
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ieee80211_txq {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_hw*,struct ieee80211_txq*) ;
 scalar_t__ FUNC_1 (struct ieee80211_hw*,struct ieee80211_txq*) ;
 int FUNC_2 (struct ieee80211_hw*,struct ieee80211_txq*) ;
 struct ieee80211_txq* FUNC_3 (struct ieee80211_hw*,int ) ;
 int FUNC_4 (struct ieee80211_hw*,struct ieee80211_txq*,int) ;
 int FUNC_5 (struct ieee80211_hw*,int ) ;
 int FUNC_6 (struct ieee80211_hw*,int ) ;

__attribute__((used)) static int FUNC_7(struct ieee80211_hw *VAR_1, u32 VAR_2)
{
 struct ieee80211_txq *VAR_3;
 int VAR_4 = 0;

 FUNC_6(VAR_1, VAR_2);
 while ((VAR_3 = FUNC_3(VAR_1, VAR_2))) {
  while (FUNC_1(VAR_1, VAR_3)) {
   VAR_4 = FUNC_2(VAR_1, VAR_3);
   if (VAR_4 < 0)
    break;
  }
  FUNC_4(VAR_1, VAR_3, 0);
  FUNC_0(VAR_1, VAR_3);
  if (VAR_4 == -VAR_0)
   break;
 }
 FUNC_5(VAR_1, VAR_2);

 return VAR_4;
}
