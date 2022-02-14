
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hl_device {struct goya_device* asic_specific; } ;
struct goya_device {int hw_queues_lock; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct hl_device *VAR_0)
{
 struct goya_device *VAR_1 = VAR_0->asic_specific;

 FUNC_0(&VAR_1->hw_queues_lock);
}
