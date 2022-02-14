
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nsim_ipsec {int pfile; scalar_t__ count; } ;
struct netdevsim {int netdev; struct nsim_ipsec ipsec; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,scalar_t__) ;

void FUNC_2(struct netdevsim *VAR_0)
{
 struct nsim_ipsec *VAR_1 = &VAR_0->ipsec;

 if (VAR_1->count)
  FUNC_1(VAR_0->netdev, "tearing down IPsec offload with %d SAs left\n",
      VAR_1->count);
 FUNC_0(VAR_1->pfile);
}
