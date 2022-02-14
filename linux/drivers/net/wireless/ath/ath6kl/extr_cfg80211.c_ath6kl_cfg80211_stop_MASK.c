
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath6kl_vif {int sme_state; int fw_vif_idx; TYPE_1__* ar; int ndev; int flags; int bssid; } ;
struct TYPE_2__ {scalar_t__ state; int wmi; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int FUNC_0 (struct ath6kl_vif*,int) ;
 int FUNC_1 (struct ath6kl_vif*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ,int *,int ,int *,int ,int ,int ) ;
 int FUNC_6 (int ,int ,int *,int ,int,int ) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,int *) ;

void FUNC_11(struct ath6kl_vif *VAR_5)
{
 FUNC_1(VAR_5);

 switch (VAR_5->sme_state) {
 case 128:
  break;
 case 129:
  FUNC_5(VAR_5->ndev, VAR_5->bssid, ((void*)0), 0,
     ((void*)0), 0,
     VAR_4,
     VAR_3);
  break;
 case 130:
  FUNC_6(VAR_5->ndev, 0, ((void*)0), 0, 1, VAR_3);
  break;
 }

 if (VAR_5->ar->state != VAR_0 &&
     (FUNC_10(VAR_1, &VAR_5->flags) ||
     FUNC_10(VAR_2, &VAR_5->flags)))
  FUNC_3(VAR_5->ar->wmi, VAR_5->fw_vif_idx);

 VAR_5->sme_state = 128;
 FUNC_7(VAR_1, &VAR_5->flags);
 FUNC_7(VAR_2, &VAR_5->flags);


 FUNC_9(VAR_5->ndev);
 FUNC_8(VAR_5->ndev);


 if (VAR_5->ar->state != VAR_0 &&
     FUNC_4(VAR_5->ar->wmi, VAR_5->fw_vif_idx, 0xFFFF,
          0, 0, 0, 0, 0, 0, 0, 0, 0) != 0)
  FUNC_2("failed to disable scan during stop\n");

 FUNC_0(VAR_5, 1);
}
