
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sky2_port {TYPE_1__* hw; } ;
struct sk_buff {scalar_t__ ip_summed; } ;
struct TYPE_2__ {int napi; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static inline void FUNC_2(const struct sky2_port *VAR_1,
          struct sk_buff *VAR_2)
{
 if (VAR_2->ip_summed == VAR_0)
  FUNC_1(VAR_2);
 else
  FUNC_0(&VAR_1->hw->napi, VAR_2);
}
