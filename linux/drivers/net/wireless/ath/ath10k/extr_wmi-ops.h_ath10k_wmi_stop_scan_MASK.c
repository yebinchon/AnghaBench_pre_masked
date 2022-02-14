
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wmi_stop_scan_arg {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_6__ {TYPE_2__* cmd; TYPE_1__* ops; } ;
struct ath10k {TYPE_3__ wmi; } ;
struct TYPE_5__ {int stop_scan_cmdid; } ;
struct TYPE_4__ {struct sk_buff* (* gen_stop_scan ) (struct ath10k*,struct wmi_stop_scan_arg const*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct ath10k*,struct sk_buff*,int ) ;
 struct sk_buff* FUNC_3 (struct ath10k*,struct wmi_stop_scan_arg const*) ;

__attribute__((used)) static inline int
FUNC_4(struct ath10k *VAR_1, const struct wmi_stop_scan_arg *VAR_2)
{
 struct sk_buff *VAR_3;

 if (!VAR_1->wmi.ops->gen_stop_scan)
  return -VAR_0;

 VAR_3 = VAR_1->wmi.ops->gen_stop_scan(VAR_1, VAR_2);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 return FUNC_2(VAR_1, VAR_3, VAR_1->wmi.cmd->stop_scan_cmdid);
}
