
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rtl8180_priv {TYPE_1__* map; } ;
struct ieee80211_hw {struct rtl8180_priv* priv; } ;
struct TYPE_2__ {int PHY_PR; } ;


 int VAR_0 ;
 int * FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (struct rtl8180_priv*,int ) ;
 int FUNC_4 (struct rtl8180_priv*,int *) ;
 int FUNC_5 (struct rtl8180_priv*,int ,int) ;
 int FUNC_6 (struct rtl8180_priv*,int ,int ) ;
 int FUNC_7 (struct rtl8180_priv*,int *,int) ;

__attribute__((used)) static void FUNC_8(struct ieee80211_hw *VAR_2)
{
 struct rtl8180_priv *VAR_3 = VAR_2->priv;
 u8 VAR_4;

 FUNC_6(VAR_3, FUNC_2(0x1F0), 0);
 FUNC_3(VAR_3, FUNC_2(0x1F0));
 FUNC_6(VAR_3, FUNC_2(0x1F4), 0);
 FUNC_3(VAR_3, FUNC_2(0x1F4));
 FUNC_7(VAR_3, FUNC_0(0x1F8), 0);
 FUNC_4(VAR_3, FUNC_0(0x1F8));

 VAR_4 = FUNC_4(VAR_3, &VAR_3->map->PHY_PR);
 FUNC_7(VAR_3, &VAR_3->map->PHY_PR, VAR_4 | 0x04);

 FUNC_5(VAR_3, VAR_0, 0x1000);
 FUNC_5(VAR_3, VAR_1, 0x1000);

 FUNC_5(VAR_3, FUNC_1(0x370), 0x0560);
 FUNC_5(VAR_3, FUNC_1(0x372), 0x0560);
 FUNC_5(VAR_3, FUNC_1(0x374), 0x0DA4);
 FUNC_5(VAR_3, FUNC_1(0x376), 0x0DA4);
 FUNC_5(VAR_3, FUNC_1(0x378), 0x0560);
 FUNC_5(VAR_3, FUNC_1(0x37A), 0x0560);
 FUNC_5(VAR_3, FUNC_1(0x37C), 0x00EC);
 FUNC_5(VAR_3, FUNC_1(0x37E), 0x00EC);
 FUNC_7(VAR_3, FUNC_0(0x24E), 0x01);

 FUNC_7(VAR_3, FUNC_0(0x0A), 0x72);
}
