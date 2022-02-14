
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ macphymode; } ;
struct rtl_priv {TYPE_1__ rtlhal; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 scalar_t__ VAR_4 ;
 int* VAR_5 ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct rtl_priv*,int,int) ;

bool FUNC_3(struct ieee80211_hw *VAR_6)
{
 struct rtl_priv *VAR_7 = FUNC_1(VAR_6);
 u32 VAR_8;
 u32 VAR_9;
 u32 *VAR_10;

 FUNC_0(VAR_7, VAR_0, VAR_1, "Read Rtl819XMACPHY_Array\n");
 VAR_9 = VAR_2;
 VAR_10 = VAR_5;
 FUNC_0(VAR_7, VAR_0, VAR_1, "Img:Rtl819XMAC_Array\n");
 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8 = VAR_8 + 2)
  FUNC_2(VAR_7, VAR_10[VAR_8], (u8) VAR_10[VAR_8 + 1]);
 if (VAR_7->rtlhal.macphymode == VAR_4) {




  FUNC_2(VAR_7, VAR_3, 0x0B);
 } else {

  FUNC_2(VAR_7, VAR_3, 0x07);
 }
 return 1;
}
