
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum version_8192d { ____Placeholder_version_8192d } version_8192d ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct rtl_priv*,int ) ;

__attribute__((used)) static enum version_8192d FUNC_3(struct ieee80211_hw *VAR_5)
{
 struct rtl_priv *VAR_6 = FUNC_1(VAR_5);
 enum version_8192d VAR_7 = VAR_3;
 u32 VAR_8;

 VAR_8 = FUNC_2(VAR_6, VAR_2);
 if (!(VAR_8 & 0x000f0000)) {
  VAR_7 = VAR_4;
  FUNC_0(VAR_6, VAR_0, VAR_1, "TEST CHIP!!!\n");
 } else {
  VAR_7 = VAR_3;
  FUNC_0(VAR_6, VAR_0, VAR_1, "Normal CHIP!!!\n");
 }
 return VAR_7;
}
