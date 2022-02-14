
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtl_priv {int dummy; } ;
struct rtl_hal {scalar_t__ hw_type; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum version_8192d { ____Placeholder_version_8192d } version_8192d ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int*) ;
 int FUNC_3 (struct ieee80211_hw*,int,int *,int) ;
 struct rtl_hal* FUNC_4 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_5 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_hw *VAR_4,
        enum version_8192d VAR_5, u8 *VAR_6, u32 VAR_7)
{
 struct rtl_priv *VAR_8 = FUNC_5(VAR_4);
 struct rtl_hal *VAR_9 = FUNC_4(FUNC_5(VAR_4));
 u8 *VAR_10 = VAR_6;
 u32 VAR_11, VAR_12;
 u32 VAR_13, VAR_14;

 FUNC_0(VAR_8, VAR_0, VAR_1, "FW size is %d bytes,\n", VAR_7);
 if (VAR_9->hw_type == VAR_3)
  FUNC_2(VAR_10, &VAR_7);
 VAR_11 = VAR_7 / VAR_2;
 VAR_12 = VAR_7 % VAR_2;
 if (VAR_11 > 8)
  FUNC_1("Page numbers should not greater then 8\n");
 for (VAR_13 = 0; VAR_13 < VAR_11; VAR_13++) {
  VAR_14 = VAR_13 * VAR_2;
  FUNC_3(VAR_4, VAR_13, (VAR_10 + VAR_14),
      VAR_2);
 }
 if (VAR_12) {
  VAR_14 = VAR_11 * VAR_2;
  VAR_13 = VAR_11;
  FUNC_3(VAR_4, VAR_13, (VAR_10 + VAR_14), VAR_12);
 }
}
