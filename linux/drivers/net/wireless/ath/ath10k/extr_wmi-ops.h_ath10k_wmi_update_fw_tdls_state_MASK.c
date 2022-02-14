
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct TYPE_6__ {TYPE_2__* cmd; TYPE_1__* ops; } ;
struct ath10k {TYPE_3__ wmi; } ;
typedef enum wmi_tdls_state { ____Placeholder_wmi_tdls_state } wmi_tdls_state ;
struct TYPE_5__ {int tdls_set_state_cmdid; } ;
struct TYPE_4__ {struct sk_buff* (* gen_update_fw_tdls_state ) (struct ath10k*,int ,int) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct ath10k*,struct sk_buff*,int ) ;
 struct sk_buff* FUNC_3 (struct ath10k*,int ,int) ;

__attribute__((used)) static inline int
FUNC_4(struct ath10k *VAR_1, u32 VAR_2,
    enum wmi_tdls_state VAR_3)
{
 struct sk_buff *VAR_4;

 if (!VAR_1->wmi.ops->gen_update_fw_tdls_state)
  return -VAR_0;

 VAR_4 = VAR_1->wmi.ops->gen_update_fw_tdls_state(VAR_1, VAR_2, VAR_3);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 return FUNC_2(VAR_1, VAR_4, VAR_1->wmi.cmd->tdls_set_state_cmdid);
}
