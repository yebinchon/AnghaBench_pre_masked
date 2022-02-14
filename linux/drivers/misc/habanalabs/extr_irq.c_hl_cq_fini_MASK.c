
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hl_device {TYPE_1__* asic_funcs; } ;
struct hl_cq {int bus_address; scalar_t__ kernel_address; } ;
struct TYPE_2__ {int (* asic_dma_free_coherent ) (struct hl_device*,int ,void*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct hl_device*,int ,void*,int ) ;

void FUNC_1(struct hl_device *VAR_1, struct hl_cq *VAR_2)
{
 VAR_1->asic_funcs->asic_dma_free_coherent(VAR_1, VAR_0,
   (void *) (uintptr_t) VAR_2->kernel_address, VAR_2->bus_address);
}
