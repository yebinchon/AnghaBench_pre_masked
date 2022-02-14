
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hl_device {TYPE_1__* asic_funcs; } ;
struct hl_cb {int bus_address; scalar_t__ kernel_address; int size; } ;
struct TYPE_2__ {int (* asic_dma_free_coherent ) (struct hl_device*,int ,void*,int ) ;} ;


 int FUNC_0 (struct hl_cb*) ;
 int FUNC_1 (struct hl_device*,int ,void*,int ) ;

__attribute__((used)) static void FUNC_2(struct hl_device *VAR_0, struct hl_cb *VAR_1)
{
 VAR_0->asic_funcs->asic_dma_free_coherent(VAR_0, VAR_1->size,
   (void *) (uintptr_t) VAR_1->kernel_address,
   VAR_1->bus_address);
 FUNC_0(VAR_1);
}
