
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 scalar_t__ FUNC_2 (struct rtl_priv*,int ) ;
 int FUNC_3 (int) ;

void FUNC_4(struct ieee80211_hw *VAR_1)
{
 struct rtl_priv *VAR_2 = FUNC_1(VAR_1);
 u16 VAR_3 = 10000;
 u32 VAR_4;


 do {
  FUNC_3(10);

  VAR_4 = FUNC_2(VAR_2, VAR_0);
  if (VAR_4 == 0)
   break;
 } while (--VAR_3);

 if (VAR_3 == 0)
  FUNC_0("Set FW Cmd fail!!\n");
}
