
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmstorage_channel_properties {int dummy; } ;
struct vmbus_channel {size_t target_cpu; TYPE_1__* primary_channel; } ;
struct storvsc_device {int alloced_cpus; struct vmbus_channel** stor_chns; } ;
struct device {int dummy; } ;
struct hv_device {struct device device; } ;
struct TYPE_2__ {struct hv_device* device_obj; } ;


 int FUNC_0 (size_t,int *) ;
 int FUNC_1 (struct device*,char*,int) ;
 struct storvsc_device* FUNC_2 (struct hv_device*) ;
 int FUNC_3 (struct vmstorage_channel_properties*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (struct vmbus_channel*,int ,int ,void*,int,int ,struct vmbus_channel*) ;

__attribute__((used)) static void FUNC_5(struct vmbus_channel *VAR_2)
{
 struct hv_device *VAR_3 = VAR_2->primary_channel->device_obj;
 struct device *VAR_4 = &VAR_3->device;
 struct storvsc_device *VAR_5;
 struct vmstorage_channel_properties VAR_6;
 int VAR_7;

 VAR_5 = FUNC_2(VAR_3);
 if (!VAR_5)
  return;

 FUNC_3(&VAR_6, 0, sizeof(struct vmstorage_channel_properties));

 VAR_7 = FUNC_4(VAR_2,
    VAR_1,
    VAR_1,
    (void *)&VAR_6,
    sizeof(struct vmstorage_channel_properties),
    VAR_0, VAR_2);


 if (VAR_7 != 0) {
  FUNC_1(VAR_4, "Failed to open sub-channel: err=%d\n", VAR_7);
  return;
 }


 VAR_5->stor_chns[VAR_2->target_cpu] = VAR_2;
 FUNC_0(VAR_2->target_cpu, &VAR_5->alloced_cpus);
}
