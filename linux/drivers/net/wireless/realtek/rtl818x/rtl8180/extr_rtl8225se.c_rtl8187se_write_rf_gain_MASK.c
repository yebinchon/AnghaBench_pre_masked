
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_hw {int dummy; } ;


 int* VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ieee80211_hw*,int,int) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 <= 36; VAR_2++) {
  FUNC_1(VAR_1, 0x01, VAR_2); FUNC_0(1);
  FUNC_1(VAR_1, 0x02, VAR_0[VAR_2]); FUNC_0(1);
 }
}
