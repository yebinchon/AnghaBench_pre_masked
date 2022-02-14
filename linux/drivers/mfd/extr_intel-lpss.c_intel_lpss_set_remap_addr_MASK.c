
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_lpss {scalar_t__ priv; TYPE_2__* info; } ;
typedef int resource_size_t ;
struct TYPE_4__ {TYPE_1__* mem; } ;
struct TYPE_3__ {int start; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(const struct intel_lpss *VAR_1)
{
 resource_size_t VAR_2 = VAR_1->info->mem->start;

 FUNC_0(VAR_2, VAR_1->priv + VAR_0);
}
