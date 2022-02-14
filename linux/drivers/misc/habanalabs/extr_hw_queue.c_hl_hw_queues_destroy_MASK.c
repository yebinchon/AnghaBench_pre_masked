
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hl_hw_queue {int dummy; } ;
struct hl_device {struct hl_hw_queue* kernel_queues; } ;


 int VAR_0 ;
 int FUNC_0 (struct hl_device*,struct hl_hw_queue*) ;
 int FUNC_1 (struct hl_hw_queue*) ;

void FUNC_2(struct hl_device *VAR_1)
{
 struct hl_hw_queue *VAR_2;
 int VAR_3;

 for (VAR_3 = 0, VAR_2 = VAR_1->kernel_queues ; VAR_3 < VAR_0 ; VAR_3++, VAR_2++)
  FUNC_0(VAR_1, VAR_2);

 FUNC_1(VAR_1->kernel_queues);
}
