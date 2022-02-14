
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {int dummy; } ;
struct TYPE_5__ {TYPE_3__* cmd; TYPE_1__* ops; } ;
struct ath10k {TYPE_2__ wmi; } ;
typedef enum wmi_dfs_region { ____Placeholder_wmi_dfs_region } wmi_dfs_region ;
struct TYPE_6__ {int pdev_set_regdomain_cmdid; } ;
struct TYPE_4__ {struct sk_buff* (* gen_pdev_set_rd ) (struct ath10k*,int ,int ,int ,int ,int ,int) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct ath10k*,struct sk_buff*,int ) ;
 struct sk_buff* FUNC_3 (struct ath10k*,int ,int ,int ,int ,int ,int) ;

__attribute__((used)) static inline int
FUNC_4(struct ath10k *VAR_1, u16 VAR_2, u16 VAR_3, u16 VAR_4,
         u16 VAR_5, u16 VAR_6,
         enum wmi_dfs_region VAR_7)
{
 struct sk_buff *VAR_8;

 if (!VAR_1->wmi.ops->gen_pdev_set_rd)
  return -VAR_0;

 VAR_8 = VAR_1->wmi.ops->gen_pdev_set_rd(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
        VAR_7);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 return FUNC_2(VAR_1, VAR_8,
       VAR_1->wmi.cmd->pdev_set_regdomain_cmdid);
}
