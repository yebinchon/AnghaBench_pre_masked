
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct ieee80211_hw {int dummy; } ;
typedef enum radio_path { ____Placeholder_radio_path } radio_path ;


 size_t FUNC_0 (struct ieee80211_hw*,int,size_t,size_t,size_t) ;
 int FUNC_1 (struct ieee80211_hw*,size_t,int,size_t) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_0,
      enum radio_path VAR_1, u8 VAR_2,
      u8 VAR_3, u8 *VAR_4, u8 VAR_5)
{
 u8 VAR_6;
 u8 VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  VAR_7 = FUNC_0(VAR_0, VAR_1, VAR_4[VAR_6],
        VAR_2, VAR_3);
  FUNC_1(VAR_0, VAR_7, VAR_1, VAR_4[VAR_6]);
 }
}
