
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ieee80211_channel {int dummy; } ;
struct ath5k_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath5k_hw*,int ,int ) ;
 int FUNC_1 (struct ieee80211_channel*) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int
FUNC_3(struct ath5k_hw *VAR_2,
  struct ieee80211_channel *VAR_3)
{
 u32 VAR_4;




 VAR_4 = FUNC_1(VAR_3);
 FUNC_0(VAR_2, VAR_4, VAR_0);
 FUNC_0(VAR_2, 0, VAR_1);
 FUNC_2(1000, 1500);

 return 0;
}
