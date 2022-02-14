
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*) ;
 size_t FUNC_2 (struct ieee80211_hw*,int ,size_t,int ) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct ieee80211_hw*,int,int ,int) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_5, u32 *VAR_6,
         u32 *VAR_7, u32 *VAR_8,
         u32 VAR_9)
{
 struct rtl_priv *VAR_10 = FUNC_3(VAR_5);
 u32 VAR_11;

 FUNC_4(VAR_5, 0x82c, FUNC_0(31), 0x0);

 for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++) {
  VAR_6[VAR_11] = FUNC_2(VAR_5, VAR_3, VAR_8[VAR_11],
           VAR_0);
  VAR_7[VAR_11] = FUNC_2(VAR_5, VAR_4, VAR_8[VAR_11],
           VAR_0);
 }
 FUNC_1(VAR_10, VAR_1, VAR_2, "BackupRF Success!!!!\n");
}
