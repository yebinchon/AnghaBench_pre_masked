
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ieee80211_hw {struct ath5k_hw* priv; } ;
struct ath5k_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ath5k_hw*,int ) ;

__attribute__((used)) static int
FUNC_1(struct ieee80211_hw *VAR_4, u32 VAR_5, u32 VAR_6)
{
 struct ath5k_hw *VAR_7 = VAR_4->priv;

 if (VAR_5 == 1 && VAR_6 == 1)
  FUNC_0(VAR_7, VAR_1);
 else if (VAR_5 == 2 && VAR_6 == 2)
  FUNC_0(VAR_7, VAR_2);
 else if ((VAR_5 & 3) == 3 && (VAR_6 & 3) == 3)
  FUNC_0(VAR_7, VAR_0);
 else
  return -VAR_3;
 return 0;
}
