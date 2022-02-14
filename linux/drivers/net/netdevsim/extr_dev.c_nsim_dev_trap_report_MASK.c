
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dev; } ;
struct nsim_trap_item {scalar_t__ action; int trap_ctx; } ;
struct nsim_trap_data {int trap_lock; struct nsim_trap_item* trap_items_arr; } ;
struct nsim_dev_port {int devlink_port; TYPE_1__* ns; } ;
struct nsim_dev {struct nsim_trap_data* trap_data; } ;
struct devlink {int dummy; } ;
struct TYPE_2__ {int netdev; struct nsim_dev* nsim_dev; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct devlink*,struct sk_buff*,int ,int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 struct sk_buff* FUNC_5 () ;
 int VAR_1 ;
 struct devlink* FUNC_6 (struct nsim_dev*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct nsim_dev_port *VAR_2)
{
 struct nsim_dev *VAR_3 = VAR_2->ns->nsim_dev;
 struct devlink *VAR_4 = FUNC_6(VAR_3);
 struct nsim_trap_data *VAR_5;
 int VAR_6;

 VAR_5 = VAR_3->trap_data;

 FUNC_7(&VAR_5->trap_lock);
 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_1); VAR_6++) {
  struct nsim_trap_item *VAR_7;
  struct sk_buff *VAR_8;

  VAR_7 = &VAR_5->trap_items_arr[VAR_6];
  if (VAR_7->action == VAR_0)
   continue;

  VAR_8 = FUNC_5();
  if (!VAR_8)
   continue;
  VAR_8->dev = VAR_2->ns->netdev;






  FUNC_3();
  FUNC_2(VAR_4, VAR_8, VAR_7->trap_ctx,
        &VAR_2->devlink_port);
  FUNC_4();
  FUNC_1(VAR_8);
 }
 FUNC_8(&VAR_5->trap_lock);
}
