
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* ring_buffer; } ;
struct vmbus_channel {int kobj; TYPE_2__ inbound; TYPE_3__* primary_channel; } ;
struct device {int dummy; } ;
struct hv_device {struct device device; } ;
struct TYPE_6__ {struct hv_device* device_obj; } ;
struct TYPE_4__ {int interrupt_mask; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct device*,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct vmbus_channel*,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct vmbus_channel*) ;
 int FUNC_4 (struct vmbus_channel*,size_t const,size_t const,int *,int ,int ,struct vmbus_channel*) ;

__attribute__((used)) static void
FUNC_5(struct vmbus_channel *VAR_5)
{
 struct hv_device *VAR_6 = VAR_5->primary_channel->device_obj;
 struct device *VAR_7 = &VAR_6->device;
 const size_t VAR_8 = VAR_1 * VAR_2;
 int VAR_9;


 VAR_9 = FUNC_4(VAR_5, VAR_8, VAR_8, ((void*)0), 0,
    VAR_3, VAR_5);
 if (VAR_9) {
  FUNC_0(VAR_7, "vmbus_open subchannel failed: %d\n", VAR_9);
  return;
 }


 VAR_5->inbound.ring_buffer->interrupt_mask = 1;
 FUNC_1(VAR_5, VAR_0);

 VAR_9 = FUNC_2(&VAR_5->kobj, &VAR_4);
 if (VAR_9) {
  FUNC_0(VAR_7, "sysfs create ring bin file failed; %d\n", VAR_9);
  FUNC_3(VAR_5);
 }
}
