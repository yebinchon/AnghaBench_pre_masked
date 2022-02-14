
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct timer_list {int dummy; } ;
struct ena_admin_host_info {int dummy; } ;
struct ena_adapter {int timer_service; int reset_task; int netdev; int flags; TYPE_2__* ena_dev; } ;
struct TYPE_3__ {struct ena_admin_host_info* host_info; int * debug_area_virt_addr; } ;
struct TYPE_4__ {TYPE_1__ host_attr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct ena_adapter* VAR_2 ;
 int FUNC_0 (struct ena_adapter*) ;
 int FUNC_1 (struct ena_adapter*) ;
 int FUNC_2 (struct ena_adapter*) ;
 int FUNC_3 (struct ena_adapter*) ;
 int VAR_3 ;
 int FUNC_4 (struct ena_adapter*,int *) ;
 int FUNC_5 (struct ena_adapter*) ;
 int FUNC_6 (struct ena_admin_host_info*,int ) ;
 int VAR_4 ;
 struct ena_adapter* FUNC_7 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_8 (int *,scalar_t__) ;
 int FUNC_9 (struct ena_adapter*,int ,int ,char*) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int ,int *) ;
 int VAR_6 ;
 scalar_t__ FUNC_12 (int ) ;

__attribute__((used)) static void FUNC_13(struct timer_list *VAR_7)
{
 struct ena_adapter *VAR_8 = FUNC_7(VAR_8, VAR_7, VAR_6);
 u8 *VAR_9 = VAR_8->ena_dev->host_attr.debug_area_virt_addr;
 struct ena_admin_host_info *VAR_10 =
  VAR_8->ena_dev->host_attr.host_info;

 FUNC_3(VAR_8);

 FUNC_0(VAR_8);

 FUNC_2(VAR_8);

 FUNC_1(VAR_8);

 if (VAR_9)
  FUNC_4(VAR_8, VAR_9);

 if (VAR_10)
  FUNC_6(VAR_10, VAR_8->netdev);

 if (FUNC_12(FUNC_11(VAR_0, &VAR_8->flags))) {
  FUNC_9(VAR_8, VAR_3, VAR_8->netdev,
     "Trigger reset is on\n");
  FUNC_5(VAR_8);
  FUNC_10(VAR_4, &VAR_8->reset_task);
  return;
 }


 FUNC_8(&VAR_8->timer_service, VAR_5 + VAR_1);
}
