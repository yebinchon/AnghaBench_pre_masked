
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ieee80211_hw {int dummy; } ;
typedef enum radio_path { ____Placeholder_radio_path } radio_path ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ieee80211_hw*,int,int,int,int) ;
 int FUNC_2 (int) ;

void FUNC_3(struct ieee80211_hw *VAR_0, enum radio_path VAR_1, u32 VAR_2,
       u32 VAR_3, u32 VAR_4)
{
 if (VAR_2 >= 0xf9 && VAR_2 <= 0xfe) {
  FUNC_0(VAR_2);
 } else {
  FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
  FUNC_2(1);
 }
}
