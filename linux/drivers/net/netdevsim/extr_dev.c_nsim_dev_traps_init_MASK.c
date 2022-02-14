
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nsim_trap_item {int dummy; } ;
struct nsim_trap_data {struct nsim_trap_data* trap_items_arr; int trap_report_dw; struct nsim_dev* nsim_dev; int trap_lock; } ;
struct nsim_dev {struct nsim_trap_data* trap_data; } ;
struct devlink {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 struct nsim_dev* FUNC_2 (struct devlink*) ;
 int FUNC_3 (struct devlink*,int ,int ,int *) ;
 struct nsim_trap_data* FUNC_4 (int ,int,int ) ;
 int FUNC_5 (struct nsim_trap_data*) ;
 struct nsim_trap_data* FUNC_6 (int,int ) ;
 int FUNC_7 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct devlink *VAR_5)
{
 struct nsim_dev *VAR_6 = FUNC_2(VAR_5);
 struct nsim_trap_data *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_6(sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->trap_items_arr = FUNC_4(FUNC_0(VAR_4),
       sizeof(struct nsim_trap_item),
       VAR_1);
 if (!VAR_7->trap_items_arr) {
  VAR_8 = -VAR_0;
  goto err_trap_data_free;
 }





 FUNC_9(&VAR_7->trap_lock);
 VAR_7->nsim_dev = VAR_6;
 VAR_6->trap_data = VAR_7;

 VAR_8 = FUNC_3(VAR_5, VAR_4,
         FUNC_0(VAR_4), ((void*)0));
 if (VAR_8)
  goto err_trap_items_free;

 FUNC_1(&VAR_6->trap_data->trap_report_dw,
     VAR_3);
 FUNC_8(&VAR_6->trap_data->trap_report_dw,
         FUNC_7(VAR_2));

 return 0;

err_trap_items_free:
 FUNC_5(VAR_7->trap_items_arr);
err_trap_data_free:
 FUNC_5(VAR_7);
 return VAR_8;
}
