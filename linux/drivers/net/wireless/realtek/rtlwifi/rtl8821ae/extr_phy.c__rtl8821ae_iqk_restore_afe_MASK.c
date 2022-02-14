
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct ieee80211_hw*,int,int ,int) ;
 int FUNC_4 (struct rtl_priv*,int,int) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_2,
           u32 *VAR_3, u32 *VAR_4,
           u32 VAR_5)
{
 u32 VAR_6;
 struct rtl_priv *VAR_7 = FUNC_2(VAR_2);

 FUNC_3(VAR_2, 0x82c, FUNC_0(31), 0x0);

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
  FUNC_4(VAR_7, VAR_4[VAR_6], VAR_3[VAR_6]);
 FUNC_3(VAR_2, 0x82c, FUNC_0(31), 0x1);
 FUNC_4(VAR_7, 0xc80, 0x0);
 FUNC_4(VAR_7, 0xc84, 0x0);
 FUNC_4(VAR_7, 0xc88, 0x0);
 FUNC_4(VAR_7, 0xc8c, 0x3c000000);
 FUNC_4(VAR_7, 0xc90, 0x00000080);
 FUNC_4(VAR_7, 0xc94, 0x00000000);
 FUNC_4(VAR_7, 0xcc4, 0x20040000);
 FUNC_4(VAR_7, 0xcc8, 0x20000000);
 FUNC_4(VAR_7, 0xcb8, 0x0);
 FUNC_1(VAR_7, VAR_0, VAR_1, "RestoreAFE Success!!!!\n");
}
