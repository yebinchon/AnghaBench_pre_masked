
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_hw {int dummy; } ;


 int* VAR_0 ;
 int FUNC_0 (struct ieee80211_hw*,int,int) ;

__attribute__((used)) static void FUNC_1(struct ieee80211_hw *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < 128; VAR_2++) {
  FUNC_0(VAR_1, 0xF, VAR_0[VAR_2]);
  FUNC_0(VAR_1, 0xE, VAR_2+0x80);
  FUNC_0(VAR_1, 0xE, 0);
 }
}
