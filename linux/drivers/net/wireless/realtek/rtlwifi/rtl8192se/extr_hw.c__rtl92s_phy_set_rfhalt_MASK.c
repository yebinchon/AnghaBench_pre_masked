
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_ps_ctl {scalar_t__ rfoff_reason; } ;
struct rtl_priv {int dummy; } ;
struct rtl_hal {scalar_t__ driver_going2unload; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct rtl_ps_ctl*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct ieee80211_hw*,int) ;
 int FUNC_3 (char*) ;
 struct rtl_hal* FUNC_4 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_5 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_6 (struct rtl_priv*) ;
 int FUNC_7 (struct rtl_priv*,int) ;
 int FUNC_8 (struct rtl_priv*,int,int) ;
 int FUNC_9 (struct rtl_priv*,int ,int) ;
 int FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(struct ieee80211_hw *VAR_12)
{
 struct rtl_priv *VAR_13 = FUNC_5(VAR_12);
 struct rtl_hal *VAR_14 = FUNC_4(FUNC_5(VAR_12));
 struct rtl_ps_ctl *VAR_15 = FUNC_6(FUNC_5(VAR_12));
 u8 VAR_16;

 if (VAR_14->driver_going2unload)
  FUNC_8(VAR_13, 0x560, 0x0);


 VAR_16 = FUNC_7(VAR_13, VAR_4);
 VAR_16 |= FUNC_0(0);
 FUNC_8(VAR_13, VAR_4, VAR_16);
 FUNC_8(VAR_13, VAR_9, 0x0);
 FUNC_8(VAR_13, VAR_11, 0xFF);
 FUNC_9(VAR_13, VAR_2, 0x57FC);
 FUNC_10(100);
 FUNC_9(VAR_13, VAR_2, 0x77FC);
 FUNC_8(VAR_13, VAR_5, 0x0);
 FUNC_10(10);
 FUNC_9(VAR_13, VAR_2, 0x37FC);
 FUNC_10(10);
 FUNC_9(VAR_13, VAR_2, 0x77FC);
 FUNC_10(10);
 FUNC_9(VAR_13, VAR_2, 0x57FC);
 FUNC_9(VAR_13, VAR_2, 0x0000);

 if (VAR_14->driver_going2unload) {
  VAR_16 = FUNC_7(VAR_13, (VAR_6 + 1));
  VAR_16 &= ~(FUNC_0(0));
  FUNC_8(VAR_13, VAR_6 + 1, VAR_16);
 }

 VAR_16 = FUNC_7(VAR_13, (VAR_10 + 1));





 if (VAR_16 & FUNC_0(7)) {
  VAR_16 &= ~(FUNC_0(6) | FUNC_0(7));
  if (!FUNC_2(VAR_12, VAR_16)) {
   FUNC_3("Switch ctrl path fail\n");
   return;
  }
 }


 if (VAR_15->rfoff_reason == VAR_7 &&
  !VAR_14->driver_going2unload) {

  FUNC_8(VAR_13, 0x03, 0xF9);

 } else {





  FUNC_8(VAR_13, 0x03, 0xF9);
 }

 FUNC_8(VAR_13, VAR_10 + 1, 0x70);
 FUNC_8(VAR_13, VAR_0 + 1, 0x68);
 FUNC_8(VAR_13, VAR_0, 0x00);
 FUNC_8(VAR_13, VAR_3, 0x34);
 FUNC_8(VAR_13, VAR_1, 0x0E);
 FUNC_1(VAR_15, VAR_8);

}
