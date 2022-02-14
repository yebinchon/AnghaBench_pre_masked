
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct rtl_phy {scalar_t__ num_total_rfpath; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct ieee80211_hw*,scalar_t__,int ,scalar_t__,scalar_t__) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*,int,int,int) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_5,
          u8 VAR_6, u8 VAR_7, u8 VAR_8)
{
 struct rtl_priv *VAR_9 = FUNC_1(VAR_5);
 struct rtl_phy *VAR_10 = &VAR_9->phy;

 u8 VAR_11;
 u32 VAR_12, VAR_13, VAR_14;

 if (VAR_8 >= VAR_10->num_total_rfpath)
  return;

 VAR_13 = 0;
 if (VAR_8 == VAR_3) {
  VAR_12 =
   FUNC_0(VAR_5, VAR_3,
   VAR_0, VAR_6, VAR_7);
  VAR_14 = VAR_1;
 } else {
  VAR_12 =
   FUNC_0(VAR_5, VAR_4,
   VAR_0, VAR_6, VAR_7);
  VAR_14 = VAR_2;
 }

 for (VAR_11 = 0; VAR_11 < 3; VAR_11++) {
  if (VAR_11 == 0)
   VAR_12 = VAR_12 - 10;
  else if (VAR_11 == 1)
   VAR_12 = VAR_12 - 8;
  else
   VAR_12 = VAR_12 - 6;

  VAR_13 |= (((VAR_12 > 2) ? (VAR_12) : 2) << (VAR_11 * 8));
 }
 FUNC_2(VAR_5, VAR_14, 0xffffff, VAR_13);
}
