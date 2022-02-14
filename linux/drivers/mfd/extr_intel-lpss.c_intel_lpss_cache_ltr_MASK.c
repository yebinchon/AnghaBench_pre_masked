
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_lpss {scalar_t__ priv; void* idle_ltr; void* active_ltr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct intel_lpss *VAR_2)
{
 VAR_2->active_ltr = FUNC_0(VAR_2->priv + VAR_0);
 VAR_2->idle_ltr = FUNC_0(VAR_2->priv + VAR_1);
}
