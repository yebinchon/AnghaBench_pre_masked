
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_3__ {scalar_t__ act_state_req; int reason; } ;
struct TYPE_4__ {TYPE_1__ uv; } ;
struct xpc_partition {scalar_t__ act_state; TYPE_2__ sn; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct xpc_partition*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 short VAR_5 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (struct xpc_partition*) ;
 struct xpc_partition* VAR_9 ;

__attribute__((used)) static void
FUNC_7(void)
{
 unsigned long VAR_10;
 short VAR_11;
 struct xpc_partition *VAR_12;
 u8 VAR_13;

 FUNC_2(VAR_7 == 0);

 FUNC_4(&VAR_8, VAR_10);
 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
  VAR_12 = &VAR_9[VAR_11];

  if (VAR_12->sn.uv.act_state_req == 0)
   continue;

  VAR_7--;
  FUNC_1(VAR_7 < 0);

  VAR_13 = VAR_12->sn.uv.act_state_req;
  VAR_12->sn.uv.act_state_req = 0;
  FUNC_5(&VAR_8, VAR_10);

  if (VAR_13 == VAR_0) {
   if (VAR_12->act_state == VAR_4)
    FUNC_6(VAR_12);
   else if (VAR_12->act_state == VAR_3)
    FUNC_3(VAR_12, VAR_6);

  } else if (VAR_13 == VAR_2) {
   if (VAR_12->act_state == VAR_4)
    FUNC_6(VAR_12);
   else
    FUNC_3(VAR_12, VAR_6);

  } else if (VAR_13 == VAR_1) {
   FUNC_3(VAR_12, VAR_12->sn.uv.reason);

  } else {
   FUNC_0();
  }

  FUNC_4(&VAR_8, VAR_10);
  if (VAR_7 == 0)
   break;
 }
 FUNC_5(&VAR_8, VAR_10);

}
