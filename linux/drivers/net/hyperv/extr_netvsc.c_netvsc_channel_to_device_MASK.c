
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmbus_channel {struct hv_device* device_obj; struct vmbus_channel* primary_channel; } ;
struct hv_device {int dummy; } ;



__attribute__((used)) static struct hv_device *FUNC_0(struct vmbus_channel *VAR_0)
{
 struct vmbus_channel *VAR_1 = VAR_0->primary_channel;

 return VAR_1 ? VAR_1->device_obj : VAR_0->device_obj;
}
