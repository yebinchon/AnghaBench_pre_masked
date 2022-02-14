
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 size_t FUNC_0 (struct ieee80211_hw*,size_t,int ) ;

__attribute__((used)) static void FUNC_1(struct ieee80211_hw *VAR_1,
         u32 *VAR_2, u32 *VAR_3,
         u32 VAR_4)
{
 u32 VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
  VAR_3[VAR_5] = FUNC_0(VAR_1, VAR_2[VAR_5], VAR_0);
}
