
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,scalar_t__) ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 scalar_t__ FUNC_4 (struct rtl_priv*,int ) ;
 int FUNC_5 (struct rtl_priv*,int ,scalar_t__) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct ieee80211_hw *VAR_9)
{
 struct rtl_priv *VAR_10 = FUNC_3(VAR_9);
 int VAR_11 = -VAR_2;
 u32 VAR_12 = 0;
 u32 VAR_13;

 do {
  VAR_13 = FUNC_4(VAR_10, VAR_7);
 } while ((VAR_12++ < VAR_5) &&
   (!(VAR_13 & VAR_3)));

 if (VAR_12 >= VAR_5) {
  FUNC_0(VAR_10, VAR_0, VAR_1,
    "chksum report fail! REG_MCUFWDL:0x%08x .\n",
     VAR_13);
  goto exit;
 }
 VAR_13 = FUNC_4(VAR_10, VAR_7);
 VAR_13 |= VAR_6;
 VAR_13 &= ~VAR_8;
 FUNC_5(VAR_10, VAR_7, VAR_13);

 FUNC_2(VAR_9);

 VAR_12 = 0;
 do {
  VAR_13 = FUNC_4(VAR_10, VAR_7);
  if (VAR_13 & VAR_8)
   return 0;

  FUNC_6(VAR_4);
 } while (VAR_12++ < VAR_5);

 FUNC_1("Polling FW ready fail!! REG_MCUFWDL:0x%08x .\n",
        VAR_13);

exit:
 return VAR_11;
}
