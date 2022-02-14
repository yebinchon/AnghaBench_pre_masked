
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl_hal {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct rtl_hal*) ;
 struct rtl_hal* FUNC_2 (int ) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct ieee80211_hw*,int ,int,int) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_4,
       bool VAR_5, bool VAR_6)
{
 struct rtl_hal *VAR_7 = FUNC_2(FUNC_3(VAR_4));

 if (FUNC_1(VAR_7)) {
  FUNC_4(VAR_4, VAR_0, FUNC_0(23), 0x01);
  FUNC_4(VAR_4, VAR_1, FUNC_0(13), 0x01);
 }
 if (VAR_6) {
  if (VAR_5)
   FUNC_4(VAR_4, VAR_3,
          FUNC_0(5) | FUNC_0(6), 0x1);
  else
   FUNC_4(VAR_4, VAR_3,
          FUNC_0(5) | FUNC_0(6), 0x2);
 } else {
  if (VAR_5)
   FUNC_4(VAR_4, VAR_2, 0x300, 0x2);
  else
   FUNC_4(VAR_4, VAR_2, 0x300, 0x1);
 }
}
