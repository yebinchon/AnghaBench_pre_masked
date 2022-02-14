
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int wakeup_wait; int snooze_guard; int confirm_wait; int status; } ;
struct ks_wlan_private {int wakeup_work; TYPE_1__ psstatus; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_3(struct ks_wlan_private *VAR_2)
{
 FUNC_1(&VAR_2->psstatus.status, VAR_0);
 FUNC_1(&VAR_2->psstatus.confirm_wait, 0);
 FUNC_1(&VAR_2->psstatus.snooze_guard, 0);
 FUNC_2(&VAR_2->psstatus.wakeup_wait);
 FUNC_0(&VAR_2->wakeup_work, VAR_1);
}
