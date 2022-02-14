
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {int xen_cpuid; scalar_t__ acpi_id; int max_present; } ;
struct TYPE_3__ {TYPE_2__ pcpu_info; } ;
struct xen_platform_op {TYPE_1__ u; int cmd; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct xen_platform_op*) ;
 int VAR_1 ;

int FUNC_1(uint32_t VAR_2)
{
 int VAR_3 = 0, VAR_4 = 0;
 struct xen_platform_op VAR_5;

 VAR_5.cmd = VAR_1;
 while (VAR_3 <= VAR_4) {
  VAR_5.u.pcpu_info.xen_cpuid = VAR_3;
  if (FUNC_0(&VAR_5)) {
   VAR_3++;
   continue;
  }

  if (VAR_2 == VAR_5.u.pcpu_info.acpi_id)
   return VAR_3;
  if (VAR_5.u.pcpu_info.max_present > VAR_4)
   VAR_4 = VAR_5.u.pcpu_info.max_present;
  VAR_3++;
 }

 return -VAR_0;
}
