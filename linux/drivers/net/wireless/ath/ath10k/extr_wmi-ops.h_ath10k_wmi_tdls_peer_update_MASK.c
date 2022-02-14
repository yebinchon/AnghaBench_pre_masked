
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wmi_tdls_peer_update_cmd_arg {int dummy; } ;
struct wmi_tdls_peer_capab_arg {int dummy; } ;
struct wmi_channel_arg {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_6__ {TYPE_2__* cmd; TYPE_1__* ops; } ;
struct ath10k {TYPE_3__ wmi; } ;
struct TYPE_5__ {int tdls_peer_update_cmdid; } ;
struct TYPE_4__ {struct sk_buff* (* gen_tdls_peer_update ) (struct ath10k*,struct wmi_tdls_peer_update_cmd_arg const*,struct wmi_tdls_peer_capab_arg const*,struct wmi_channel_arg const*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct ath10k*,struct sk_buff*,int ) ;
 struct sk_buff* FUNC_3 (struct ath10k*,struct wmi_tdls_peer_update_cmd_arg const*,struct wmi_tdls_peer_capab_arg const*,struct wmi_channel_arg const*) ;

__attribute__((used)) static inline int
FUNC_4(struct ath10k *VAR_1,
       const struct wmi_tdls_peer_update_cmd_arg *VAR_2,
       const struct wmi_tdls_peer_capab_arg *VAR_3,
       const struct wmi_channel_arg *VAR_4)
{
 struct sk_buff *VAR_5;

 if (!VAR_1->wmi.ops->gen_tdls_peer_update)
  return -VAR_0;

 VAR_5 = VAR_1->wmi.ops->gen_tdls_peer_update(VAR_1, VAR_2, VAR_3, VAR_4);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 return FUNC_2(VAR_1, VAR_5,
       VAR_1->wmi.cmd->tdls_peer_update_cmdid);
}
