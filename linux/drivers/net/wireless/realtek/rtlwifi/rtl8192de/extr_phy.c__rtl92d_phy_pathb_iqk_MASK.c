
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ieee80211_hw*,int,int ) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct ieee80211_hw*,int,int ,int) ;

__attribute__((used)) static u8 FUNC_6(struct ieee80211_hw *VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_4(VAR_4);
 u32 VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 u8 VAR_11 = 0;

 FUNC_1(VAR_5, VAR_0, VAR_1, "Path B IQK!\n");

 FUNC_1(VAR_5, VAR_0, VAR_1, "One shot, path A LOK & IQK!\n");
 FUNC_5(VAR_4, 0xe60, VAR_3, 0x00000002);
 FUNC_5(VAR_4, 0xe60, VAR_3, 0x00000000);

 FUNC_1(VAR_5, VAR_0, VAR_1,
  "Delay %d ms for One shot, path B LOK & IQK\n", VAR_2);
 FUNC_2(VAR_2);

 VAR_6 = FUNC_3(VAR_4, 0xeac, VAR_3);
 FUNC_1(VAR_5, VAR_0, VAR_1, "0xeac = 0x%x\n", VAR_6);
 VAR_7 = FUNC_3(VAR_4, 0xeb4, VAR_3);
 FUNC_1(VAR_5, VAR_0, VAR_1, "0xeb4 = 0x%x\n", VAR_7);
 VAR_8 = FUNC_3(VAR_4, 0xebc, VAR_3);
 FUNC_1(VAR_5, VAR_0, VAR_1, "0xebc = 0x%x\n", VAR_8);
 VAR_9 = FUNC_3(VAR_4, 0xec4, VAR_3);
 FUNC_1(VAR_5, VAR_0, VAR_1, "0xec4 = 0x%x\n", VAR_9);
 VAR_10 = FUNC_3(VAR_4, 0xecc, VAR_3);
 FUNC_1(VAR_5, VAR_0, VAR_1, "0xecc = 0x%x\n", VAR_10);
 if (!(VAR_6 & FUNC_0(31)) && (((VAR_7 & 0x03FF0000) >> 16) != 0x142) &&
     (((VAR_8 & 0x03FF0000) >> 16) != 0x42))
  VAR_11 |= 0x01;
 else
  return VAR_11;
 if (!(VAR_6 & FUNC_0(30)) && (((VAR_9 & 0x03FF0000) >> 16) != 0x132) &&
     (((VAR_10 & 0x03FF0000) >> 16) != 0x36))
  VAR_11 |= 0x02;
 else
  FUNC_1(VAR_5, VAR_0, VAR_1, "Path B Rx IQK fail!!\n");
 return VAR_11;
}
