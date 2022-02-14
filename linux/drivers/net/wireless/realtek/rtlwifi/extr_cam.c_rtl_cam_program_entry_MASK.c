
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct rtl_priv {TYPE_1__* cfg; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_2__ {int * maps; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,scalar_t__*,int) ;
 int FUNC_2 (struct rtl_priv*,int ,int ,char*,int,...) ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct rtl_priv*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_6, u32 VAR_7,
      u8 *VAR_8, u8 *VAR_9, u16 VAR_10)
{
 struct rtl_priv *VAR_11 = FUNC_3(VAR_6);

 u32 VAR_12;
 u32 VAR_13 = 0;
 int VAR_14;

 FUNC_1(VAR_11, VAR_1, VAR_2, "Key content :",
        VAR_9, 16);


 for (VAR_14 = VAR_0 - 1; VAR_14 >= 0; VAR_14--) {
  VAR_12 = VAR_14 + VAR_0 * VAR_7;
  VAR_12 = VAR_12 | FUNC_0(31) | FUNC_0(16);

  if (VAR_14 == 0) {
   VAR_13 = (u32) (*(VAR_8 + 0)) << 16 |
       (u32) (*(VAR_8 + 1)) << 24 | (u32) VAR_10;

   FUNC_4(VAR_11, VAR_11->cfg->maps[VAR_5],
     VAR_13);
   FUNC_4(VAR_11, VAR_11->cfg->maps[VAR_4],
     VAR_12);

   FUNC_2(VAR_11, VAR_1, VAR_3,
     "WRITE %x: %x\n",
     VAR_11->cfg->maps[VAR_5], VAR_13);
   FUNC_2(VAR_11, VAR_1, VAR_3,
     "The Key ID is %d\n", VAR_7);
   FUNC_2(VAR_11, VAR_1, VAR_3,
     "WRITE %x: %x\n",
     VAR_11->cfg->maps[VAR_4], VAR_12);

  } else if (VAR_14 == 1) {

   VAR_13 = (u32) (*(VAR_8 + 5)) << 24 |
       (u32) (*(VAR_8 + 4)) << 16 |
       (u32) (*(VAR_8 + 3)) << 8 |
       (u32) (*(VAR_8 + 2));

   FUNC_4(VAR_11, VAR_11->cfg->maps[VAR_5],
     VAR_13);
   FUNC_4(VAR_11, VAR_11->cfg->maps[VAR_4],
     VAR_12);

   FUNC_2(VAR_11, VAR_1, VAR_3,
     "WRITE A4: %x\n", VAR_13);
   FUNC_2(VAR_11, VAR_1, VAR_3,
     "WRITE A0: %x\n", VAR_12);

  } else {

   VAR_13 =
       (u32) (*(VAR_9 + (VAR_14 * 4 - 8) + 3)) <<
       24 | (u32) (*(VAR_9 + (VAR_14 * 4 - 8) + 2))
       << 16 |
       (u32) (*(VAR_9 + (VAR_14 * 4 - 8) + 1)) << 8
       | (u32) (*(VAR_9 + (VAR_14 * 4 - 8) + 0));

   FUNC_4(VAR_11, VAR_11->cfg->maps[VAR_5],
     VAR_13);
   FUNC_4(VAR_11, VAR_11->cfg->maps[VAR_4],
     VAR_12);

   FUNC_2(VAR_11, VAR_1, VAR_3,
     "WRITE A4: %x\n", VAR_13);
   FUNC_2(VAR_11, VAR_1, VAR_3,
     "WRITE A0: %x\n", VAR_12);
  }
 }

 FUNC_2(VAR_11, VAR_1, VAR_3,
   "after set key, usconfig:%x\n", VAR_10);
}
