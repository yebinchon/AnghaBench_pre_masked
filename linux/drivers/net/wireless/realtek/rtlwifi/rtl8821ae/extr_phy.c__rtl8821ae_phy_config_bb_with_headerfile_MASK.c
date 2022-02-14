
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct rtl_priv {int dummy; } ;
struct rtl_hal {scalar_t__ hw_type; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 int * VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 int FUNC_0 (struct ieee80211_hw*,int *,int ,int ) ;
 int VAR_11 ;
 struct rtl_hal* FUNC_1 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int VAR_12 ;

__attribute__((used)) static bool FUNC_3(struct ieee80211_hw *VAR_13,
           u8 VAR_14)
{
 struct rtl_priv *VAR_15 = FUNC_2(VAR_13);
 struct rtl_hal *VAR_16 = FUNC_1(VAR_15);
 u32 *VAR_17;
 u16 VAR_18;

 if (VAR_14 == VAR_1) {
  if (VAR_16->hw_type == VAR_2) {
   VAR_18 = VAR_5;
   VAR_17 = VAR_6;
  } else {
   VAR_18 = VAR_9;
   VAR_17 = VAR_10;
  }

  return FUNC_0(VAR_13,
    VAR_17, VAR_18,
    VAR_11);
 } else if (VAR_14 == VAR_0) {
  if (VAR_16->hw_type == VAR_2) {
   VAR_18 = VAR_3;
   VAR_17 = VAR_4;
  } else {
   VAR_18 = VAR_7;
   VAR_17 = VAR_8;
  }

  return FUNC_0(VAR_13,
    VAR_17, VAR_18,
    VAR_12);
 }
 return 1;
}
