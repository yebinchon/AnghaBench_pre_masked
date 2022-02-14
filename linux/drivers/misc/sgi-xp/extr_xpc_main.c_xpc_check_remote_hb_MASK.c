
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xpc_partition {scalar_t__ act_state; } ;
typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;
struct TYPE_2__ {int (* get_remote_heartbeat ) (struct xpc_partition*) ;} ;


 int FUNC_0 (struct xpc_partition*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct xpc_partition*) ;
 int VAR_2 ;
 short VAR_3 ;
 short VAR_4 ;
 TYPE_1__ VAR_5 ;
 scalar_t__ VAR_6 ;
 struct xpc_partition* VAR_7 ;

__attribute__((used)) static void
FUNC_2(void)
{
 struct xpc_partition *VAR_8;
 short VAR_9;
 enum xp_retval VAR_10;

 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {

  if (VAR_6)
   break;

  if (VAR_9 == VAR_4)
   continue;

  VAR_8 = &VAR_7[VAR_9];

  if (VAR_8->act_state == VAR_1 ||
      VAR_8->act_state == VAR_0) {
   continue;
  }

  VAR_10 = VAR_5.get_remote_heartbeat(VAR_8);
  if (VAR_10 != VAR_2)
   FUNC_0(VAR_8, VAR_10);
 }
}
