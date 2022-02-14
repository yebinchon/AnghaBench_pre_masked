
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct hl_hw_queue {int pi; size_t hw_queue_id; struct hl_cs_job** shadow_queue; } ;
struct hl_device {TYPE_3__* asic_funcs; struct hl_cq* completion_queue; struct hl_hw_queue* kernel_queues; } ;
struct hl_cs_job {size_t hw_queue_id; int job_cb_size; struct hl_cb* patched_cb; TYPE_2__* cs; } ;
struct hl_cq_entry {int data; } ;
struct hl_cq {int pi; scalar_t__ bus_address; } ;
struct hl_cb {int kernel_address; scalar_t__ bus_address; } ;
struct TYPE_6__ {int (* add_end_of_cb_packets ) (struct hl_device*,int ,int,scalar_t__,int ,size_t) ;} ;
struct TYPE_5__ {TYPE_1__* ctx; } ;
struct TYPE_4__ {struct hl_device* hdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct hl_device*,struct hl_hw_queue*,int,int,scalar_t__) ;
 int FUNC_2 (int) ;
 size_t FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct hl_device*,int ,int,scalar_t__,int ,size_t) ;

__attribute__((used)) static void FUNC_6(struct hl_cs_job *VAR_6)
{
 struct hl_device *VAR_7 = VAR_6->cs->ctx->hdev;
 struct hl_hw_queue *VAR_8 = &VAR_7->kernel_queues[VAR_6->hw_queue_id];
 struct hl_cq_entry VAR_9;
 struct hl_cq *VAR_10;
 u64 VAR_11;
 struct hl_cb *VAR_12;
 u32 VAR_13;
 u32 VAR_14;
 u64 VAR_15;





 VAR_13 = ((VAR_8->pi << VAR_1) & VAR_0);

 VAR_12 = VAR_6->patched_cb;
 VAR_14 = VAR_6->job_cb_size;
 VAR_15 = VAR_12->bus_address;

 VAR_9.data = FUNC_0(
    ((VAR_8->pi << VAR_4)
     & VAR_3) |
    (1 << VAR_5) |
    (1 << VAR_2));
 VAR_10 = &VAR_7->completion_queue[VAR_8->hw_queue_id];
 VAR_11 = VAR_10->bus_address + VAR_10->pi * sizeof(struct hl_cq_entry);

 VAR_7->asic_funcs->add_end_of_cb_packets(VAR_7, VAR_12->kernel_address, VAR_14,
      VAR_11,
      FUNC_4(VAR_9.data),
      VAR_8->hw_queue_id);

 VAR_8->shadow_queue[FUNC_3(VAR_8->pi)] = VAR_6;

 VAR_10->pi = FUNC_2(VAR_10->pi);

 FUNC_1(VAR_7, VAR_8, VAR_13, VAR_14, VAR_15);
}
