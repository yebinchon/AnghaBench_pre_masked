
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,int) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct rtl_priv*,scalar_t__) ;
 int FUNC_4 (struct rtl_priv*,scalar_t__,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static u8 FUNC_6(struct ieee80211_hw *VAR_1, u8 VAR_2)
{
 struct rtl_priv *VAR_3 = FUNC_2(VAR_1);
 u8 VAR_4 = 100;
 bool VAR_5 = 0;
 u8 VAR_6;

 FUNC_4(VAR_3, VAR_0 + 1, VAR_2);


 FUNC_5(400);


 VAR_6 = FUNC_3(VAR_3, VAR_0 + 1);
 VAR_5 = ((VAR_6 & FUNC_0(7)) == (VAR_2 & FUNC_0(7)));

 if ((VAR_2 & (FUNC_0(6) | FUNC_0(7))) == 0) {
  VAR_4 = 100;
  VAR_6 = 0;

  while (1) {
   VAR_4--;
   VAR_6 = FUNC_3(VAR_3, VAR_0 + 1);

   if ((VAR_6 & FUNC_0(6)))
    break;

   FUNC_1("wait for BIT(6) return value %x\n", VAR_6);

   if (VAR_4 == 0)
    break;
   FUNC_5(10);
  }

  if (VAR_4 == 0)
   VAR_5 = 0;
  else
   VAR_5 = 1;
 }

 return VAR_5;
}
