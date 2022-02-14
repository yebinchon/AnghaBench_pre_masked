
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_app {TYPE_1__* type; int netdev_nb; } ;
struct TYPE_2__ {int (* stop ) (struct nfp_app*) ;} ;


 int FUNC_0 (struct nfp_app*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct nfp_app *VAR_0)
{
 FUNC_1(&VAR_0->netdev_nb);

 if (VAR_0->type->stop)
  VAR_0->type->stop(VAR_0);
}
