
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ieee80211_hw {struct adm8211_priv* priv; } ;
struct adm8211_priv {int dummy; } ;
typedef int __le32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_2, const u8 *VAR_3)
{
 struct adm8211_priv *VAR_4 = VAR_2->priv;
 u32 VAR_5;

 FUNC_1(VAR_1, FUNC_2(*(__le32 *)VAR_3));
 VAR_5 = FUNC_0(VAR_0);
 VAR_5 &= 0x0000ffff;
 VAR_5 |= (VAR_3[4] << 16) | (VAR_3[5] << 24);
 FUNC_1(VAR_0, VAR_5);
}
