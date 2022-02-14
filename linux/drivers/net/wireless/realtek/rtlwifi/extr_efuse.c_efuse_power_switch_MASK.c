
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct rtl_priv {TYPE_1__* cfg; } ;
struct rtl_hal {scalar_t__ hw_type; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_2__ {int* maps; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 struct rtl_hal* FUNC_1 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct rtl_priv*,int) ;
 int FUNC_4 (struct rtl_priv*,int) ;
 int FUNC_5 (struct rtl_priv*,int,int) ;
 int FUNC_6 (struct rtl_priv*,int,int) ;

void FUNC_7(struct ieee80211_hw *VAR_15, u8 VAR_16, u8 VAR_17)
{
 struct rtl_priv *VAR_18 = FUNC_2(VAR_15);
 struct rtl_hal *VAR_19 = FUNC_1(FUNC_2(VAR_15));
 u8 VAR_20;
 u16 VAR_21;

 if (VAR_17 && (VAR_19->hw_type != VAR_9)) {
  if (VAR_19->hw_type != VAR_7 &&
      VAR_19->hw_type != VAR_8) {
   FUNC_5(VAR_18,
           VAR_18->cfg->maps[VAR_0], 0x69);
  } else {
   VAR_21 =
     FUNC_4(VAR_18,
     VAR_18->cfg->maps[VAR_13]);
   if (!(VAR_21 & VAR_18->cfg->maps[VAR_5])) {
    VAR_21 |= VAR_18->cfg->maps[VAR_5];
    FUNC_6(VAR_18,
            VAR_18->cfg->maps[VAR_13],
            VAR_21);
   }
  }
  VAR_21 = FUNC_4(VAR_18,
           VAR_18->cfg->maps[VAR_12]);
  if (!(VAR_21 & VAR_18->cfg->maps[VAR_3])) {
   VAR_21 |= VAR_18->cfg->maps[VAR_3];
   FUNC_6(VAR_18,
           VAR_18->cfg->maps[VAR_12], VAR_21);
  }

  VAR_21 = FUNC_4(VAR_18, VAR_18->cfg->maps[VAR_11]);
  if ((!(VAR_21 & VAR_18->cfg->maps[VAR_4])) ||
      (!(VAR_21 & VAR_18->cfg->maps[VAR_1]))) {
   VAR_21 |= (VAR_18->cfg->maps[VAR_4] |
       VAR_18->cfg->maps[VAR_1]);
   FUNC_6(VAR_18,
           VAR_18->cfg->maps[VAR_11], VAR_21);
  }
 }

 if (VAR_17) {
  if (VAR_16) {
   VAR_20 = FUNC_3(VAR_18,
      VAR_18->cfg->maps[VAR_6] +
      3);

   if (VAR_19->hw_type == VAR_10) {
    VAR_20 &= ~(FUNC_0(3) | FUNC_0(4) | FUNC_0(5) | FUNC_0(6));
    VAR_20 |= (VAR_14 << 3);
   } else if (VAR_19->hw_type != VAR_9) {
    VAR_20 &= 0x0F;
    VAR_20 |= (VAR_14 << 4);
   }

   FUNC_5(VAR_18,
           VAR_18->cfg->maps[VAR_6] + 3,
           (VAR_20 | 0x80));
  }

  if (VAR_19->hw_type == VAR_9) {
   FUNC_5(VAR_18, VAR_18->cfg->maps[VAR_2],
           0x03);
  }
 } else {
  if (VAR_19->hw_type != VAR_7 &&
      VAR_19->hw_type != VAR_8)
   FUNC_5(VAR_18,
           VAR_18->cfg->maps[VAR_0], 0);

  if (VAR_16) {
   VAR_20 = FUNC_3(VAR_18,
      VAR_18->cfg->maps[VAR_6] +
      3);
   FUNC_5(VAR_18,
           VAR_18->cfg->maps[VAR_6] + 3,
           (VAR_20 & 0x7F));
  }

  if (VAR_19->hw_type == VAR_9) {
   FUNC_5(VAR_18, VAR_18->cfg->maps[VAR_2],
           0x02);
  }
 }
}
