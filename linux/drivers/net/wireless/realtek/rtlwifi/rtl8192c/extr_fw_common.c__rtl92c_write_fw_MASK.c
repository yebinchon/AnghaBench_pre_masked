
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtl_priv {int dummy; } ;
struct rtl_hal {scalar_t__ hw_type; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum version_8192c { ____Placeholder_version_8192c } version_8192c ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int*) ;
 int FUNC_4 (struct ieee80211_hw*,int *,int) ;
 int FUNC_5 (struct ieee80211_hw*,int,int *,int) ;
 struct rtl_hal* FUNC_6 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_7 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_8(struct ieee80211_hw *VAR_4,
        enum version_8192c VAR_5, u8 *VAR_6, u32 VAR_7)
{
 struct rtl_priv *VAR_8 = FUNC_7(VAR_4);
 struct rtl_hal *VAR_9 = FUNC_6(FUNC_7(VAR_4));
 bool VAR_10;
 u8 *VAR_11 = (u8 *)VAR_6;

 FUNC_1(VAR_8, VAR_0, VAR_1, "FW size is %d bytes,\n", VAR_7);
 VAR_10 = FUNC_0(VAR_5);
 if (VAR_10) {
  u32 VAR_12, VAR_13;
  u32 VAR_14, VAR_15;

  if (VAR_9->hw_type == VAR_3)
   FUNC_3(VAR_11, &VAR_7);

  VAR_12 = VAR_7 / VAR_2;
  VAR_13 = VAR_7 % VAR_2;

  if (VAR_12 > 4)
   FUNC_2("Page numbers should not greater then 4\n");

  for (VAR_14 = 0; VAR_14 < VAR_12; VAR_14++) {
   VAR_15 = VAR_14 * VAR_2;
   FUNC_5(VAR_4, VAR_14, (VAR_11 + VAR_15),
       VAR_2);
  }

  if (VAR_13) {
   VAR_15 = VAR_12 * VAR_2;
   VAR_14 = VAR_12;
   FUNC_5(VAR_4, VAR_14, (VAR_11 + VAR_15),
       VAR_13);
  }
 } else {
  FUNC_4(VAR_4, VAR_6, VAR_7);
 }
}
