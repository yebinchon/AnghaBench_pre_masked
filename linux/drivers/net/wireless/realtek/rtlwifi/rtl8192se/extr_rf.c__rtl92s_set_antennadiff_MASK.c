
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u32 ;
struct rtl_phy {scalar_t__ rf_type; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct rtl_efuse {int* antenna_txpwdiff; } ;
struct ieee80211_hw {int dummy; } ;
typedef int s8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int,int) ;
 struct rtl_efuse* FUNC_1 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct ieee80211_hw*,int,int,int) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_7,
        u8 *VAR_8)
{
 struct rtl_priv *VAR_9 = FUNC_2(VAR_7);
 struct rtl_efuse *VAR_10 = FUNC_1(FUNC_2(VAR_7));
 struct rtl_phy *VAR_11 = &(VAR_9->phy);
 s8 VAR_12 = 0;
 u32 VAR_13 = 0;

 if (VAR_11->rf_type == VAR_6) {
  VAR_12 = VAR_8[1] - VAR_8[0];



  if (VAR_12 > 7)
   VAR_12 = 7;
  if (VAR_12 < -8)
   VAR_12 = -8;

  FUNC_0(VAR_9, VAR_3, VAR_4,
    "Antenna Diff from RF-B to RF-A = %d (0x%x)\n",
    VAR_12, VAR_12 & 0xf);

  VAR_12 &= 0xf;
 }


 VAR_10->antenna_txpwdiff[2] = 0;
 VAR_10->antenna_txpwdiff[1] = 0;
 VAR_10->antenna_txpwdiff[0] = (u8)(VAR_12);

 VAR_13 = VAR_10->antenna_txpwdiff[2] << 8 |
    VAR_10->antenna_txpwdiff[1] << 4 |
    VAR_10->antenna_txpwdiff[0];

 FUNC_3(VAR_7, VAR_5, (VAR_0 | VAR_1 | VAR_2),
        VAR_13);

 FUNC_0(VAR_9, VAR_3, VAR_4, "Write BCD-Diff(0x%x) = 0x%x\n",
   VAR_5, VAR_13);
}
