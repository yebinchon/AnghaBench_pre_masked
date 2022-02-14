
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct ieee80211_hw {int dummy; } ;
typedef int __le32 ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

void FUNC_3(struct ieee80211_hw *VAR_0, u8 *VAR_1,
        u8 VAR_2)
{
 u8 VAR_3 = 0;
 u8 VAR_4 = 0;
 u16 VAR_5 = 0;
 u16 VAR_6 = 0;
 __le32 *VAR_7 = (__le32 *)VAR_1;

 if (VAR_7 == ((void*)0))
  return;

 VAR_5 = (u16)FUNC_2(VAR_7);

 VAR_3 = (u8)FUNC_0(VAR_7);

 VAR_4 = (u8)FUNC_1(VAR_7);

 while (VAR_5 == 0 && VAR_3 == 0 && VAR_4 == 0) {
  VAR_6++;
  VAR_5 = (u16)FUNC_2(VAR_7);
  VAR_3 = (u8)FUNC_0(VAR_7);
  VAR_4 = (u8)FUNC_1(VAR_7);

  if (VAR_6 > 20)
   break;
 }
}
