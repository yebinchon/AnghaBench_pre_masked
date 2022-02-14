
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_pa_layer_attr {int hs_rate; int pwr_rx; int gear_rx; } ;
struct ufs_qcom_host {struct ufs_pa_layer_attr dev_req_params; } ;
struct ufs_hba {int dummy; } ;
typedef enum ufs_notify_change_status { ____Placeholder_ufs_notify_change_status } ufs_notify_change_status ;


 int VAR_0 ;
 int FUNC_0 (struct ufs_hba*,int ,int ,int ,int) ;
 int FUNC_1 (struct ufs_hba*) ;
 int FUNC_2 (struct ufs_hba*) ;
 int FUNC_3 (struct ufs_hba*) ;
 int FUNC_4 (struct ufs_hba*) ;
 int FUNC_5 (struct ufs_qcom_host*) ;
 struct ufs_qcom_host* FUNC_6 (struct ufs_hba*) ;

__attribute__((used)) static int FUNC_7(struct ufs_hba *VAR_1,
  bool VAR_2, enum ufs_notify_change_status VAR_3)
{
 struct ufs_qcom_host *VAR_4 = FUNC_6(VAR_1);
 struct ufs_pa_layer_attr *VAR_5 = &VAR_4->dev_req_params;
 int VAR_6 = 0;

 if (VAR_3 == VAR_0) {
  if (VAR_2)
   VAR_6 = FUNC_4(VAR_1);
  else
   VAR_6 = FUNC_2(VAR_1);
 } else {
  if (VAR_2)
   VAR_6 = FUNC_3(VAR_1);
  else
   VAR_6 = FUNC_1(VAR_1);

  if (VAR_6 || !VAR_5)
   goto out;

  FUNC_0(VAR_1,
        VAR_5->gear_rx,
        VAR_5->pwr_rx,
        VAR_5->hs_rate,
        0);
  FUNC_5(VAR_4);
 }

out:
 return VAR_6;
}
