
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u32 ;
struct hl_hw_queue {scalar_t__ queue_type; } ;
struct hl_device {TYPE_1__* asic_funcs; scalar_t__ disabled; struct hl_hw_queue* kernel_queues; } ;
struct TYPE_2__ {int (* hw_queues_unlock ) (struct hl_device*) ;int (* hw_queues_lock ) (struct hl_device*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct hl_device*,struct hl_hw_queue*,int,int) ;
 int FUNC_1 (struct hl_device*,struct hl_hw_queue*,int ,size_t,int ) ;
 int FUNC_2 (struct hl_device*) ;
 int FUNC_3 (struct hl_device*) ;

int FUNC_4(struct hl_device *VAR_2, u32 VAR_3,
    u32 VAR_4, u64 VAR_5)
{
 struct hl_hw_queue *VAR_6 = &VAR_2->kernel_queues[VAR_3];
 int VAR_7;
 if (VAR_6->queue_type != VAR_1)
  VAR_2->asic_funcs->hw_queues_lock(VAR_2);

 if (VAR_2->disabled) {
  VAR_7 = -VAR_0;
  goto out;
 }

 VAR_7 = FUNC_0(VAR_2, VAR_6, 1, 0);
 if (VAR_7)
  goto out;

 FUNC_1(VAR_2, VAR_6, 0, VAR_4, VAR_5);

out:
 if (VAR_6->queue_type != VAR_1)
  VAR_2->asic_funcs->hw_queues_unlock(VAR_2);

 return VAR_7;
}
