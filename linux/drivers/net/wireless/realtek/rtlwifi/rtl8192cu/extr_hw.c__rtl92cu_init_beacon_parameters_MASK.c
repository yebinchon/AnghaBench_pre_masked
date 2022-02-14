
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl_priv {int dummy; } ;
struct rtl_hal {int version; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct rtl_hal* FUNC_1 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct rtl_priv*,int ,int ) ;
 int FUNC_4 (struct rtl_priv*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_7)
{
 struct rtl_priv *VAR_8 = FUNC_2(VAR_7);
 struct rtl_hal *VAR_9 = FUNC_1(VAR_8);

 FUNC_4(VAR_8, VAR_4, 0x1010);


 FUNC_4(VAR_8, VAR_6, 0x6404);
 FUNC_3(VAR_8, VAR_5, VAR_1);
 FUNC_3(VAR_8, VAR_2, VAR_0);



 if (FUNC_0(VAR_9->version))
  FUNC_4(VAR_8, VAR_3, 0x660F);
 else
  FUNC_4(VAR_8, VAR_3, 0x66FF);
}
