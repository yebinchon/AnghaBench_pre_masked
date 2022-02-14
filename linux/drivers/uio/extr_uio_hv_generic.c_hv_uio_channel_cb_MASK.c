
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* ring_buffer; } ;
struct vmbus_channel {TYPE_2__ inbound; struct hv_device* device_obj; } ;
struct hv_uio_private_data {int info; } ;
struct hv_device {int dummy; } ;
struct TYPE_3__ {int interrupt_mask; } ;


 struct hv_uio_private_data* FUNC_0 (struct hv_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
 struct vmbus_channel *VAR_1 = VAR_0;
 struct hv_device *VAR_2 = VAR_1->device_obj;
 struct hv_uio_private_data *VAR_3 = FUNC_0(VAR_2);

 VAR_1->inbound.ring_buffer->interrupt_mask = 1;
 FUNC_2();

 FUNC_1(&VAR_3->info);
}
