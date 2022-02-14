
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lbtf_private {TYPE_1__* vif; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct lbtf_private* priv; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct lbtf_private*,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct lbtf_private*,int ,int *) ;
 int FUNC_4 (struct lbtf_private*,int ) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_4,
   struct ieee80211_vif *VAR_5)
{
 struct lbtf_private *VAR_6 = VAR_4->priv;
 FUNC_1(VAR_0);

 if (VAR_6->vif->type == VAR_2 ||
     VAR_6->vif->type == VAR_3)
  FUNC_0(VAR_6, 0, 0);
 FUNC_4(VAR_6, VAR_1);
 FUNC_3(VAR_6, 0, ((void*)0));
 VAR_6->vif = ((void*)0);
 FUNC_2(VAR_0);
}
