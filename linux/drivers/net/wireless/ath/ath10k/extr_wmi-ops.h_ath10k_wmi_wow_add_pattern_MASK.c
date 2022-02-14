
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct TYPE_6__ {TYPE_1__* cmd; TYPE_2__* ops; } ;
struct ath10k {TYPE_3__ wmi; } ;
struct TYPE_5__ {struct sk_buff* (* gen_wow_add_pattern ) (struct ath10k*,int ,int ,int const*,int const*,int,int) ;} ;
struct TYPE_4__ {int wow_add_wake_pattern_cmdid; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct ath10k*,struct sk_buff*,int ) ;
 struct sk_buff* FUNC_3 (struct ath10k*,int ,int ,int const*,int const*,int,int) ;

__attribute__((used)) static inline int
FUNC_4(struct ath10k *VAR_1, u32 VAR_2, u32 VAR_3,
      const u8 *VAR_4, const u8 *VAR_5,
      int VAR_6, int VAR_7)
{
 struct sk_buff *VAR_8;
 u32 VAR_9;

 if (!VAR_1->wmi.ops->gen_wow_add_pattern)
  return -VAR_0;

 VAR_8 = VAR_1->wmi.ops->gen_wow_add_pattern(VAR_1, VAR_2, VAR_3,
            VAR_4, VAR_5, VAR_6,
            VAR_7);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 VAR_9 = VAR_1->wmi.cmd->wow_add_wake_pattern_cmdid;
 return FUNC_2(VAR_1, VAR_8, VAR_9);
}
