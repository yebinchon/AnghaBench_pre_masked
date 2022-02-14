
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ value; int offline; } ;
struct xpc_partition_uv {TYPE_2__ cached_heartbeat; int heartbeat_gpa; } ;
struct TYPE_3__ {struct xpc_partition_uv uv; } ;
struct xpc_partition {scalar_t__ last_heartbeat; TYPE_1__ sn; } ;
struct xpc_heartbeat_uv {int dummy; } ;
typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static enum xp_retval
FUNC_2(struct xpc_partition *VAR_2)
{
 struct xpc_partition_uv *VAR_3 = &VAR_2->sn.uv;
 enum xp_retval VAR_4;

 VAR_4 = FUNC_1(FUNC_0(&VAR_3->cached_heartbeat),
          VAR_3->heartbeat_gpa,
          sizeof(struct xpc_heartbeat_uv));
 if (VAR_4 != VAR_1)
  return VAR_4;

 if (VAR_3->cached_heartbeat.value == VAR_2->last_heartbeat &&
     !VAR_3->cached_heartbeat.offline) {

  VAR_4 = VAR_0;
 } else {
  VAR_2->last_heartbeat = VAR_3->cached_heartbeat.value;
 }
 return VAR_4;
}
