
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rtl_priv {int dummy; } ;
struct rtl_hal {scalar_t__ interfaceindex; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 struct rtl_hal* FUNC_1 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct rtl_priv*,int ) ;
 int FUNC_4 (struct rtl_priv*,int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct ieee80211_hw *VAR_8)
{
 struct rtl_priv *VAR_9 = FUNC_2(VAR_8);
 struct rtl_hal *VAR_10 = FUNC_1(FUNC_2(VAR_8));
 u32 VAR_11;

 FUNC_0(VAR_9, VAR_0, VAR_1, "FW already have download\n");

 VAR_11 = 0;
 do {
  if (VAR_10->interfaceindex == 0) {
   if (FUNC_3(VAR_9, VAR_2) &
       VAR_4) {
    FUNC_0(VAR_9, VAR_0, VAR_1,
      "Polling FW ready success!! REG_MCUFWDL: 0x%x\n",
      FUNC_3(VAR_9,
             VAR_2));
    return 0;
   }
   FUNC_5(5);
  } else {
   if (FUNC_3(VAR_9, VAR_3) &
       VAR_5) {
    FUNC_0(VAR_9, VAR_0, VAR_1,
      "Polling FW ready success!! REG_MCUFWDL: 0x%x\n",
      FUNC_3(VAR_9,
             VAR_3));
    return 0;
   }
   FUNC_5(5);
  }
 } while (VAR_11++ < VAR_6);

 if (VAR_10->interfaceindex == 0) {
  FUNC_0(VAR_9, VAR_0, VAR_1,
    "Polling FW ready fail!! MAC0 FW init not ready: 0x%x\n",
    FUNC_3(VAR_9, VAR_2));
 } else {
  FUNC_0(VAR_9, VAR_0, VAR_1,
    "Polling FW ready fail!! MAC1 FW init not ready: 0x%x\n",
    FUNC_3(VAR_9, VAR_3));
 }
 FUNC_0(VAR_9, VAR_0, VAR_1,
   "Polling FW ready fail!! REG_MCUFWDL:0x%08x\n",
   FUNC_4(VAR_9, VAR_7));
 return -1;
}
