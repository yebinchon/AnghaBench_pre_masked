
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_priv {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int ) ;
 int FUNC_1 (struct ieee80211_hw*,int,int,int *) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_2,
       u8 VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_2(VAR_2);
 u8 VAR_5[1] = {0};
 VAR_5[0] = VAR_3;

 FUNC_0(VAR_4, VAR_0, VAR_1,
  "[BTCoex], Set BT Retry Index=%d\n", VAR_3);
 FUNC_0(VAR_4, VAR_0, VAR_1,
  "[BTCoex], write 0x23=0x%x\n", VAR_5[0]);

 FUNC_1(VAR_2, 0x23, 1, VAR_5);
}
