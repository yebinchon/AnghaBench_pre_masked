
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xpc_partition_uv {int flags; } ;
struct TYPE_3__ {struct xpc_partition_uv uv; } ;
struct TYPE_4__ {TYPE_1__ sn; } ;


 int VAR_0 ;
 short VAR_1 ;
 TYPE_2__* VAR_2 ;

__attribute__((used)) static int
FUNC_0(void)
{
 struct xpc_partition_uv *VAR_3;
 short VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  VAR_3 = &VAR_2[VAR_4].sn.uv;
  if ((VAR_3->flags & VAR_0) != 0)
   return 1;
 }
 return 0;
}
