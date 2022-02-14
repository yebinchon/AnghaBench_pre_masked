
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hl_hw_queue {scalar_t__ queue_type; int ci; int int_queue_len; } ;
struct hl_device {TYPE_1__* asic_funcs; struct hl_hw_queue* kernel_queues; scalar_t__ disabled; } ;
struct hl_cs {scalar_t__* jobs_in_queue_cnt; TYPE_2__* ctx; } ;
struct TYPE_4__ {struct hl_device* hdev; } ;
struct TYPE_3__ {int (* hw_queues_unlock ) (struct hl_device*) ;int (* hw_queues_lock ) (struct hl_device*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct hl_device*) ;
 int FUNC_1 (struct hl_device*) ;

void FUNC_2(struct hl_cs *VAR_2)
{
 struct hl_device *VAR_3 = VAR_2->ctx->hdev;
 struct hl_hw_queue *VAR_4;
 int VAR_5;

 VAR_3->asic_funcs->hw_queues_lock(VAR_3);

 if (VAR_3->disabled)
  goto out;

 VAR_4 = &VAR_3->kernel_queues[0];
 for (VAR_5 = 0 ; VAR_5 < VAR_0 ; VAR_5++, VAR_4++) {
  if (VAR_4->queue_type == VAR_1) {
   VAR_4->ci += VAR_2->jobs_in_queue_cnt[VAR_5];
   VAR_4->ci &= ((VAR_4->int_queue_len << 1) - 1);
  }
 }

out:
 VAR_3->asic_funcs->hw_queues_unlock(VAR_3);
}
