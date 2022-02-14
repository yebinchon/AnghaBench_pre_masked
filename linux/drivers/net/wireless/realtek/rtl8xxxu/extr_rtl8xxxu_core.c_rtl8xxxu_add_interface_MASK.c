
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl8xxxu_priv {int dummy; } ;
struct ieee80211_vif {int type; } ;
struct ieee80211_hw {struct rtl8xxxu_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int FUNC_0 (struct rtl8xxxu_priv*,int ) ;
 int FUNC_1 (struct rtl8xxxu_priv*,int ) ;
 int FUNC_2 (struct rtl8xxxu_priv*) ;
 int FUNC_3 (struct rtl8xxxu_priv*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct ieee80211_hw *VAR_5,
      struct ieee80211_vif *VAR_6)
{
 struct rtl8xxxu_priv *VAR_7 = VAR_5->priv;
 int VAR_8;
 u8 VAR_9;

 switch (VAR_6->type) {
 case 128:
  FUNC_2(VAR_7);

  VAR_9 = FUNC_0(VAR_7, VAR_4);
  VAR_9 |= VAR_0 | VAR_2 |
   VAR_1;
  FUNC_3(VAR_7, VAR_4, VAR_9);
  VAR_8 = 0;
  break;
 default:
  VAR_8 = -VAR_3;
 }

 FUNC_1(VAR_7, VAR_6->type);

 return VAR_8;
}
