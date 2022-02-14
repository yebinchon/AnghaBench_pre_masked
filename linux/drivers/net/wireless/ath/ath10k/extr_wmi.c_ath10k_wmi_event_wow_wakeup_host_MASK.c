
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wmi_wow_ev_arg {int wake_reason; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int wakeup_completed; } ;
struct ath10k {TYPE_1__ wow; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*,int ,char*,int ) ;
 int FUNC_1 (struct ath10k*,char*,int) ;
 int FUNC_2 (struct ath10k*,struct sk_buff*,struct wmi_wow_ev_arg*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct ath10k *VAR_1, struct sk_buff *VAR_2)
{
 struct wmi_wow_ev_arg VAR_3 = {};
 int VAR_4;

 FUNC_3(&VAR_1->wow.wakeup_completed);

 VAR_4 = FUNC_2(VAR_1, VAR_2, &VAR_3);
 if (VAR_4) {
  FUNC_1(VAR_1, "failed to parse wow wakeup event: %d\n", VAR_4);
  return;
 }

 FUNC_0(VAR_1, VAR_0, "wow wakeup host reason %s\n",
     FUNC_4(VAR_3.wake_reason));
}
