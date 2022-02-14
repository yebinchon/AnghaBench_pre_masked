
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wmi_dfs_status_ev_arg {scalar_t__ status; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int radar_confirm; } ;
struct ath10k {TYPE_1__ wmi; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ath10k*,int ,char*,scalar_t__) ;
 int FUNC_1 (struct ath10k*) ;
 int FUNC_2 (struct ath10k*,char*,int) ;
 int FUNC_3 (struct ath10k*,struct sk_buff*,struct wmi_dfs_status_ev_arg*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct ath10k *VAR_3, struct sk_buff *VAR_4)
{
 struct wmi_dfs_status_ev_arg VAR_5 = {};
 int VAR_6;

 VAR_6 = FUNC_3(VAR_3, VAR_4, &VAR_5);

 if (VAR_6) {
  FUNC_2(VAR_3, "failed to parse dfs status event: %d\n", VAR_6);
  return;
 }

 FUNC_0(VAR_3, VAR_0,
     "dfs status event received from fw: %d\n",
     VAR_5.status);





 if (VAR_5.status == VAR_1 ||
     VAR_5.status == VAR_2)
  FUNC_1(VAR_3);
 FUNC_4(&VAR_3->wmi.radar_confirm);
}
