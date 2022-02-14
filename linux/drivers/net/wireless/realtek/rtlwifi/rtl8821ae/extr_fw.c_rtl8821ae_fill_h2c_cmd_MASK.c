
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtl_hal {int fw_ready; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct ieee80211_hw*,int ,int ,int *) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int ,int) ;
 struct rtl_hal* FUNC_4 (int ) ;
 int FUNC_5 (struct ieee80211_hw*) ;

void FUNC_6(struct ieee80211_hw *VAR_0,
       u8 VAR_1, u32 VAR_2, u8 *VAR_3)
{
 struct rtl_hal *VAR_4 = FUNC_4(FUNC_5(VAR_0));
 u32 VAR_5[2];

 if (!VAR_4->fw_ready) {
  FUNC_0(1,
     "rtl8821ae: error H2C cmd because of Fw download fail!!!\n");
  return;
 }

 FUNC_3(VAR_5, 0, 8);
 FUNC_2(VAR_5, VAR_3, VAR_2);
 FUNC_1(VAR_0, VAR_1, VAR_2, (u8 *)&VAR_5);
}
