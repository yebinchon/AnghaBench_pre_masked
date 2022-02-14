
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct hl_hw_queue {int pi; int int_queue_len; int hw_queue_id; scalar_t__ kernel_address; } ;
struct hl_device {TYPE_3__* asic_funcs; struct hl_hw_queue* kernel_queues; } ;
struct hl_cs_job {size_t hw_queue_id; scalar_t__ user_cb; int job_cb_size; TYPE_2__* cs; } ;
struct hl_bd {int ptr; int len; scalar_t__ ctl; } ;
typedef int bd ;
typedef int __le64 ;
struct TYPE_6__ {int (* ring_doorbell ) (struct hl_device*,int ,int) ;int (* pqe_write ) (struct hl_device*,int *,struct hl_bd*) ;} ;
struct TYPE_5__ {TYPE_1__* ctx; } ;
struct TYPE_4__ {struct hl_device* hdev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hl_device*,int *,struct hl_bd*) ;
 int FUNC_3 (struct hl_device*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct hl_cs_job *VAR_0)
{
 struct hl_device *VAR_1 = VAR_0->cs->ctx->hdev;
 struct hl_hw_queue *VAR_2 = &VAR_1->kernel_queues[VAR_0->hw_queue_id];
 struct hl_bd VAR_3;
 __le64 *VAR_4;

 VAR_3.ctl = 0;
 VAR_3.len = FUNC_0(VAR_0->job_cb_size);
 VAR_3.ptr = FUNC_1((u64) (uintptr_t) VAR_0->user_cb);

 VAR_4 = (__le64 *) (uintptr_t) (VAR_2->kernel_address +
  ((VAR_2->pi & (VAR_2->int_queue_len - 1)) * sizeof(VAR_3)));

 VAR_2->pi++;
 VAR_2->pi &= ((VAR_2->int_queue_len << 1) - 1);

 VAR_1->asic_funcs->pqe_write(VAR_1, VAR_4, &VAR_3);

 VAR_1->asic_funcs->ring_doorbell(VAR_1, VAR_2->hw_queue_id, VAR_2->pi);
}
