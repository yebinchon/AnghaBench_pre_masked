
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_vif {int driver_flags; int type; int addr; } ;
struct ieee80211_hw {struct cw1200_common* priv; } ;
struct cw1200_common {scalar_t__ mode; int conf_mutex; int mac_addr; struct ieee80211_vif* vif; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 scalar_t__ VAR_5 ;

 int FUNC_0 (struct cw1200_common*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct ieee80211_hw *VAR_6,
    struct ieee80211_vif *VAR_7)
{
 int VAR_8;
 struct cw1200_common *VAR_9 = VAR_6->priv;


 VAR_7->driver_flags |= VAR_2 |
        VAR_4 |
        VAR_3;

 FUNC_2(&VAR_9->conf_mutex);

 if (VAR_9->mode != VAR_5) {
  FUNC_3(&VAR_9->conf_mutex);
  return -VAR_0;
 }

 switch (VAR_7->type) {
 case 128:
 case 131:
 case 129:
 case 130:
  VAR_9->mode = VAR_7->type;
  break;
 default:
  FUNC_3(&VAR_9->conf_mutex);
  return -VAR_0;
 }

 VAR_9->vif = VAR_7;
 FUNC_1(VAR_9->mac_addr, VAR_7->addr, VAR_1);
 VAR_8 = FUNC_0(VAR_9);






 FUNC_3(&VAR_9->conf_mutex);
 return VAR_8;
}
