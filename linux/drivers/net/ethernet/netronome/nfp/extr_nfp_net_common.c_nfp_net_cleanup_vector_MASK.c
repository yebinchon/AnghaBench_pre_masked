
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_net_r_vector {int irq_vector; int tasklet; int napi; } ;
struct TYPE_2__ {scalar_t__ netdev; } ;
struct nfp_net {TYPE_1__ dp; } ;


 int FUNC_0 (int ,struct nfp_net_r_vector*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct nfp_net *VAR_0, struct nfp_net_r_vector *VAR_1)
{
 FUNC_1(VAR_1->irq_vector, ((void*)0));
 if (VAR_0->dp.netdev)
  FUNC_2(&VAR_1->napi);
 else
  FUNC_3(&VAR_1->tasklet);

 FUNC_0(VAR_1->irq_vector, VAR_1);
}
