
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int cpuid; } ;
struct TYPE_4__ {TYPE_1__ cpu_ol; } ;
struct xen_platform_op {TYPE_2__ u; int interface_version; int cmd; } ;


 int FUNC_0 (struct xen_platform_op*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(uint32_t VAR_2)
{
 struct xen_platform_op VAR_3 = {
  .cmd = VAR_1,
  .interface_version = VAR_0,
  .u.cpu_ol.cpuid = VAR_2,
 };

 return FUNC_0(&VAR_3);
}
