
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct xfrm_state {TYPE_1__ xso; } ;
struct sk_buff {int dummy; } ;
struct nsim_ipsec {int ok; } ;
struct netdevsim {struct nsim_ipsec ipsec; } ;


 struct netdevsim* FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(struct sk_buff *VAR_0, struct xfrm_state *VAR_1)
{
 struct netdevsim *VAR_2 = FUNC_0(VAR_1->xso.dev);
 struct nsim_ipsec *VAR_3 = &VAR_2->ipsec;

 VAR_3->ok++;

 return 1;
}
