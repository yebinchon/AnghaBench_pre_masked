
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ieee80211_hw {struct adm8211_priv* priv; } ;
struct adm8211_priv {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct ieee80211_hw*,unsigned int,int ) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_2)
{
 struct adm8211_priv *VAR_3 = VAR_2->priv;
 u32 VAR_4 = FUNC_0(VAR_1);
 unsigned int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  FUNC_2(VAR_2, VAR_5, 0);

 FUNC_1(VAR_1, VAR_4);
}
