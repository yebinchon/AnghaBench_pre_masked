
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ieee80211_hw*,int,int) ;
 int FUNC_2 (struct ieee80211_hw*,int,int) ;
 int FUNC_3 (struct ieee80211_hw*,int,int) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_0,
            bool VAR_1,
            u8 VAR_2,
            u8 VAR_3)
{
 switch (VAR_2) {
 case 1:
  FUNC_1(VAR_0, VAR_1,
       VAR_3);
  break;
 case 2:
  FUNC_3(VAR_0, VAR_1,
       VAR_3);
  break;
 case 3:
  FUNC_2(VAR_0, VAR_1,
         VAR_3);
  break;
 default:
  FUNC_0(1);
  break;
 }
}
