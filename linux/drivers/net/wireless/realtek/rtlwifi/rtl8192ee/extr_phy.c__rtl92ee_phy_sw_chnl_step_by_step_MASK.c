
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
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int) ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (struct swchnlcmd*,int ,int,int,int ,int,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (struct ieee80211_hw*,int) ;
 struct rtl_priv* FUNC_5 (struct ieee80211_hw*) ;
 int FUNC_6 (struct ieee80211_hw*,int,int ,int,int) ;
 int FUNC_7 (struct rtl_priv*,int ,int) ;
 int FUNC_8 (struct rtl_priv*,int ,int) ;
 int FUNC_9 (struct rtl_priv*,int ,int ) ;

__attribute__((used)) static bool FUNC_10(struct ieee80211_hw *VAR_7,
           u8 VAR_8, u8 *VAR_9, u8 *VAR_10,
           u32 *VAR_11)
{
 struct rtl_priv *VAR_12 = FUNC_5(VAR_7);
 struct rtl_phy *VAR_13 = &VAR_12->phy;
 struct swchnlcmd VAR_14[VAR_4];
 u32 VAR_15;
 struct swchnlcmd VAR_16[VAR_3];
 u32 VAR_17;
 struct swchnlcmd VAR_18[VAR_5];
 u32 VAR_19;
 struct swchnlcmd *VAR_20 = ((void*)0);
 u8 VAR_21;
 u8 VAR_22 = VAR_13->num_total_rfpath;

 VAR_15 = 0;
 FUNC_2(VAR_14, VAR_15++,
       VAR_4,
       131, 0, 0, 0);
 FUNC_2(VAR_14, VAR_15++,
       VAR_4, VAR_0, 0, 0, 0);

 VAR_17 = 0;

 FUNC_2(VAR_16, VAR_17++,
       VAR_3, VAR_0, 0, 0, 0);

 VAR_19 = 0;

 FUNC_1((VAR_8 < 1 || VAR_8 > 14),
    "rtl8192ee: illegal channel for Zebra: %d\n", VAR_8);

 FUNC_2(VAR_18, VAR_19++,
       VAR_5,
       132,
       VAR_6, VAR_8, 10);

 FUNC_2(VAR_18, VAR_19++,
       VAR_5, VAR_0,
       0, 0, 0);

 do {
  switch (*VAR_9) {
  case 0:
   VAR_20 = &VAR_14[*VAR_10];
   break;
  case 1:
   VAR_20 = &VAR_18[*VAR_10];
   break;
  case 2:
   VAR_20 = &VAR_16[*VAR_10];
   break;
  default:
   FUNC_3("Invalid 'stage' = %d, Check it!\n",
          *VAR_9);
   return 1;
  }

  if (VAR_20->cmdid == VAR_0) {
   if ((*VAR_9) == 2)
    return 1;
   (*VAR_9)++;
   (*VAR_10) = 0;
   continue;
  }

  switch (VAR_20->cmdid) {
  case 131:
   FUNC_4(VAR_7, VAR_8);
   break;
  case 129:
   FUNC_8(VAR_12, VAR_20->para1,
     VAR_20->para2);
   break;
  case 128:
   FUNC_9(VAR_12, VAR_20->para1,
           (u16)VAR_20->para2);
   break;
  case 130:
   FUNC_7(VAR_12, VAR_20->para1,
           (u8)VAR_20->para2);
   break;
  case 132:
   for (VAR_21 = 0; VAR_21 < VAR_22; VAR_21++) {
    VAR_13->rfreg_chnlval[VAR_21] =
     ((VAR_13->rfreg_chnlval[VAR_21] &
       0xfffff00) | VAR_20->para2);

    FUNC_6(VAR_7, (enum radio_path)VAR_21,
           VAR_20->para1,
           0x3ff,
           VAR_13->rfreg_chnlval[VAR_21]);
   }
   break;
  default:
   FUNC_0(VAR_12, VAR_1, VAR_2,
     "switch case %#x not processed\n",
     VAR_20->cmdid);
   break;
  }

  break;
 } while (1);

 (*VAR_11) = VAR_20->msdelay;
 (*VAR_10)++;
 return 0;
}
