
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p54_common {scalar_t__ mode; int conf_mutex; int mac_addr; struct ieee80211_vif* vif; } ;
struct ieee80211_vif {int type; int addr; int driver_flags; } ;
struct ieee80211_hw {struct p54_common* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 scalar_t__ VAR_3 ;

 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct p54_common*) ;

__attribute__((used)) static int FUNC_4(struct ieee80211_hw *VAR_4,
        struct ieee80211_vif *VAR_5)
{
 struct p54_common *VAR_6 = VAR_4->priv;
 int VAR_7;

 VAR_5->driver_flags |= VAR_2;

 FUNC_1(&VAR_6->conf_mutex);
 if (VAR_6->mode != VAR_3) {
  FUNC_2(&VAR_6->conf_mutex);
  return -VAR_0;
 }

 VAR_6->vif = VAR_5;

 switch (VAR_5->type) {
 case 128:
 case 131:
 case 130:
 case 129:
  VAR_6->mode = VAR_5->type;
  break;
 default:
  FUNC_2(&VAR_6->conf_mutex);
  return -VAR_0;
 }

 FUNC_0(VAR_6->mac_addr, VAR_5->addr, VAR_1);
 VAR_7 = FUNC_3(VAR_6);
 FUNC_2(&VAR_6->conf_mutex);
 return VAR_7;
}
