
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct swchnlcmd {int cmdid; int para2; scalar_t__ msdelay; int para1; } ;
struct rtl_phy {int num_total_rfpath; int* rfreg_chnlval; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum radio_path { ____Placeholder_radio_path } radio_path ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (struct swchnlcmd*,int ,int,int,int ,int,int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct ieee80211_hw*,int) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct ieee80211_hw*,int,int ,int ,int) ;
 int FUNC_6 (struct rtl_priv*,int ,int) ;
 int FUNC_7 (struct rtl_priv*,int ,int) ;
 int FUNC_8 (struct rtl_priv*,int ,int ) ;

__attribute__((used)) static bool FUNC_9(struct ieee80211_hw *VAR_6,
      u8 VAR_7, u8 *VAR_8, u8 *VAR_9, u32 *VAR_10)
{
 struct rtl_priv *VAR_11 = FUNC_4(VAR_6);
 struct rtl_phy *VAR_12 = &(VAR_11->phy);
 struct swchnlcmd VAR_13[VAR_2];
 u32 VAR_14;
 struct swchnlcmd VAR_15[VAR_1];
 u32 VAR_16;
 struct swchnlcmd VAR_17[VAR_3];
 u32 VAR_18;
 struct swchnlcmd *VAR_19 = ((void*)0);
 u8 VAR_20;
 u8 VAR_21 = VAR_12->num_total_rfpath;

 VAR_14 = 0;
 FUNC_1(VAR_13, VAR_14++,
   VAR_2, 131, 0, 0, 0);
 FUNC_1(VAR_13, VAR_14++,
   VAR_2, VAR_0, 0, 0, 0);

 VAR_16 = 0;

 FUNC_1(VAR_15, VAR_16++,
   VAR_1, VAR_0, 0, 0, 0);

 VAR_18 = 0;

 FUNC_0((VAR_7 < 1 || VAR_7 > 14),
    "rtl8192se: invalid channel for Zebra: %d\n", VAR_7);

 FUNC_1(VAR_17, VAR_18++,
      VAR_3, 132,
      VAR_5, VAR_7, 10);

 FUNC_1(VAR_17, VAR_18++,
   VAR_3, VAR_0, 0, 0, 0);

 do {
  switch (*VAR_8) {
  case 0:
   VAR_19 = &VAR_13[*VAR_9];
   break;
  case 1:
   VAR_19 = &VAR_17[*VAR_9];
   break;
  case 2:
   VAR_19 = &VAR_15[*VAR_9];
   break;
  default:
   return 1;
  }

  if (VAR_19->cmdid == VAR_0) {
   if ((*VAR_8) == 2) {
    return 1;
   } else {
    (*VAR_8)++;
    (*VAR_9) = 0;
    continue;
   }
  }

  switch (VAR_19->cmdid) {
  case 131:
   FUNC_3(VAR_6, VAR_7);
   break;
  case 129:
   FUNC_7(VAR_11, VAR_19->para1,
     VAR_19->para2);
   break;
  case 128:
   FUNC_8(VAR_11, VAR_19->para1,
           (u16)VAR_19->para2);
   break;
  case 130:
   FUNC_6(VAR_11, VAR_19->para1,
           (u8)VAR_19->para2);
   break;
  case 132:
   for (VAR_20 = 0; VAR_20 < VAR_21; VAR_20++) {
    VAR_12->rfreg_chnlval[VAR_20] =
      ((VAR_12->rfreg_chnlval[VAR_20] &
      0xfffffc00) | VAR_19->para2);
    FUNC_5(VAR_6, (enum radio_path)VAR_20,
           VAR_19->para1,
           VAR_4,
           VAR_12->rfreg_chnlval[VAR_20]);
   }
   break;
  default:
   FUNC_2("switch case %#x not processed\n",
          VAR_19->cmdid);
   break;
  }

  break;
 } while (1);

 (*VAR_10) = VAR_19->msdelay;
 (*VAR_9)++;
 return 0;
}
