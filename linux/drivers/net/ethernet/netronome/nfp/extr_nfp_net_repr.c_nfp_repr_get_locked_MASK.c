
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_reprs {int * reprs; } ;
struct nfp_app {TYPE_1__* pf; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (int *) ;
 struct net_device* FUNC_1 (int ,int ) ;

struct net_device *
FUNC_2(struct nfp_app *VAR_0, struct nfp_reprs *VAR_1, unsigned int VAR_2)
{
 return FUNC_1(VAR_1->reprs[VAR_2],
      FUNC_0(&VAR_0->pf->lock));
}
