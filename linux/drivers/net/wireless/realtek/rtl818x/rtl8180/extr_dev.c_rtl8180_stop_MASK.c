
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct rtl8180_priv {TYPE_3__* pdev; TYPE_2__* map; TYPE_1__* rf; } ;
struct ieee80211_hw {int queues; struct rtl8180_priv* priv; } ;
struct TYPE_6__ {int irq; } ;
struct TYPE_5__ {int EEPROM_CMD; int CONFIG4; int CMD; } ;
struct TYPE_4__ {int (* stop ) (struct ieee80211_hw*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct ieee80211_hw*) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*,int) ;
 int FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct rtl8180_priv*,int *) ;
 int FUNC_5 (struct rtl8180_priv*,int *,int) ;
 int FUNC_6 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_hw *VAR_5)
{
 struct rtl8180_priv *VAR_6 = VAR_5->priv;
 u8 VAR_7;
 int VAR_8;

 FUNC_3(VAR_5);

 VAR_7 = FUNC_4(VAR_6, &VAR_6->map->CMD);
 VAR_7 &= ~VAR_1;
 VAR_7 &= ~VAR_0;
 FUNC_5(VAR_6, &VAR_6->map->CMD, VAR_7);

 VAR_6->rf->stop(VAR_5);

 FUNC_5(VAR_6, &VAR_6->map->EEPROM_CMD, VAR_3);
 VAR_7 = FUNC_4(VAR_6, &VAR_6->map->CONFIG4);
 FUNC_5(VAR_6, &VAR_6->map->CONFIG4, VAR_7 | VAR_2);
 FUNC_5(VAR_6, &VAR_6->map->EEPROM_CMD, VAR_4);

 FUNC_0(VAR_6->pdev->irq, VAR_5);

 FUNC_1(VAR_5);
 for (VAR_8 = 0; VAR_8 < (VAR_5->queues + 1); VAR_8++)
  FUNC_2(VAR_5, VAR_8);
}
