
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct int3406_thermal_data {int lower_limit; int upper_limit; TYPE_1__* br; int handle; } ;
typedef int acpi_status ;
struct TYPE_2__ {int count; int levels; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int *,unsigned long long*) ;
 void* FUNC_2 (int ,int,unsigned long long) ;

__attribute__((used)) static void FUNC_3(struct int3406_thermal_data *VAR_0)
{
 acpi_status VAR_1;
 unsigned long long VAR_2, VAR_3;

 VAR_1 = FUNC_1(VAR_0->handle, "DDDL", ((void*)0), &VAR_2);
 if (FUNC_0(VAR_1))
  VAR_0->lower_limit = FUNC_2(VAR_0->br->levels,
     VAR_0->br->count, VAR_2);

 VAR_1 = FUNC_1(VAR_0->handle, "DDPC", ((void*)0), &VAR_3);
 if (FUNC_0(VAR_1))
  VAR_0->upper_limit = FUNC_2(VAR_0->br->levels,
     VAR_0->br->count, VAR_3);


 VAR_0->lower_limit = VAR_0->lower_limit > 0 ? VAR_0->lower_limit : 2;
 VAR_0->upper_limit = VAR_0->upper_limit > 0 ? VAR_0->upper_limit : VAR_0->br->count - 1;
}
