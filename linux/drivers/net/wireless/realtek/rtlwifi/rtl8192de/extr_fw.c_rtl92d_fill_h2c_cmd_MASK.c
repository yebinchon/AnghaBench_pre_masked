
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (struct ieee80211_hw*,int ,int ,int *) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int ,int) ;

void FUNC_3(struct ieee80211_hw *VAR_0,
    u8 VAR_1, u32 VAR_2, u8 *VAR_3)
{
 u32 VAR_4[2];

 FUNC_2(VAR_4, 0, 8);
 FUNC_1(VAR_4, VAR_3, VAR_2);
 FUNC_0(VAR_0, VAR_1, VAR_2, (u8 *)&VAR_4);
 return;
}
