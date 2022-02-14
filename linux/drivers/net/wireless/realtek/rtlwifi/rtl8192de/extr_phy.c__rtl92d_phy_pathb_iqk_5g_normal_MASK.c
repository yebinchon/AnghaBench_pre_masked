
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct rtl_phy {int* iqk_bb_backup; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ieee80211_hw*,int,int ) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct ieee80211_hw*,int,int ,int) ;

__attribute__((used)) static u8 FUNC_6(struct ieee80211_hw *VAR_6)
{
 struct rtl_priv *VAR_7 = FUNC_4(VAR_6);
 struct rtl_phy *VAR_8 = &(VAR_7->phy);
 u32 VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 u8 VAR_14 = 0;
 u8 VAR_15;
 u8 VAR_16 = 2;

 FUNC_1(VAR_7, VAR_0, VAR_1, "Path B IQK!\n");

 FUNC_1(VAR_7, VAR_0, VAR_1, "Path-A IQK setting!\n");
 FUNC_5(VAR_6, 0xe30, VAR_3, 0x18008c1f);
 FUNC_5(VAR_6, 0xe34, VAR_3, 0x18008c1f);
 FUNC_5(VAR_6, 0xe38, VAR_3, 0x82110000);
 FUNC_5(VAR_6, 0xe3c, VAR_3, 0x68110000);


 FUNC_5(VAR_6, 0xe50, VAR_3, 0x18008c2f);
 FUNC_5(VAR_6, 0xe54, VAR_3, 0x18008c2f);
 FUNC_5(VAR_6, 0xe58, VAR_3, 0x82140307);
 FUNC_5(VAR_6, 0xe5c, VAR_3, 0x68160960);


 FUNC_1(VAR_7, VAR_0, VAR_1, "LO calibration setting!\n");
 FUNC_5(VAR_6, 0xe4c, VAR_3, 0x00462911);


 FUNC_5(VAR_6, VAR_4, VAR_3, 0x0f600700);
 FUNC_5(VAR_6, VAR_5, VAR_3, 0x061f0d30);

 for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15++) {

  FUNC_1(VAR_7, VAR_0, VAR_1,
   "One shot, path A LOK & IQK!\n");
  FUNC_5(VAR_6, 0xe48, VAR_3, 0xfa000000);
  FUNC_5(VAR_6, 0xe48, VAR_3, 0xf8000000);


  FUNC_1(VAR_7, VAR_0, VAR_1,
   "Delay %d ms for One shot, path B LOK & IQK.\n", 10);
  FUNC_2(VAR_2 * 10);


  VAR_9 = FUNC_3(VAR_6, 0xeac, VAR_3);
  FUNC_1(VAR_7, VAR_0, VAR_1, "0xeac = 0x%x\n", VAR_9);
  VAR_10 = FUNC_3(VAR_6, 0xeb4, VAR_3);
  FUNC_1(VAR_7, VAR_0, VAR_1, "0xeb4 = 0x%x\n", VAR_10);
  VAR_11 = FUNC_3(VAR_6, 0xebc, VAR_3);
  FUNC_1(VAR_7, VAR_0, VAR_1, "0xebc = 0x%x\n", VAR_11);
  VAR_12 = FUNC_3(VAR_6, 0xec4, VAR_3);
  FUNC_1(VAR_7, VAR_0, VAR_1, "0xec4 = 0x%x\n", VAR_12);
  VAR_13 = FUNC_3(VAR_6, 0xecc, VAR_3);
  FUNC_1(VAR_7, VAR_0, VAR_1, "0xecc = 0x%x\n", VAR_13);
  if (!(VAR_9 & FUNC_0(31)) &&
      (((VAR_10 & 0x03FF0000) >> 16) != 0x142))
   VAR_14 |= 0x01;
  else
   continue;
  if (!(VAR_9 & FUNC_0(30)) &&
      (((VAR_12 & 0x03FF0000) >> 16) != 0x132)) {
   VAR_14 |= 0x02;
   break;
  } else {
   FUNC_1(VAR_7, VAR_0, VAR_1,
    "Path B Rx IQK fail!!\n");
  }
 }


 FUNC_5(VAR_6, VAR_4, VAR_3,
        VAR_8->iqk_bb_backup[0]);
 FUNC_5(VAR_6, VAR_5, VAR_3,
        VAR_8->iqk_bb_backup[2]);
 return VAR_14;
}
