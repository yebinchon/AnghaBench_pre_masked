
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwifiex_adapter {int rx_work; int rx_workqueue; int rx_proc_lock; scalar_t__ rx_processing; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct mwifiex_adapter *VAR_0)
{
 FUNC_1(&VAR_0->rx_proc_lock);
 if (VAR_0->rx_processing) {
  FUNC_2(&VAR_0->rx_proc_lock);
 } else {
  FUNC_2(&VAR_0->rx_proc_lock);
  FUNC_0(VAR_0->rx_workqueue, &VAR_0->rx_work);
 }
}
