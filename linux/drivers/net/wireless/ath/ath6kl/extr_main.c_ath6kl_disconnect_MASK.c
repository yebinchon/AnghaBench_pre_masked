
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath6kl_vif {int flags; int fw_vif_idx; TYPE_1__* ar; } ;
struct TYPE_2__ {int wmi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;

void FUNC_3(struct ath6kl_vif *VAR_2)
{
 if (FUNC_2(VAR_0, &VAR_2->flags) ||
     FUNC_2(VAR_1, &VAR_2->flags)) {
  FUNC_0(VAR_2->ar->wmi, VAR_2->fw_vif_idx);





  FUNC_1(VAR_1, &VAR_2->flags);
 }
}
