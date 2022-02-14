
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath6kl_vif {scalar_t__ nw_type; int ndev; int fw_vif_idx; struct ath6kl* ar; int flags; int bmiss_time_t; int listen_intvl_t; } ;
struct ath6kl {int wmi; int * fw_capabilities; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ,int ,int ,int,int ,int ,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct ath6kl_vif *VAR_3)
{
 struct ath6kl *VAR_4 = VAR_3->ar;
 int VAR_5;

 if (VAR_3->nw_type != VAR_0) {
  VAR_5 = FUNC_3(VAR_4->wmi, VAR_3->fw_vif_idx,
      0, 0, 0, 0, 0, 0, 3, 0, 0, 0);
  if (VAR_5)
   return VAR_5;

  VAR_5 = FUNC_1(VAR_4->wmi, VAR_3->fw_vif_idx,
          VAR_3->listen_intvl_t, 0);
  if (VAR_5)
   return VAR_5;

  VAR_5 = FUNC_0(VAR_4->wmi, VAR_3->fw_vif_idx,
            VAR_3->bmiss_time_t, 0);
  if (VAR_5)
   return VAR_5;
 }

 if (!FUNC_5(VAR_2, &VAR_3->flags) &&
     FUNC_5(VAR_1,
       VAR_4->fw_capabilities)) {
  VAR_5 = FUNC_2(VAR_3->ar->wmi,
        VAR_3->fw_vif_idx, 1);
  if (VAR_5)
   return VAR_5;
 }

 FUNC_4(VAR_3->ndev);

 return 0;
}
