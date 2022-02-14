
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (struct ieee80211_hw*,int,int *) ;
 int FUNC_1 (struct ieee80211_hw*,int,int,int *,int *,int *) ;
 int FUNC_2 (struct ieee80211_hw*,int*,int,int *,int *) ;

void FUNC_3(struct ieee80211_hw *VAR_0,
       u8 *VAR_1, u8 VAR_2)
{
 u32 VAR_3[2], VAR_4[2], VAR_5[2];
 u8 VAR_6;

 FUNC_2(VAR_0, VAR_1,
        VAR_2, &VAR_4[0], &VAR_5[0]);

 for (VAR_6 = 0; VAR_6 < 6; VAR_6++) {
  FUNC_1(VAR_0, VAR_2, VAR_6, &VAR_4[0],
         &VAR_5[0],
         &VAR_3[0]);

  FUNC_0(VAR_0, VAR_6, &VAR_3[0]);
 }
}
