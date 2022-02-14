
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p54_common {int registered; int eeprom_mutex; int conf_mutex; } ;
struct ieee80211_hw {struct p54_common* priv; } ;


 int FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct p54_common*) ;

void FUNC_3(struct ieee80211_hw *VAR_0)
{
 struct p54_common *VAR_1 = VAR_0->priv;

 if (VAR_1->registered) {
  VAR_1->registered = 0;



  FUNC_0(VAR_0);
 }

 FUNC_1(&VAR_1->conf_mutex);
 FUNC_1(&VAR_1->eeprom_mutex);
}
