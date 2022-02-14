
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nsim_dev {TYPE_1__* trap_data; } ;
struct devlink {int dummy; } ;
struct TYPE_2__ {struct TYPE_2__* trap_items_arr; int trap_report_dw; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct nsim_dev* FUNC_2 (struct devlink*) ;
 int FUNC_3 (struct devlink*,int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(struct devlink *VAR_1)
{
 struct nsim_dev *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(&VAR_2->trap_data->trap_report_dw);
 FUNC_3(VAR_1, VAR_0,
     FUNC_0(VAR_0));
 FUNC_4(VAR_2->trap_data->trap_items_arr);
 FUNC_4(VAR_2->trap_data);
}
