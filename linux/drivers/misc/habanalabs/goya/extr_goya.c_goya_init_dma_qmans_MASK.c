
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hl_hw_queue {int bus_address; } ;
struct hl_device {struct hl_hw_queue* kernel_queues; struct goya_device* asic_specific; } ;
struct goya_device {int hw_cap_initialized; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hl_device*,int) ;
 int FUNC_1 (struct hl_device*,int,int ) ;

void FUNC_2(struct hl_device *VAR_2)
{
 struct goya_device *VAR_3 = VAR_2->asic_specific;
 struct hl_hw_queue *VAR_4;
 int VAR_5;

 if (VAR_3->hw_cap_initialized & VAR_0)
  return;

 VAR_4 = &VAR_2->kernel_queues[0];

 for (VAR_5 = 0 ; VAR_5 < VAR_1 ; VAR_5++, VAR_4++) {
  FUNC_1(VAR_2, VAR_5, VAR_4->bus_address);
  FUNC_0(VAR_2, VAR_5);
 }

 VAR_3->hw_cap_initialized |= VAR_0;
}
