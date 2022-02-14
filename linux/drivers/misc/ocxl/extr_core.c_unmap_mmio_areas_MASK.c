
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int global_mmio_bar; int pp_mmio_bar; } ;
struct ocxl_afu {TYPE_1__ config; int fn; scalar_t__ pp_mmio_start; scalar_t__ global_mmio_start; int * global_mmio_ptr; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct ocxl_afu *VAR_0)
{
 if (VAR_0->global_mmio_ptr) {
  FUNC_0(VAR_0->global_mmio_ptr);
  VAR_0->global_mmio_ptr = ((void*)0);
 }
 VAR_0->global_mmio_start = 0;
 VAR_0->pp_mmio_start = 0;
 FUNC_1(VAR_0->fn, VAR_0->config.pp_mmio_bar);
 FUNC_1(VAR_0->fn, VAR_0->config.global_mmio_bar);
}
