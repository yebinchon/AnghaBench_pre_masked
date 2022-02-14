
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wmi_echo_ev_arg {int value; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int barrier; } ;
struct ath10k {TYPE_1__ wmi; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ath10k*,int ,char*,scalar_t__) ;
 int FUNC_1 (struct ath10k*,char*,int) ;
 int FUNC_2 (struct ath10k*,struct sk_buff*,struct wmi_echo_ev_arg*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;

void FUNC_5(struct ath10k *VAR_2, struct sk_buff *VAR_3)
{
 struct wmi_echo_ev_arg VAR_4 = {};
 int VAR_5;

 VAR_5 = FUNC_2(VAR_2, VAR_3, &VAR_4);
 if (VAR_5) {
  FUNC_1(VAR_2, "failed to parse echo: %d\n", VAR_5);
  return;
 }

 FUNC_0(VAR_2, VAR_0,
     "wmi event echo value 0x%08x\n",
     FUNC_4(VAR_4.value));

 if (FUNC_4(VAR_4.value) == VAR_1)
  FUNC_3(&VAR_2->wmi.barrier);
}
