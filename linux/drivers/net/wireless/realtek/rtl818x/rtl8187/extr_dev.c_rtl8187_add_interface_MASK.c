
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rtl8187_vif {int enable_beacon; int beacon_work; struct ieee80211_hw* dev; } ;
struct rtl8187_priv {int conf_mutex; TYPE_1__* map; struct ieee80211_vif* vif; } ;
struct ieee80211_vif {int type; scalar_t__ addr; int drv_priv; } ;
struct ieee80211_hw {struct rtl8187_priv* priv; } ;
struct TYPE_2__ {int EEPROM_CMD; int * MAC; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;


 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int FUNC_3 (struct rtl8187_priv*,int *,int ) ;

__attribute__((used)) static int FUNC_4(struct ieee80211_hw *VAR_5,
     struct ieee80211_vif *VAR_6)
{
 struct rtl8187_priv *VAR_7 = VAR_5->priv;
 struct rtl8187_vif *VAR_8;
 int VAR_9;
 int VAR_10 = -VAR_0;

 FUNC_1(&VAR_7->conf_mutex);
 if (VAR_7->vif)
  goto exit;

 switch (VAR_6->type) {
 case 128:
 case 129:
  break;
 default:
  goto exit;
 }

 VAR_10 = 0;
 VAR_7->vif = VAR_6;


 VAR_8 = (struct rtl8187_vif *)&VAR_6->drv_priv;
 VAR_8->dev = VAR_5;
 FUNC_0(&VAR_8->beacon_work, VAR_4);
 VAR_8->enable_beacon = 0;


 FUNC_3(VAR_7, &VAR_7->map->EEPROM_CMD, VAR_2);
 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++)
  FUNC_3(VAR_7, &VAR_7->map->MAC[VAR_9],
     ((u8 *)VAR_6->addr)[VAR_9]);
 FUNC_3(VAR_7, &VAR_7->map->EEPROM_CMD, VAR_3);

exit:
 FUNC_2(&VAR_7->conf_mutex);
 return VAR_10;
}
