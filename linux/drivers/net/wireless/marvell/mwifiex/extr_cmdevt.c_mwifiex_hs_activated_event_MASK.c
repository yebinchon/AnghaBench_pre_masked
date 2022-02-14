
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct mwifiex_private {TYPE_1__* adapter; } ;
struct TYPE_3__ {int hs_activated; int hs_activate_wait_q_woken; int hs_activate_wait_q; int work_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,char*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(struct mwifiex_private *VAR_3, u8 VAR_4)
{
 if (VAR_4) {
  if (FUNC_2(VAR_1,
        &VAR_3->adapter->work_flags)) {
   VAR_3->adapter->hs_activated = 1;
   FUNC_1(VAR_3->adapter,
          VAR_2);
   FUNC_0(VAR_3->adapter, VAR_0,
        "event: hs_activated\n");
   VAR_3->adapter->hs_activate_wait_q_woken = 1;
   FUNC_3(
    &VAR_3->adapter->hs_activate_wait_q);
  } else {
   FUNC_0(VAR_3->adapter, VAR_0,
        "event: HS not configured\n");
  }
 } else {
  FUNC_0(VAR_3->adapter, VAR_0,
       "event: hs_deactivated\n");
  VAR_3->adapter->hs_activated = 0;
 }
}
