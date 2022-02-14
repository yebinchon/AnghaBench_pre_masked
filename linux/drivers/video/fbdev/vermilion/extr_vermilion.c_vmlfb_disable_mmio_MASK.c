
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vml_par {int vdc_mem_size; int vdc_mem_base; int vdc_mem; int gpu_mem_size; int gpu_mem_base; int gpu_mem; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct vml_par *VAR_0)
{
 FUNC_0(VAR_0->gpu_mem);
 FUNC_1(VAR_0->gpu_mem_base, VAR_0->gpu_mem_size);
 FUNC_0(VAR_0->vdc_mem);
 FUNC_1(VAR_0->vdc_mem_base, VAR_0->vdc_mem_size);
}
