
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ath6kl_vif {int fw_vif_idx; } ;
struct ath6kl {TYPE_1__* wmi; int flag; } ;
struct TYPE_3__ {int pwr_mode; int saved_pwr_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ath6kl*,struct ath6kl_vif*) ;
 int FUNC_1 (struct ath6kl*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct ath6kl*) ;
 struct ath6kl_vif* FUNC_4 (struct ath6kl*) ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;
 int FUNC_6 (TYPE_1__*,int ,int ,int ,int ) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct ath6kl *VAR_4)
{
 struct ath6kl_vif *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_4(VAR_4);
 if (!VAR_5)
  return -VAR_1;

 if (!FUNC_7(VAR_3, &VAR_4->flag)) {
  FUNC_2("deepsleep failed as wmi is not ready\n");
  return -VAR_1;
 }

 FUNC_1(VAR_4);


 VAR_4->wmi->saved_pwr_mode = VAR_4->wmi->pwr_mode;

 VAR_6 = FUNC_5(VAR_4->wmi, 0, VAR_2);
 if (VAR_6)
  return VAR_6;


 VAR_6 = FUNC_6(VAR_4->wmi, VAR_5->fw_vif_idx,
       VAR_0,
       0, 0);
 if (VAR_6)
  return VAR_6;


 FUNC_3(VAR_4);

 VAR_6 = FUNC_0(VAR_4, VAR_5);
 if (VAR_6)
  return VAR_6;

 return 0;
}
