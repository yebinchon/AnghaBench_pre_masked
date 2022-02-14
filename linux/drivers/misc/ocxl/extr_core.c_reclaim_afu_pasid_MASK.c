
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocxl_fn {int pasid_base; } ;
struct TYPE_2__ {int pasid_supported_log; } ;
struct ocxl_afu {int pasid_base; struct ocxl_fn* fn; TYPE_1__ config; } ;


 int FUNC_0 (struct ocxl_fn*,int,int) ;

__attribute__((used)) static void FUNC_1(struct ocxl_afu *VAR_0)
{
 struct ocxl_fn *VAR_1 = VAR_0->fn;
 int VAR_2, VAR_3;

 VAR_2 = VAR_0->pasid_base - VAR_1->pasid_base;
 VAR_3 = 1 << VAR_0->config.pasid_supported_log;
 FUNC_0(VAR_0->fn, VAR_2, VAR_3);
}
