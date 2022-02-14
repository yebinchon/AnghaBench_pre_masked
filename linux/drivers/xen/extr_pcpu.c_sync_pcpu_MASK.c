
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct xenpf_pcpuinfo {int flags; int max_present; int xen_cpuid; } ;
struct TYPE_2__ {struct xenpf_pcpuinfo pcpu_info; } ;
struct xen_platform_op {TYPE_1__ u; int interface_version; int cmd; } ;
struct pcpu {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct xen_platform_op*) ;
 scalar_t__ FUNC_1 (struct pcpu*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct pcpu* FUNC_2 (struct xenpf_pcpuinfo*) ;
 struct pcpu* FUNC_3 (int ) ;
 int FUNC_4 (struct xenpf_pcpuinfo*,struct pcpu*) ;
 int FUNC_5 (struct pcpu*) ;

__attribute__((used)) static int FUNC_6(uint32_t VAR_4, uint32_t *VAR_5)
{
 int VAR_6;
 struct pcpu *VAR_7 = ((void*)0);
 struct xenpf_pcpuinfo *VAR_8;
 struct xen_platform_op VAR_9 = {
  .cmd = VAR_2,
  .interface_version = VAR_1,
  .u.pcpu_info.xen_cpuid = VAR_4,
 };

 VAR_6 = FUNC_0(&VAR_9);
 if (VAR_6)
  return VAR_6;

 VAR_8 = &VAR_9.u.pcpu_info;
 if (VAR_5)
  *VAR_5 = VAR_8->max_present;

 VAR_7 = FUNC_3(VAR_4);




 if (VAR_8->flags & VAR_3) {
  FUNC_5(VAR_7);
  return 0;
 }

 if (!VAR_7) {
  VAR_7 = FUNC_2(VAR_8);
  if (FUNC_1(VAR_7))
   return -VAR_0;
 } else
  FUNC_4(VAR_8, VAR_7);

 return 0;
}
