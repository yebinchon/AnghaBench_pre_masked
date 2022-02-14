
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_9__ {int release; int groups; int * bus; } ;
struct TYPE_8__ {int created; } ;
struct visor_device {TYPE_2__ device; TYPE_1__ state; int list_all; int timer; int visordriver_callback_lock; int chipset_dev_no; int chipset_bus_no; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,char*,int) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,char*,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *,int *) ;
 int VAR_3 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int *,int ,int ) ;
 int VAR_4 ;
 int FUNC_9 (struct visor_device*,int,int ) ;
 int VAR_5 ;

int FUNC_10(struct visor_device *VAR_6)
{
 int VAR_7;
 u32 VAR_8 = VAR_6->chipset_bus_no;
 u32 VAR_9 = VAR_6->chipset_dev_no;

 FUNC_6(&VAR_6->visordriver_callback_lock);
 VAR_6->device.bus = &VAR_5;
 VAR_6->device.groups = VAR_1;
 FUNC_3(&VAR_6->device);
 VAR_6->device.release = VAR_4;

 FUNC_4(&VAR_6->device);
 FUNC_8(&VAR_6->timer, VAR_2, 0);





 VAR_7 = FUNC_1(&VAR_6->device, "vbus%u:dev%u",
      VAR_8, VAR_9);
 if (VAR_7)
  goto err_put;
 VAR_7 = FUNC_2(&VAR_6->device);
 if (VAR_7 < 0)
  goto err_put;
 FUNC_5(&VAR_6->list_all, &VAR_3);
 VAR_6->state.created = 1;
 FUNC_9(VAR_6, VAR_7, VAR_0);

 return 0;

err_put:
 FUNC_7(&VAR_6->device);
 FUNC_0(&VAR_6->device, "Creating visor device failed. %d\n", VAR_7);
 return VAR_7;
}
