
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocxl_fn {int actag_base; } ;
struct ocxl_afu {int actag_base; int actag_enabled; struct ocxl_fn* fn; } ;


 int FUNC_0 (struct ocxl_fn*,int,int) ;

__attribute__((used)) static void FUNC_1(struct ocxl_afu *VAR_0)
{
 struct ocxl_fn *VAR_1 = VAR_0->fn;
 int VAR_2, VAR_3;

 VAR_2 = VAR_0->actag_base - VAR_1->actag_base;
 VAR_3 = VAR_0->actag_enabled;
 FUNC_0(VAR_0->fn, VAR_2, VAR_3);
}
