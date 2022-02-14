
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct rtl_hal {scalar_t__ macphymode; scalar_t__ interfaceindex; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 struct rtl_hal* FUNC_1 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct rtl_priv*,int ) ;
 int FUNC_4 (struct rtl_priv*,int ,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

bool FUNC_7(struct ieee80211_hw *VAR_7)
{
 struct rtl_priv *VAR_8 = FUNC_2(VAR_7);
 struct rtl_hal *VAR_9 = FUNC_1(FUNC_2(VAR_7));
 u8 VAR_10;
 unsigned long VAR_11;

 if (VAR_9->macphymode == VAR_5) {
  VAR_10 = FUNC_3(VAR_8, VAR_2);
  FUNC_4(VAR_8, VAR_2, VAR_10 & (~VAR_0));
  return 1;
 }
 FUNC_5(&VAR_6, VAR_11);
 if (VAR_9->interfaceindex == 0) {
  VAR_10 = FUNC_3(VAR_8, VAR_2);
  FUNC_4(VAR_8, VAR_2, VAR_10 & (~VAR_0));
  VAR_10 = FUNC_3(VAR_8, VAR_3);
  VAR_10 &= VAR_1;
 } else {
  VAR_10 = FUNC_3(VAR_8, VAR_3);
  FUNC_4(VAR_8, VAR_3, VAR_10 & (~VAR_1));
  VAR_10 = FUNC_3(VAR_8, VAR_2);
  VAR_10 &= VAR_0;
 }
 if (VAR_10) {
  FUNC_6(&VAR_6, VAR_11);
  return 0;
 }
 VAR_10 = FUNC_3(VAR_8, VAR_4);
 VAR_10 |= FUNC_0(7);
 FUNC_4(VAR_8, VAR_4, VAR_10);
 FUNC_6(&VAR_6, VAR_11);
 return 1;
}
