
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
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int) ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (struct ieee80211_hw*,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (struct swchnlcmd*,int ,int,int,int ,int,int) ;
 int FUNC_5 (struct ieee80211_hw*,int) ;
 struct rtl_priv* FUNC_6 (struct ieee80211_hw*) ;
 int FUNC_7 (struct ieee80211_hw*,int,int ,int ,int) ;
 int FUNC_8 (struct rtl_priv*,int ,int) ;
 int FUNC_9 (struct rtl_priv*,int ,int) ;
 int FUNC_10 (struct rtl_priv*,int ,int ) ;

__attribute__((used)) static bool FUNC_11(struct ieee80211_hw *VAR_8,
            u8 VAR_9, u8 *VAR_10, u8 *VAR_11,
            u32 *VAR_12)
{
 struct rtl_priv *VAR_13 = FUNC_6(VAR_8);
 struct rtl_phy *VAR_14 = &VAR_13->phy;
 struct swchnlcmd VAR_15[VAR_4];
 u32 VAR_16;
 struct swchnlcmd VAR_17[VAR_3];
 u32 VAR_18;
 struct swchnlcmd VAR_19[VAR_5];
 u32 VAR_20;
 struct swchnlcmd *VAR_21 = ((void*)0);
 u8 VAR_22;
 u8 VAR_23 = VAR_14->num_total_rfpath;

 VAR_16 = 0;
 FUNC_4(VAR_15, VAR_16++,
      VAR_4,
      131, 0, 0, 0);
 FUNC_4(VAR_15, VAR_16++,
      VAR_4, VAR_0, 0, 0, 0);

 VAR_18 = 0;

 FUNC_4(VAR_17, VAR_18++,
      VAR_3, VAR_0, 0, 0, 0);

 VAR_20 = 0;

 FUNC_1((VAR_9 < 1 || VAR_9 > 14),
    "rtl8723ae: illegal channel for Zebra: %d\n", VAR_9);

 FUNC_4(VAR_19, VAR_20++,
      VAR_5, 132,
      VAR_7, VAR_9, 10);

 FUNC_4(VAR_19, VAR_20++,
      VAR_5, VAR_0, 0, 0,
      0);

 do {
  switch (*VAR_10) {
  case 0:
   VAR_21 = &VAR_15[*VAR_11];
   break;
  case 1:
   VAR_21 = &VAR_19[*VAR_11];
   break;
  case 2:
   VAR_21 = &VAR_17[*VAR_11];
   break;
  default:
   FUNC_3("Invalid 'stage' = %d, Check it!\n",
          *VAR_10);
   return 1;
  }

  if (VAR_21->cmdid == VAR_0) {
   if ((*VAR_10) == 2) {
    return 1;
   } else {
    (*VAR_10)++;
    (*VAR_11) = 0;
    continue;
   }
  }

  switch (VAR_21->cmdid) {
  case 131:
   FUNC_5(VAR_8, VAR_9);
   break;
  case 129:
   FUNC_9(VAR_13, VAR_21->para1,
     VAR_21->para2);
   break;
  case 128:
   FUNC_10(VAR_13, VAR_21->para1,
           (u16) VAR_21->para2);
   break;
  case 130:
   FUNC_8(VAR_13, VAR_21->para1,
           (u8) VAR_21->para2);
   break;
  case 132:
   for (VAR_22 = 0; VAR_22 < VAR_23; VAR_22++) {
    VAR_14->rfreg_chnlval[VAR_22] =
        ((VAR_14->rfreg_chnlval[VAR_22] &
          0xfffffc00) | VAR_21->para2);

    FUNC_7(VAR_8, (enum radio_path)VAR_22,
           VAR_21->para1,
           VAR_6,
           VAR_14->rfreg_chnlval[VAR_22]);
   }
   FUNC_2(VAR_8, VAR_9);
   break;
  default:
   FUNC_0(VAR_13, VAR_1, VAR_2,
     "switch case %#x not processed\n",
     VAR_21->cmdid);
   break;
  }

  break;
 } while (1);

 (*VAR_12) = VAR_21->msdelay;
 (*VAR_11)++;
 return 0;
}
