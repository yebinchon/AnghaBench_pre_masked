
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_app {TYPE_1__* type; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int (* ndo_uninit ) (struct nfp_app*,struct net_device*) ;} ;


 struct nfp_app* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct nfp_app*,struct net_device*) ;

void FUNC_2(struct net_device *VAR_0)
{
 struct nfp_app *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1 && VAR_1->type->ndo_uninit)
  VAR_1->type->ndo_uninit(VAR_1, VAR_0);
}
