
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath6kl_vif {int fw_vif_idx; int sched_scan_timer; int flags; struct ath6kl* ar; } ;
struct ath6kl {scalar_t__ state; int wmi; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static bool FUNC_3(struct ath6kl_vif *VAR_2)
{
 struct ath6kl *VAR_3 = VAR_2->ar;

 if (!FUNC_2(VAR_1, &VAR_2->flags))
  return 0;

 FUNC_1(&VAR_2->sched_scan_timer);

 if (VAR_3->state == VAR_0)
  return 1;

 FUNC_0(VAR_3->wmi, VAR_2->fw_vif_idx, 0);

 return 1;
}
