
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct rtl_wow_pattern {int crc; scalar_t__ type; int* mask; } ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,int,int ,int) ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_2 (int,char*,int) ;
 int VAR_13 ;
 int VAR_14 ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct rtl_priv*,int ) ;
 int FUNC_5 (struct rtl_priv*,int ,int ) ;
 int FUNC_6 (struct rtl_priv*,int ,int) ;
 int FUNC_7 (struct rtl_priv*,int ,int) ;
 int FUNC_8 (int) ;

void FUNC_9(struct ieee80211_hw *VAR_15,
      struct rtl_wow_pattern *VAR_16,
      u8 VAR_17)
{
 struct rtl_priv *VAR_18 = FUNC_3(VAR_15);
 u32 VAR_19 = 0;
 u8 VAR_20 = 0;
 u16 VAR_21;
 u8 VAR_22, VAR_23 = 0;
 u16 VAR_24;
 u16 VAR_25;




 VAR_25 = VAR_4 / 128;

 VAR_24 = VAR_25 * 128;


 FUNC_5(VAR_18, VAR_9, VAR_11);
 for (VAR_20 = 0; VAR_20 < VAR_13; VAR_20++) {
  VAR_21 = (VAR_24 + VAR_17 * VAR_14 + VAR_20 * 4) >> 3;

  FUNC_7(VAR_18, VAR_6, VAR_21);

  if (VAR_20 == 0) {
   VAR_19 = FUNC_0(31) | VAR_16->crc;

   if (VAR_16->type == VAR_12)
    VAR_19 |= FUNC_0(24);
   else if (VAR_16->type == VAR_5)
    VAR_19 |= FUNC_0(25);
   else if (VAR_16->type == VAR_0)
    VAR_19 |= FUNC_0(26);

   FUNC_6(VAR_18, VAR_8, VAR_19);
   FUNC_1(VAR_18, VAR_1, VAR_2,
     "WRITE entry[%d] 0x%x: %x\n", VAR_20,
      VAR_8, VAR_19);


   FUNC_7(VAR_18, VAR_10, 0x0f01);
  } else if (VAR_20 == 2 || VAR_20 == 4) {
   VAR_19 = VAR_16->mask[VAR_20 - 2];

   FUNC_6(VAR_18, VAR_8, VAR_19);
   FUNC_1(VAR_18, VAR_1, VAR_2,
     "WRITE entry[%d] 0x%x: %x\n", VAR_20,
      VAR_8, VAR_19);

   FUNC_7(VAR_18, VAR_10, 0x0f01);
  } else if (VAR_20 == 3 || VAR_20 == 5) {
   VAR_19 = VAR_16->mask[VAR_20 - 2];

   FUNC_6(VAR_18, VAR_7, VAR_19);
   FUNC_1(VAR_18, VAR_1, VAR_2,
     "WRITE entry[%d] 0x%x: %x\n", VAR_20,
      VAR_7, VAR_19);

   FUNC_7(VAR_18, VAR_10, 0xf001);
  }

  VAR_23 = 0;
  do {
   VAR_22 = FUNC_4(VAR_18, VAR_10);
   FUNC_8(2);
   VAR_23++;
  } while (VAR_22 && VAR_23 < 100);

  FUNC_2((VAR_23 >= 100),
     "rtl8821ae: Write wake up frame mask FAIL %d value!\n",
     VAR_22);
 }

 FUNC_5(VAR_18, VAR_9,
         VAR_3);
}
