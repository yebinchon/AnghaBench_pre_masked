
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct rtl_hal {scalar_t__ hw_type; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 struct rtl_hal* FUNC_0 (int ) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*,size_t,int ,size_t) ;

void FUNC_3(struct ieee80211_hw *VAR_3, u32 *VAR_4,
         bool VAR_5, bool VAR_6)
{
 struct rtl_hal *VAR_7 = FUNC_0(FUNC_1(VAR_3));
 u32 VAR_8;
 u32 VAR_9;

 if (VAR_7->hw_type == VAR_0) {
  VAR_8 = VAR_5 ? 0x04db25a4 : 0x0b1b25a4;
  if (!VAR_6) {
   VAR_8 = 0x0bdb25a0;
   FUNC_2(VAR_3, VAR_4[0], VAR_2, 0x0b1b25a0);
  } else {
   FUNC_2(VAR_3, VAR_4[0], VAR_2, VAR_8);
  }
 } else {

  VAR_8 = 0x01c00014;
  FUNC_2(VAR_3, VAR_4[0], VAR_2, VAR_8);
 }

 for (VAR_9 = 1; VAR_9 < VAR_1; VAR_9++)
  FUNC_2(VAR_3, VAR_4[VAR_9], VAR_2, VAR_8);
}
