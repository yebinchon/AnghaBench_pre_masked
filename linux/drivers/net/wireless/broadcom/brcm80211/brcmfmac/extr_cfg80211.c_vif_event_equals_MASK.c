
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct brcmf_cfg80211_vif_event {scalar_t__ action; int vif_event_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline bool FUNC_2(struct brcmf_cfg80211_vif_event *VAR_0,
        u8 VAR_1)
{
 u8 VAR_2;

 FUNC_0(&VAR_0->vif_event_lock);
 VAR_2 = VAR_0->action;
 FUNC_1(&VAR_0->vif_event_lock);
 return VAR_2 == VAR_1;
}
