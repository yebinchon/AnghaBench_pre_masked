
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xpc_partition_uv {int flags_lock; int flags; } ;
struct TYPE_3__ {struct xpc_partition_uv uv; } ;
struct TYPE_4__ {TYPE_1__ sn; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static void
FUNC_2(short VAR_2)
{
 struct xpc_partition_uv *VAR_3 = &VAR_1[VAR_2].sn.uv;
 unsigned long VAR_4;

 FUNC_0(&VAR_3->flags_lock, VAR_4);
 VAR_3->flags &= ~VAR_0;
 FUNC_1(&VAR_3->flags_lock, VAR_4);
}
