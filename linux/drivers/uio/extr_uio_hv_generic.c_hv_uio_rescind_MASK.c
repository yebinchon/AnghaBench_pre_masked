
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vmbus_channel {TYPE_1__* primary_channel; } ;
struct TYPE_4__ {scalar_t__ irq; } ;
struct hv_uio_private_data {TYPE_2__ info; } ;
struct hv_device {int dummy; } ;
struct TYPE_3__ {struct hv_device* device_obj; } ;


 struct hv_uio_private_data* FUNC_0 (struct hv_device*) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(struct vmbus_channel *VAR_0)
{
 struct hv_device *VAR_1 = VAR_0->primary_channel->device_obj;
 struct hv_uio_private_data *VAR_2 = FUNC_0(VAR_1);





 VAR_2->info.irq = 0;


 FUNC_1(&VAR_2->info);
}
