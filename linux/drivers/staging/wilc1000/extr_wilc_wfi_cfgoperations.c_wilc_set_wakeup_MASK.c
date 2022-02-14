
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wiphy {int dummy; } ;
struct wilc_vif {int ndev; } ;
struct wilc {int vif_mutex; } ;


 scalar_t__ FUNC_0 (struct wilc_vif*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,int) ;
 struct wilc_vif* FUNC_4 (struct wilc*) ;
 struct wilc* FUNC_5 (struct wiphy*) ;

__attribute__((used)) static void FUNC_6(struct wiphy *VAR_0, bool VAR_1)
{
 struct wilc *VAR_2 = FUNC_5(VAR_0);
 struct wilc_vif *VAR_3;

 FUNC_1(&VAR_2->vif_mutex);
 VAR_3 = FUNC_4(VAR_2);
 if (FUNC_0(VAR_3)) {
  FUNC_2(&VAR_2->vif_mutex);
  return;
 }

 FUNC_3(VAR_3->ndev, "cfg set wake up = %d\n", VAR_1);
 FUNC_2(&VAR_2->vif_mutex);
}
