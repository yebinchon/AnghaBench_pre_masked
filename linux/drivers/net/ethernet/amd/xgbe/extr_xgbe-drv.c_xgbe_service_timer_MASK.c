
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {int service_timer; int service_work; int dev_workqueue; } ;
struct timer_list {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct xgbe_prv_data* FUNC_0 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,scalar_t__) ;
 struct xgbe_prv_data* VAR_2 ;
 int FUNC_2 (int ,int *) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_4)
{
 struct xgbe_prv_data *VAR_5 = FUNC_0(VAR_5, VAR_4, VAR_3);

 FUNC_2(VAR_5->dev_workqueue, &VAR_5->service_work);

 FUNC_1(&VAR_5->service_timer, VAR_1 + VAR_0);
}
