
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int completion_queues_count; } ;
struct hl_device {int pdev; TYPE_1__ asic_prop; struct goya_device* asic_specific; } ;
struct goya_device {int hw_cap_initialized; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct hl_device *VAR_2)
{
 struct goya_device *VAR_3 = VAR_2->asic_specific;
 int VAR_4;

 if (!(VAR_3->hw_cap_initialized & VAR_1))
  return;


 for (VAR_4 = 0 ; VAR_4 < VAR_2->asic_prop.completion_queues_count ; VAR_4++)
  FUNC_1(FUNC_0(VAR_2->pdev, VAR_4));

 FUNC_1(FUNC_0(VAR_2->pdev, VAR_0));
}
