
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rtl8187_priv {scalar_t__ asic_rev; } ;
struct ieee80211_hw {struct rtl8187_priv* priv; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ieee80211_hw*,int ,int ) ;
 int FUNC_2 (struct ieee80211_hw*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_0, u8 VAR_1, u16 VAR_2)
{
 struct rtl8187_priv *VAR_3 = VAR_0->priv;

 if (VAR_3->asic_rev)
  FUNC_1(VAR_0, VAR_1, FUNC_0(VAR_2));
 else
  FUNC_2(VAR_0, VAR_1, VAR_2);
}
