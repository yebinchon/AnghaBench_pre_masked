
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wmi_echo_ev_arg {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct ath10k {TYPE_2__ wmi; } ;
struct TYPE_3__ {int (* pull_echo_ev ) (struct ath10k*,struct sk_buff*,struct wmi_echo_ev_arg*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*,struct sk_buff*,struct wmi_echo_ev_arg*) ;

__attribute__((used)) static inline int
FUNC_1(struct ath10k *VAR_1, struct sk_buff *VAR_2,
   struct wmi_echo_ev_arg *VAR_3)
{
 if (!VAR_1->wmi.ops->pull_echo_ev)
  return -VAR_0;

 return VAR_1->wmi.ops->pull_echo_ev(VAR_1, VAR_2, VAR_3);
}
