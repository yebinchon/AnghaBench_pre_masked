
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wmi_rdy_ev_arg {int mac_addr; int status; int abi_version; int sw_version; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int unified_ready; } ;
struct ath10k {TYPE_1__ wmi; int mac_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ath10k*,int ,char*,int ,int ,int ,int ) ;
 int FUNC_2 (struct ath10k*,char*,int) ;
 int FUNC_3 (struct ath10k*,struct sk_buff*,struct wmi_rdy_ev_arg*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ) ;

int FUNC_7(struct ath10k *VAR_1, struct sk_buff *VAR_2)
{
 struct wmi_rdy_ev_arg VAR_3 = {};
 int VAR_4;

 VAR_4 = FUNC_3(VAR_1, VAR_2, &VAR_3);
 if (VAR_4) {
  FUNC_2(VAR_1, "failed to parse ready event: %d\n", VAR_4);
  return VAR_4;
 }

 FUNC_1(VAR_1, VAR_0,
     "wmi event ready sw_version %u abi_version %u mac_addr %pM status %d\n",
     FUNC_0(VAR_3.sw_version),
     FUNC_0(VAR_3.abi_version),
     VAR_3.mac_addr,
     FUNC_0(VAR_3.status));

 if (FUNC_6(VAR_1->mac_addr))
  FUNC_5(VAR_1->mac_addr, VAR_3.mac_addr);
 FUNC_4(&VAR_1->wmi.unified_ready);
 return 0;
}
