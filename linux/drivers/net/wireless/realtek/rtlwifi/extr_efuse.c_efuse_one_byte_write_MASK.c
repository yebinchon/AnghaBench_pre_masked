
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct rtl_priv {TYPE_1__* cfg; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_2__ {scalar_t__* maps; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int,int) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct rtl_priv*,scalar_t__) ;
 int FUNC_3 (struct rtl_priv*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_4(struct ieee80211_hw *VAR_3, u16 VAR_4, u8 VAR_5)
{
 struct rtl_priv *VAR_6 = FUNC_1(VAR_3);
 u8 VAR_7 = 0;

 FUNC_0(VAR_6, VAR_0, VAR_1,
   "Addr = %x Data=%x\n", VAR_4, VAR_5);

 FUNC_3(VAR_6,
         VAR_6->cfg->maps[VAR_2] + 1, (u8) (VAR_4 & 0xff));
 FUNC_3(VAR_6, VAR_6->cfg->maps[VAR_2] + 2,
         (FUNC_2(VAR_6,
    VAR_6->cfg->maps[VAR_2] +
    2) & 0xFC) | (u8) ((VAR_4 >> 8) & 0x03));

 FUNC_3(VAR_6, VAR_6->cfg->maps[VAR_2], VAR_5);
 FUNC_3(VAR_6, VAR_6->cfg->maps[VAR_2] + 3, 0xF2);

 while ((0x80 & FUNC_2(VAR_6,
         VAR_6->cfg->maps[VAR_2] + 3))
        && (VAR_7 < 100)) {
  VAR_7++;
 }

 if (VAR_7 < 100)
  return 1;
 return 0;
}
