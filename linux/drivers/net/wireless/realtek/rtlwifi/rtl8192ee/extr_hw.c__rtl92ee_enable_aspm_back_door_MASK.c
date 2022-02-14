
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct rtl_ps_ctl {scalar_t__ support_backdoor; } ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_2 (struct rtl_priv*) ;
 scalar_t__ FUNC_3 (struct rtl_priv*,scalar_t__) ;
 int FUNC_4 (struct rtl_priv*,int ) ;
 int FUNC_5 (struct rtl_priv*,scalar_t__,int) ;
 int FUNC_6 (struct rtl_priv*,int ,int) ;
 int FUNC_7 (struct rtl_priv*,scalar_t__,int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(struct ieee80211_hw *VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_1(VAR_3);
 struct rtl_ps_ctl *VAR_5 = FUNC_2(FUNC_1(VAR_3));
 u32 VAR_6 = 0, VAR_7 = 0;
 u8 VAR_8 = 0;

 FUNC_7(VAR_4, VAR_0, 0x78);
 FUNC_5(VAR_4, VAR_0 + 2, 0x2);
 VAR_8 = FUNC_3(VAR_4, VAR_0 + 2);
 VAR_7 = 0;
 while (VAR_8 && VAR_7 < 20) {
  FUNC_8(10);
  VAR_8 = FUNC_3(VAR_4, VAR_0 + 2);
  VAR_7++;
 }

 if (0 == VAR_8) {
  VAR_6 = FUNC_4(VAR_4, VAR_1);
  if ((VAR_6 & 0xff00) != 0x2000) {
   VAR_6 &= 0xffff00ff;
   FUNC_6(VAR_4, VAR_2,
     VAR_6 | FUNC_0(13));
   FUNC_7(VAR_4, VAR_0, 0xf078);
   FUNC_5(VAR_4, VAR_0 + 2, 0x1);

   VAR_8 = FUNC_3(VAR_4,
          VAR_0 + 2);
   VAR_7 = 0;
   while (VAR_8 && VAR_7 < 20) {
    FUNC_8(10);
    VAR_8 = FUNC_3(VAR_4,
           VAR_0 + 2);
    VAR_7++;
   }
  }
 }

 FUNC_7(VAR_4, VAR_0, 0x70c);
 FUNC_5(VAR_4, VAR_0 + 2, 0x2);
 VAR_8 = FUNC_3(VAR_4, VAR_0 + 2);
 VAR_7 = 0;
 while (VAR_8 && VAR_7 < 20) {
  FUNC_8(10);
  VAR_8 = FUNC_3(VAR_4, VAR_0 + 2);
  VAR_7++;
 }
 if (0 == VAR_8) {
  VAR_6 = FUNC_4(VAR_4, VAR_1);
  FUNC_6(VAR_4, VAR_2,
    VAR_6 | FUNC_0(31));
  FUNC_7(VAR_4, VAR_0, 0xf70c);
  FUNC_5(VAR_4, VAR_0 + 2, 0x1);
 }

 VAR_8 = FUNC_3(VAR_4, VAR_0 + 2);
 VAR_7 = 0;
 while (VAR_8 && VAR_7 < 20) {
  FUNC_8(10);
  VAR_8 = FUNC_3(VAR_4, VAR_0 + 2);
  VAR_7++;
 }

 FUNC_7(VAR_4, VAR_0, 0x718);
 FUNC_5(VAR_4, VAR_0 + 2, 0x2);
 VAR_8 = FUNC_3(VAR_4, VAR_0 + 2);
 VAR_7 = 0;
 while (VAR_8 && VAR_7 < 20) {
  FUNC_8(10);
  VAR_8 = FUNC_3(VAR_4, VAR_0 + 2);
  VAR_7++;
 }
 if (VAR_5->support_backdoor || (0 == VAR_8)) {
  VAR_6 = FUNC_4(VAR_4, VAR_1);
  FUNC_6(VAR_4, VAR_2,
    VAR_6 | FUNC_0(11) | FUNC_0(12));
  FUNC_7(VAR_4, VAR_0, 0xf718);
  FUNC_5(VAR_4, VAR_0 + 2, 0x1);
 }
 VAR_8 = FUNC_3(VAR_4, VAR_0 + 2);
 VAR_7 = 0;
 while (VAR_8 && VAR_7 < 20) {
  FUNC_8(10);
  VAR_8 = FUNC_3(VAR_4, VAR_0 + 2);
  VAR_7++;
 }
}
