
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl_priv {int dummy; } ;
struct rtl_pci {int receive_config; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rtl_priv*,int,int ,char*,int ,int) ;
 struct rtl_pci* FUNC_1 (int ) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct rtl_priv*,int ,int ) ;

void FUNC_5(struct ieee80211_hw *VAR_5,
 bool VAR_6, bool VAR_7)
{
 struct rtl_priv *VAR_8 = FUNC_3(VAR_5);
 struct rtl_pci *VAR_9 = FUNC_1(FUNC_2(VAR_5));

 if (VAR_6)
  VAR_9->receive_config |= VAR_3;
 else
  VAR_9->receive_config &= ~VAR_3;

 if (VAR_7)
  FUNC_4(VAR_8, VAR_4, VAR_9->receive_config);

 FUNC_0(VAR_8, VAR_1 | VAR_0, VAR_2,
  "receive_config=0x%08X, write_into_reg=%d\n",
  VAR_9->receive_config, VAR_7);
}
