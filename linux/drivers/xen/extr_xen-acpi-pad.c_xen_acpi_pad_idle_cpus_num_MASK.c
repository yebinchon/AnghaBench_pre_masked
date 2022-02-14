
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int idle_nums; int type; } ;
struct TYPE_4__ {TYPE_1__ core_parking; } ;
struct xen_platform_op {TYPE_2__ u; int cmd; } ;


 scalar_t__ FUNC_0 (struct xen_platform_op*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(void)
{
 struct xen_platform_op VAR_2;

 VAR_2.cmd = VAR_0;
 VAR_2.u.core_parking.type = VAR_1;

 return FUNC_0(&VAR_2)
        ?: VAR_2.u.core_parking.idle_nums;
}
