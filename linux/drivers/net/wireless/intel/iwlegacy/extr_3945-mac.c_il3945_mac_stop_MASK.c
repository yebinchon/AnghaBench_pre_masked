
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rfkill_poll; } ;
struct il_priv {TYPE_1__ _3945; int workqueue; scalar_t__ is_open; } ;
struct ieee80211_hw {struct il_priv* priv; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct il_priv*) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5(struct ieee80211_hw *VAR_1)
{
 struct il_priv *VAR_2 = VAR_1->priv;

 FUNC_0("enter\n");

 if (!VAR_2->is_open) {
  FUNC_0("leave - skip\n");
  return;
 }

 VAR_2->is_open = 0;

 FUNC_2(VAR_2);

 FUNC_1(VAR_2->workqueue);


 FUNC_3(VAR_2->workqueue, &VAR_2->_3945.rfkill_poll,
      FUNC_4(2 * VAR_0));

 FUNC_0("leave\n");
}
