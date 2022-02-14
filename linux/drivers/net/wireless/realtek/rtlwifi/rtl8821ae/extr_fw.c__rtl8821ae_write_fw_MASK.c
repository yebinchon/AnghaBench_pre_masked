
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum version_8821ae { ____Placeholder_version_8821ae } version_8821ae ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int*) ;
 int FUNC_3 (struct ieee80211_hw*,int,int *,int) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_3,
    enum version_8821ae VAR_4,
    u8 *VAR_5, u32 VAR_6)
{
 struct rtl_priv *VAR_7 = FUNC_4(VAR_3);
 u8 *VAR_8 = (u8 *)VAR_5;
 u32 VAR_9, VAR_10;
 u32 VAR_11, VAR_12;

 FUNC_0(VAR_7, VAR_0, VAR_1, "FW size is %d bytes,\n", VAR_6);

 FUNC_2(VAR_8, &VAR_6);

 VAR_9 = VAR_6 / VAR_2;
 VAR_10 = VAR_6 % VAR_2;

 if (VAR_9 > 8)
  FUNC_1("Page numbers should not greater then 8\n");

 for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
  VAR_12 = VAR_11 * VAR_2;
  FUNC_3(VAR_3, VAR_11, (VAR_8 + VAR_12),
      VAR_2);
 }

 if (VAR_10) {
  VAR_12 = VAR_9 * VAR_2;
  VAR_11 = VAR_9;
  FUNC_3(VAR_3, VAR_11, (VAR_8 + VAR_12), VAR_10);
 }
}
