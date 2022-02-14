
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


 size_t VAR_0 ;
 struct rtl_priv* FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct rtl_priv*,scalar_t__) ;
 int FUNC_2 (struct rtl_priv*,scalar_t__,int) ;

int FUNC_3(struct ieee80211_hw *VAR_1, u16 VAR_2, u8 *VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_0(VAR_1);
 u8 VAR_5 = 0;
 int VAR_6;

 FUNC_2(VAR_4, VAR_4->cfg->maps[VAR_0] + 1,
         (u8) (VAR_2 & 0xff));
 FUNC_2(VAR_4, VAR_4->cfg->maps[VAR_0] + 2,
         ((u8) ((VAR_2 >> 8) & 0x03)) |
         (FUNC_1(VAR_4,
          VAR_4->cfg->maps[VAR_0] + 2) &
   0xFC));

 FUNC_2(VAR_4, VAR_4->cfg->maps[VAR_0] + 3, 0x72);

 while (!(0x80 & FUNC_1(VAR_4,
          VAR_4->cfg->maps[VAR_0] + 3))
        && (VAR_5 < 100)) {
  VAR_5++;
 }

 if (VAR_5 < 100) {
  *VAR_3 = FUNC_1(VAR_4, VAR_4->cfg->maps[VAR_0]);
  VAR_6 = 1;
 } else {
  *VAR_3 = 0xff;
  VAR_6 = 0;
 }
 return VAR_6;
}
