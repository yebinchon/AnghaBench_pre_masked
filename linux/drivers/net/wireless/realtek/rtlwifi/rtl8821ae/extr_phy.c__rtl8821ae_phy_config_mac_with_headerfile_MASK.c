
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl_priv {int dummy; } ;
struct rtl_hal {scalar_t__ hw_type; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_1 (struct ieee80211_hw*,int *,int ,int ) ;
 struct rtl_hal* FUNC_2 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 int VAR_8 ;

__attribute__((used)) static bool FUNC_4(struct ieee80211_hw *VAR_9)
{
 struct rtl_priv *VAR_10 = FUNC_3(VAR_9);
 struct rtl_hal *VAR_11 = FUNC_2(VAR_10);
 u32 VAR_12;
 u32 *VAR_13;

 FUNC_0(VAR_10, VAR_0, VAR_2, "Read MAC_REG_Array\n");
 if (VAR_11->hw_type == VAR_3) {
  VAR_12 = VAR_6;
  VAR_13 = VAR_7;
 } else {
  VAR_12 = VAR_4;
  VAR_13 = VAR_5;
 }
 FUNC_0(VAR_10, VAR_0, VAR_1,
   "Img: MAC_REG_ARRAY LEN %d\n", VAR_12);

 return FUNC_1(VAR_9,
   VAR_13, VAR_12, VAR_8);
}
