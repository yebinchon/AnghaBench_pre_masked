
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct hl_hw_queue {int ci; } ;
struct hl_device {struct hl_hw_queue* kernel_queues; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct hl_device *VAR_0, u32 VAR_1)
{
 struct hl_hw_queue *VAR_2 = &VAR_0->kernel_queues[VAR_1];

 VAR_2->ci = FUNC_0(VAR_2->ci);
}
