
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acpi_memory_device {TYPE_1__* device; } ;
struct TYPE_2__ {int handle; } ;


 scalar_t__ FUNC_0 (int ) ;
 unsigned long long VAR_0 ;
 unsigned long long VAR_1 ;
 unsigned long long VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,int *,unsigned long long*) ;

__attribute__((used)) static int FUNC_2(struct acpi_memory_device *VAR_4)
{
 unsigned long long VAR_5;


 if (FUNC_0(FUNC_1(VAR_4->device->handle,
    "_STA", ((void*)0), &VAR_5)))
  return -VAR_3;




 if (!((VAR_5 & VAR_2)
       && (VAR_5 & VAR_0)
       && (VAR_5 & VAR_1)))
  return -VAR_3;

 return 0;
}
