
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ath6kl {TYPE_1__* htc_ops; } ;
struct TYPE_2__ {int (* tx_complete ) (struct ath6kl*,struct sk_buff*) ;} ;


 int FUNC_0 (struct ath6kl*,struct sk_buff*) ;

__attribute__((used)) static inline void FUNC_1(struct ath6kl *VAR_0,
       struct sk_buff *VAR_1)
{
 VAR_0->htc_ops->tx_complete(VAR_0, VAR_1);
}
