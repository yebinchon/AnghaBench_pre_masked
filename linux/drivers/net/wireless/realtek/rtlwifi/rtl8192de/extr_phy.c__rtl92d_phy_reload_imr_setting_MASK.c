
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ current_bandtype; int load_imrandiqk_setting_for2g; } ;
struct rtl_priv {TYPE_1__ rtlhal; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum radio_path { ____Placeholder_radio_path } radio_path ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,...) ;
 int *** VAR_12 ;
 int * VAR_13 ;
 int FUNC_2 (struct ieee80211_hw*,unsigned long*) ;
 int FUNC_3 (struct ieee80211_hw*,unsigned long*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct ieee80211_hw*,int ,int,int) ;
 int FUNC_6 (struct ieee80211_hw*,int,int ,int,int ) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_hw *VAR_14,
 u8 VAR_15, u8 VAR_16)
{
 struct rtl_priv *VAR_17 = FUNC_4(VAR_14);
 u32 VAR_18 = VAR_6;
 u32 VAR_19 = VAR_10;
 u8 VAR_20, VAR_21;
 unsigned long VAR_22 = 0;

 FUNC_1(VAR_17, VAR_3, VAR_5, "====>path %d\n", VAR_16);
 if (VAR_17->rtlhal.current_bandtype == VAR_0) {
  FUNC_1(VAR_17, VAR_3, VAR_5, "====>5G\n");
  FUNC_5(VAR_14, VAR_9, FUNC_0(25) | FUNC_0(24), 0);
  FUNC_5(VAR_14, VAR_8, 0x00f00000, 0xf);

  if (VAR_15 > 99)
   FUNC_5(VAR_14, VAR_11, FUNC_0(13) |
          FUNC_0(14), 2);
  else
   FUNC_5(VAR_14, VAR_11, FUNC_0(13) |
          FUNC_0(14), 1);

  VAR_20 = VAR_15 <= 64 ? 1 : 2;
  VAR_18 = VAR_7;
  for (VAR_21 = 0; VAR_21 < VAR_18; VAR_21++)
   FUNC_6(VAR_14, (enum radio_path)VAR_16,
          VAR_13[VAR_21], VAR_19,
          VAR_12[0][VAR_20][VAR_21]);
  FUNC_5(VAR_14, VAR_8, 0x00f00000, 0);
  FUNC_5(VAR_14, VAR_9, VAR_2, 1);
 } else {

  FUNC_1(VAR_17, VAR_4, VAR_5,
    "Load RF IMR parameters for G band. IMR already setting %d\n",
    VAR_17->rtlhal.load_imrandiqk_setting_for2g);
  FUNC_1(VAR_17, VAR_3, VAR_5, "====>2.4G\n");
  if (!VAR_17->rtlhal.load_imrandiqk_setting_for2g) {
   FUNC_1(VAR_17, VAR_4, VAR_5,
     "Load RF IMR parameters for G band. %d\n",
     VAR_16);
   FUNC_2(VAR_14, &VAR_22);
   FUNC_5(VAR_14, VAR_9, FUNC_0(25) | FUNC_0(24), 0);
   FUNC_5(VAR_14, VAR_8,
          0x00f00000, 0xf);
   VAR_18 = VAR_7;
   for (VAR_21 = 0; VAR_21 < VAR_18; VAR_21++) {
    FUNC_6(VAR_14, (enum radio_path)VAR_16,
           VAR_13[VAR_21],
           VAR_10,
           VAR_12[0][0][VAR_21]);
   }
   FUNC_5(VAR_14, VAR_8,
          0x00f00000, 0);
   FUNC_5(VAR_14, VAR_9, VAR_2 | VAR_1, 3);
   FUNC_3(VAR_14, &VAR_22);
  }
 }
 FUNC_1(VAR_17, VAR_3, VAR_5, "<====\n");
}
