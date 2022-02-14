
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hl_eq {scalar_t__ kernel_address; } ;
struct hl_device {TYPE_1__* asic_funcs; int eq_wq; } ;
struct TYPE_2__ {int (* cpu_accessible_dma_pool_free ) (struct hl_device*,int ,void*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct hl_device*,int ,void*) ;

void FUNC_2(struct hl_device *VAR_1, struct hl_eq *VAR_2)
{
 FUNC_0(VAR_1->eq_wq);

 VAR_1->asic_funcs->cpu_accessible_dma_pool_free(VAR_1,
     VAR_0,
     (void *) (uintptr_t) VAR_2->kernel_address);
}
