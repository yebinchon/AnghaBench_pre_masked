
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct venus_hfi_device {struct iface_queue* queues; } ;
struct iface_queue {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct venus_hfi_device*) ;
 int FUNC_1 (struct venus_hfi_device*,struct iface_queue*,void*,scalar_t__*) ;
 int FUNC_2 (struct venus_hfi_device*) ;

__attribute__((used)) static int FUNC_3(struct venus_hfi_device *VAR_2,
     void *VAR_3)
{
 struct iface_queue *VAR_4;
 u32 VAR_5;
 int VAR_6;

 if (!FUNC_0(VAR_2))
  return -VAR_0;

 VAR_4 = &VAR_2->queues[VAR_1];

 VAR_6 = FUNC_1(VAR_2, VAR_4, VAR_3, &VAR_5);
 if (VAR_6)
  return VAR_6;

 if (VAR_5)
  FUNC_2(VAR_2);

 return 0;
}
