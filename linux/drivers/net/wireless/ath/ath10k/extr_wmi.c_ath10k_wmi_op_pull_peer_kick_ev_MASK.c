
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int addr; } ;
struct wmi_peer_sta_kickout_event {TYPE_1__ peer_macaddr; } ;
struct wmi_peer_kick_ev_arg {int mac_addr; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,int) ;

__attribute__((used)) static int
FUNC_1(struct ath10k *VAR_1, struct sk_buff *VAR_2,
    struct wmi_peer_kick_ev_arg *VAR_3)
{
 struct wmi_peer_sta_kickout_event *VAR_4 = (void *)VAR_2->data;

 if (VAR_2->len < sizeof(*VAR_4))
  return -VAR_0;

 FUNC_0(VAR_2, sizeof(*VAR_4));
 VAR_3->mac_addr = VAR_4->peer_macaddr.addr;

 return 0;
}
