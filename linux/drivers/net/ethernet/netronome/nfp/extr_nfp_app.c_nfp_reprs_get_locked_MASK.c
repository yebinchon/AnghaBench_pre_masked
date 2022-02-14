
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_reprs {int dummy; } ;
struct nfp_app {TYPE_1__* pf; int * reprs; } ;
typedef enum nfp_repr_type { ____Placeholder_nfp_repr_type } nfp_repr_type ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (int *) ;
 struct nfp_reprs* FUNC_1 (int ,int ) ;

struct nfp_reprs *
FUNC_2(struct nfp_app *VAR_0, enum nfp_repr_type VAR_1)
{
 return FUNC_1(VAR_0->reprs[VAR_1],
      FUNC_0(&VAR_0->pf->lock));
}
