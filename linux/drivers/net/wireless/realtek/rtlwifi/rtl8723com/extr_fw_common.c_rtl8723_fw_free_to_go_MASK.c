
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int) ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct rtl_priv*,int ) ;
 int FUNC_6 (struct rtl_priv*,int ,int) ;

int FUNC_7(struct ieee80211_hw *VAR_8, bool VAR_9,
     int VAR_10)
{
 struct rtl_priv *VAR_11 = FUNC_4(VAR_8);
 int VAR_12 = -VAR_2;
 u32 VAR_13 = 0;
 u32 VAR_14;

 do {
  VAR_14 = FUNC_5(VAR_11, VAR_6);
 } while ((VAR_13++ < VAR_10) &&
   (!(VAR_14 & VAR_3)));

 if (VAR_13 >= VAR_10) {
  FUNC_2("chksum report fail ! REG_MCUFWDL:0x%08x .\n",
         VAR_14);
  goto exit;
 }
 VAR_14 = FUNC_5(VAR_11, VAR_6) | VAR_5;
 VAR_14 &= ~VAR_7;
 FUNC_6(VAR_11, VAR_6, VAR_14);

 if (VAR_9)
  FUNC_3(VAR_8);
 VAR_13 = 0;

 do {
  VAR_14 = FUNC_5(VAR_11, VAR_6);
  if (VAR_14 & VAR_7) {
   FUNC_0(VAR_11, VAR_0, VAR_1,
     "Polling FW ready success!! REG_MCUFWDL:0x%08x .\n",
     VAR_14);
   VAR_12 = 0;
   goto exit;
  }

  FUNC_1(VAR_4);

 } while (VAR_13++ < VAR_10);

 FUNC_2("Polling FW ready fail!! REG_MCUFWDL:0x%08x .\n",
        VAR_14);

exit:
 return VAR_12;
}
