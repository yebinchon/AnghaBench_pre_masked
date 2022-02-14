
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (int *) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;

__attribute__((used)) static bool FUNC_3(struct ieee80211_hw *VAR_4, __le32 *VAR_5)
{
 struct rtl_priv *VAR_6 = FUNC_2(VAR_4);
 u8 VAR_7 = 0;

 VAR_7 = FUNC_1(VAR_5);

 FUNC_0(VAR_6, VAR_0, VAR_1, "rx_rate=0x%02x.\n", VAR_7);

 if ((VAR_7 >= VAR_2) && (VAR_7 <= VAR_3))
  return 1;
 return 0;
}
