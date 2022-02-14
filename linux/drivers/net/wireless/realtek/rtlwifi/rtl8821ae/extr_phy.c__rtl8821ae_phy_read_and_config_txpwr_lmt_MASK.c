
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtl_priv {int dummy; } ;
struct rtl_hal {scalar_t__ hw_type; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int ** VAR_3 ;
 int VAR_4 ;
 int ** VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_1 (struct ieee80211_hw*,int *,int *,int *,int *,int *,int *,int *) ;
 struct rtl_hal* FUNC_2 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_7)
{
 struct rtl_priv *VAR_8 = FUNC_3(VAR_7);
 struct rtl_hal *VAR_9 = FUNC_2(VAR_8);
 u32 VAR_10 = 0;
 u32 VAR_11;
 u8 **VAR_12;

 if (VAR_9->hw_type == VAR_2) {
  VAR_11 = VAR_4;
  VAR_12 = VAR_3;
 } else {
  VAR_11 = VAR_6;
  VAR_12 = VAR_5;
 }

 FUNC_0(VAR_8, VAR_0, VAR_1,
   "\n");

 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10 += 7) {
  u8 *VAR_13 = VAR_12[VAR_10];
  u8 *VAR_14 = VAR_12[VAR_10+1];
  u8 *VAR_15 = VAR_12[VAR_10+2];
  u8 *VAR_16 = VAR_12[VAR_10+3];
  u8 *VAR_17 = VAR_12[VAR_10+4];
  u8 *VAR_18 = VAR_12[VAR_10+5];
  u8 *VAR_19 = VAR_12[VAR_10+6];

  FUNC_1(VAR_7, VAR_13, VAR_14,
         VAR_15, VAR_16, VAR_17,
         VAR_18, VAR_19);
 }
}
