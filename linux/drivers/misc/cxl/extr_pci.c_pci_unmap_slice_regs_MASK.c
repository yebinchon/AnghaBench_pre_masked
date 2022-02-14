
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cxl_afu {TYPE_1__* native; int * p2n_mmio; } ;
struct TYPE_2__ {int * afu_desc_mmio; int * p1n_mmio; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct cxl_afu *VAR_0)
{
 if (VAR_0->p2n_mmio) {
  FUNC_0(VAR_0->p2n_mmio);
  VAR_0->p2n_mmio = ((void*)0);
 }
 if (VAR_0->native->p1n_mmio) {
  FUNC_0(VAR_0->native->p1n_mmio);
  VAR_0->native->p1n_mmio = ((void*)0);
 }
 if (VAR_0->native->afu_desc_mmio) {
  FUNC_0(VAR_0->native->afu_desc_mmio);
  VAR_0->native->afu_desc_mmio = ((void*)0);
 }
}
