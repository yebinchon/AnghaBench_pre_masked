
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_2__ {scalar_t__ interfaceindex; } ;
struct rtl_priv {TYPE_1__ rtlhal; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*,size_t,int ,size_t) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_4,
  u32 *VAR_5, bool VAR_6, bool VAR_7)
{
 struct rtl_priv *VAR_8 = FUNC_1(VAR_4);
 u32 VAR_9;
 u32 VAR_10;

 FUNC_0(VAR_8, VAR_0, VAR_1, "ADDA ON.\n");
 VAR_9 = VAR_6 ? 0x04db25a4 : 0x0b1b25a4;
 if (VAR_6)
  VAR_9 = VAR_8->rtlhal.interfaceindex == 0 ?
      0x04db25a4 : 0x0b1b25a4;
 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++)
  FUNC_2(VAR_4, VAR_5[VAR_10], VAR_3, VAR_9);
}
