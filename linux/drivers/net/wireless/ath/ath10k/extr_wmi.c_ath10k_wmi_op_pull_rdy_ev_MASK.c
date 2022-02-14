
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int addr; } ;
struct wmi_ready_event {TYPE_1__ mac_addr; int status; int abi_version; int sw_version; } ;
struct wmi_rdy_ev_arg {int mac_addr; int status; int abi_version; int sw_version; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_1(struct ath10k *VAR_1, struct sk_buff *VAR_2,
         struct wmi_rdy_ev_arg *VAR_3)
{
 struct wmi_ready_event *VAR_4 = (void *)VAR_2->data;

 if (VAR_2->len < sizeof(*VAR_4))
  return -VAR_0;

 FUNC_0(VAR_2, sizeof(*VAR_4));
 VAR_3->sw_version = VAR_4->sw_version;
 VAR_3->abi_version = VAR_4->abi_version;
 VAR_3->status = VAR_4->status;
 VAR_3->mac_addr = VAR_4->mac_addr.addr;

 return 0;
}
