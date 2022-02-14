
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct xen_platform_op {int dummy; } ;
typedef int efi_status_t ;
struct TYPE_2__ {int status; int misc; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct xen_platform_op*) ;
 struct xen_platform_op FUNC_1 (int ) ;
 TYPE_1__ FUNC_2 (struct xen_platform_op) ;
 int VAR_1 ;

__attribute__((used)) static efi_status_t FUNC_3(u32 *VAR_2)
{
 struct xen_platform_op VAR_3 = FUNC_1(VAR_1);

 if (FUNC_0(&VAR_3) < 0)
  return VAR_0;

 *VAR_2 = FUNC_2(VAR_3).misc;

 return FUNC_2(VAR_3).status;
}
