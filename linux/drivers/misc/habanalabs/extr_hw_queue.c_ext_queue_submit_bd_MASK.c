
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct hl_hw_queue {int pi; int hw_queue_id; scalar_t__ kernel_address; } ;
struct hl_device {TYPE_1__* asic_funcs; } ;
struct hl_bd {int ptr; void* len; void* ctl; } ;
struct TYPE_2__ {int (* ring_doorbell ) (struct hl_device*,int ,int ) ;} ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct hl_device*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct hl_device *VAR_0, struct hl_hw_queue *VAR_1,
    u32 VAR_2, u32 VAR_3, u64 VAR_4)
{
 struct hl_bd *VAR_5;

 VAR_5 = (struct hl_bd *) (uintptr_t) VAR_1->kernel_address;
 VAR_5 += FUNC_2(VAR_1->pi);
 VAR_5->ctl = FUNC_0(VAR_2);
 VAR_5->len = FUNC_0(VAR_3);
 VAR_5->ptr = FUNC_1(VAR_4);

 VAR_1->pi = FUNC_3(VAR_1->pi);
 VAR_0->asic_funcs->ring_doorbell(VAR_0, VAR_1->hw_queue_id, VAR_1->pi);
}
