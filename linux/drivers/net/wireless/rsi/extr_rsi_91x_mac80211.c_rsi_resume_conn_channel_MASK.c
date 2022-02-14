
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rsi_hw {struct ieee80211_vif** vifs; } ;
struct rsi_common {struct rsi_hw* priv; } ;
struct TYPE_2__ {scalar_t__ assoc; } ;
struct ieee80211_vif {scalar_t__ type; TYPE_1__ bss_conf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rsi_hw*,struct ieee80211_vif*) ;

__attribute__((used)) static void FUNC_1(struct rsi_common *VAR_5)
{
 struct rsi_hw *VAR_6 = VAR_5->priv;
 struct ieee80211_vif *VAR_7;
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  VAR_7 = VAR_6->vifs[VAR_8];
  if (!VAR_7)
   continue;

  if ((VAR_7->type == VAR_0) ||
      (VAR_7->type == VAR_2)) {
   FUNC_0(VAR_6, VAR_7);
   break;
  }
  if (((VAR_7->type == VAR_3) ||
       (VAR_7->type == VAR_1)) &&
      VAR_7->bss_conf.assoc) {
   FUNC_0(VAR_6, VAR_7);
   break;
  }
 }
}
