
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct ath10k {TYPE_2__ wmi; } ;
struct TYPE_3__ {int (* rx ) (struct ath10k*,struct sk_buff*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct ath10k*,struct sk_buff*) ;

__attribute__((used)) static inline int
FUNC_2(struct ath10k *VAR_1, struct sk_buff *VAR_2)
{
 if (FUNC_0(!VAR_1->wmi.ops->rx))
  return -VAR_0;

 VAR_1->wmi.ops->rx(VAR_1, VAR_2);
 return 0;
}
