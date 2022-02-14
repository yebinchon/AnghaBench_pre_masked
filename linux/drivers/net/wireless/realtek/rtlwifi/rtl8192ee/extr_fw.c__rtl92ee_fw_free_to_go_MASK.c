
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*,scalar_t__,...) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 scalar_t__ FUNC_3 (struct rtl_priv*,int ) ;
 int FUNC_4 (struct rtl_priv*,int ,scalar_t__) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct ieee80211_hw *VAR_7)
{
 struct rtl_priv *VAR_8 = FUNC_2(VAR_7);
 int VAR_9 = -VAR_0;
 u32 VAR_10 = 0;
 u32 VAR_11;

 do {
  VAR_11 = FUNC_3(VAR_8, VAR_5);
 } while ((VAR_10++ < VAR_3) &&
   (!(VAR_11 & VAR_1)));

 if (VAR_10 >= VAR_3) {
  FUNC_0("chksum report fail! REG_MCUFWDL:0x%08x\n",
         VAR_11);
  goto exit;
 }
 VAR_11 = FUNC_3(VAR_8, VAR_5);
 VAR_11 |= VAR_4;
 VAR_11 &= ~VAR_6;
 FUNC_4(VAR_8, VAR_5, VAR_11);

 FUNC_1(VAR_7);
 VAR_10 = 0;

 do {
  VAR_11 = FUNC_3(VAR_8, VAR_5);
  if (VAR_11 & VAR_6)
   return 0;

  FUNC_5(VAR_2*10);

 } while (VAR_10++ < VAR_3);

 FUNC_0("Polling FW ready fail!! REG_MCUFWDL:0x%08x. count = %d\n",
        VAR_11, VAR_10);

exit:
 return VAR_9;
}
