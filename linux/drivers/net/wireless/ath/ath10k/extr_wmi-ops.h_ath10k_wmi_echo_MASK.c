
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct ath10k_wmi {TYPE_2__* cmd; TYPE_1__* ops; } ;
struct ath10k {struct ath10k_wmi wmi; } ;
struct TYPE_4__ {int echo_cmdid; } ;
struct TYPE_3__ {struct sk_buff* (* gen_echo ) (struct ath10k*,int ) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct ath10k*,struct sk_buff*,int ) ;
 struct sk_buff* FUNC_3 (struct ath10k*,int ) ;

__attribute__((used)) static inline int
FUNC_4(struct ath10k *VAR_1, u32 VAR_2)
{
 struct ath10k_wmi *VAR_3 = &VAR_1->wmi;
 struct sk_buff *VAR_4;

 if (!VAR_3->ops->gen_echo)
  return -VAR_0;

 VAR_4 = VAR_3->ops->gen_echo(VAR_1, VAR_2);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 return FUNC_2(VAR_1, VAR_4, VAR_3->cmd->echo_cmdid);
}
