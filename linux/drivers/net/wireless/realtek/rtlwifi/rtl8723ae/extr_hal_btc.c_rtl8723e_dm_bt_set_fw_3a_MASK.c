
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int,int) ;
 int FUNC_1 (struct ieee80211_hw*,int,int,int*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_2,
         u8 VAR_3, u8 VAR_4, u8 VAR_5, u8 VAR_6,
         u8 VAR_7)
{
 struct rtl_priv *VAR_8 = FUNC_2(VAR_2);
 u8 VAR_9[5];

 VAR_9[0] = VAR_3;
 VAR_9[1] = VAR_4;
 VAR_9[2] = VAR_5;
 VAR_9[3] = VAR_6;
 VAR_9[4] = VAR_7;
 FUNC_0(VAR_8, VAR_0, VAR_1,
  "[BTCoex], FW write 0x3a(4bytes)=0x%x%8x\n",
  VAR_9[0], VAR_9[1]<<24 |
  VAR_9[2]<<16 | VAR_9[3]<<8 |
  VAR_9[4]);
 FUNC_1(VAR_2, 0x3a, 5, VAR_9);
}
