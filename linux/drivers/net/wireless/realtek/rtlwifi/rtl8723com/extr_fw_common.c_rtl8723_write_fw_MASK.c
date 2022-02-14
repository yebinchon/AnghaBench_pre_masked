
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum version_8723e { ____Placeholder_version_8723e } version_8723e ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int*,int*) ;
 int FUNC_3 (struct ieee80211_hw*,int,int*,int) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;

void FUNC_5(struct ieee80211_hw *VAR_3,
        enum version_8723e VAR_4,
        u8 *VAR_5, u32 VAR_6, u8 VAR_7)
{
 struct rtl_priv *VAR_8 = FUNC_4(VAR_3);
 u8 *VAR_9 = VAR_5;
 u32 VAR_10, VAR_11;
 u32 VAR_12, VAR_13;

 FUNC_0(VAR_8, VAR_0, VAR_1, "FW size is %d bytes,\n", VAR_6);

 FUNC_2(VAR_9, &VAR_6);

 VAR_10 = VAR_6 / VAR_2;
 VAR_11 = VAR_6 % VAR_2;

 if (VAR_10 > VAR_7) {
  FUNC_1("Page numbers should not greater than %d\n",
         VAR_7);
 }
 for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
  VAR_13 = VAR_12 * VAR_2;
  FUNC_3(VAR_3, VAR_12, (VAR_9 + VAR_13),
      VAR_2);
 }

 if (VAR_11) {
  VAR_13 = VAR_10 * VAR_2;
  VAR_12 = VAR_10;
  FUNC_3(VAR_3, VAR_12, (VAR_9 + VAR_13), VAR_11);
 }
 FUNC_0(VAR_8, VAR_0, VAR_1, "FW write done.\n");
}
