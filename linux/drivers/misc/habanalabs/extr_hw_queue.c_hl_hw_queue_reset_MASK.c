
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hl_hw_queue {scalar_t__ queue_type; scalar_t__ ci; scalar_t__ pi; int valid; } ;
struct hl_device {struct hl_hw_queue* kernel_queues; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

void FUNC_0(struct hl_device *VAR_2, bool VAR_3)
{
 struct hl_hw_queue *VAR_4;
 int VAR_5;

 for (VAR_5 = 0, VAR_4 = VAR_2->kernel_queues ; VAR_5 < VAR_0 ; VAR_5++, VAR_4++) {
  if ((!VAR_4->valid) ||
   ((!VAR_3) && (VAR_4->queue_type == VAR_1)))
   continue;
  VAR_4->pi = VAR_4->ci = 0;
 }
}
