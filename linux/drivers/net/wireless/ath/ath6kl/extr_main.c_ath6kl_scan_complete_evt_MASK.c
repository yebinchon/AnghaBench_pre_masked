
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath6kl_vif {int fw_vif_idx; int flags; struct ath6kl* ar; } ;
struct ath6kl {int wmi; int usr_bss_filter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ath6kl_vif*,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int *) ;

void FUNC_4(struct ath6kl_vif *VAR_4, int VAR_5)
{
 struct ath6kl *VAR_6 = VAR_4->ar;
 bool VAR_7 = 0;

 if (VAR_5 != VAR_3)
  VAR_7 = 1;

 FUNC_0(VAR_4, VAR_7);

 if (!VAR_6->usr_bss_filter) {
  FUNC_3(VAR_1, &VAR_4->flags);
  FUNC_2(VAR_6->wmi, VAR_4->fw_vif_idx,
      VAR_2, 0);
 }

 FUNC_1(VAR_0, "scan complete: %d\n", VAR_5);
}
