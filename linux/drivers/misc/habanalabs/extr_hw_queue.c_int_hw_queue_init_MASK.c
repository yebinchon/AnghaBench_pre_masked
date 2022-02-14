
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct hl_hw_queue {scalar_t__ ci; scalar_t__ pi; scalar_t__ kernel_address; int hw_queue_id; int int_queue_len; int bus_address; } ;
struct hl_device {int dev; TYPE_1__* asic_funcs; } ;
struct TYPE_2__ {void* (* get_int_queue_base ) (struct hl_device*,int ,int *,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 void* FUNC_1 (struct hl_device*,int ,int *,int *) ;

__attribute__((used)) static int FUNC_2(struct hl_device *VAR_1, struct hl_hw_queue *VAR_2)
{
 void *VAR_3;

 VAR_3 = VAR_1->asic_funcs->get_int_queue_base(VAR_1, VAR_2->hw_queue_id,
     &VAR_2->bus_address, &VAR_2->int_queue_len);
 if (!VAR_3) {
  FUNC_0(VAR_1->dev,
   "Failed to get base address for internal queue %d\n",
   VAR_2->hw_queue_id);
  return -VAR_0;
 }

 VAR_2->kernel_address = (u64) (uintptr_t) VAR_3;
 VAR_2->pi = 0;
 VAR_2->ci = 0;

 return 0;
}
