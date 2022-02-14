
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wilc {int vif_num; int wiphy; int bus_data; int hif_workqueue; TYPE_1__** vif; int * firmware; } ;
struct TYPE_2__ {scalar_t__ ndev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct wilc*,int) ;
 int FUNC_6 (struct wilc*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

void FUNC_9(struct wilc *VAR_0)
{
 int VAR_1;

 if (!VAR_0)
  return;

 if (VAR_0->firmware) {
  FUNC_3(VAR_0->firmware);
  VAR_0->firmware = ((void*)0);
 }

 for (VAR_1 = 0; VAR_1 < VAR_0->vif_num; VAR_1++) {
  if (VAR_0->vif[VAR_1] && VAR_0->vif[VAR_1]->ndev)
   FUNC_4(VAR_0->vif[VAR_1]->ndev);
 }

 FUNC_5(VAR_0, 0);
 FUNC_1(VAR_0->hif_workqueue);
 FUNC_0(VAR_0->hif_workqueue);
 FUNC_6(VAR_0);
 FUNC_2(VAR_0->bus_data);
 FUNC_8(VAR_0->wiphy);
 FUNC_7(VAR_0->wiphy);
}
