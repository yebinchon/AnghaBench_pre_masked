
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwifiex_adapter {int * rx_workqueue; int * workqueue; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct mwifiex_adapter *VAR_0)
{
 if (VAR_0->workqueue) {
  FUNC_1(VAR_0->workqueue);
  FUNC_0(VAR_0->workqueue);
  VAR_0->workqueue = ((void*)0);
 }

 if (VAR_0->rx_workqueue) {
  FUNC_1(VAR_0->rx_workqueue);
  FUNC_0(VAR_0->rx_workqueue);
  VAR_0->rx_workqueue = ((void*)0);
 }
}
