
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl8xxxu_priv {int dummy; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int VAR_5 ;
 int FUNC_0 (struct rtl8xxxu_priv*,int ) ;
 int FUNC_1 (struct rtl8xxxu_priv*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct rtl8xxxu_priv *VAR_6,
      enum nl80211_iftype VAR_7)
{
 u8 VAR_8;

 VAR_8 = FUNC_0(VAR_6, VAR_5);
 VAR_8 &= ~VAR_2;

 switch (VAR_7) {
 case 128:
  VAR_8 |= VAR_3;
  break;
 case 131:
  VAR_8 |= VAR_0;
  break;
 case 129:
  VAR_8 |= VAR_4;
  break;
 case 130:
  VAR_8 |= VAR_1;
  break;
 default:
  goto out;
 }

 FUNC_1(VAR_6, VAR_5, VAR_8);
out:
 return;
}
