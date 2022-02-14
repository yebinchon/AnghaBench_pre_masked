
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_reprs {int num_reprs; } ;
struct nfp_app {TYPE_1__* pf; int * reprs; } ;
struct net_device {int dummy; } ;
typedef enum nfp_repr_type { ____Placeholder_nfp_repr_type } nfp_repr_type ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nfp_app*,struct net_device*) ;
 struct nfp_reprs* FUNC_2 (struct nfp_app*,int,int *) ;
 struct net_device* FUNC_3 (struct nfp_app*,struct nfp_reprs*,int) ;
 int FUNC_4 (struct nfp_app*,struct nfp_reprs*) ;
 struct nfp_reprs* FUNC_5 (int ,int ) ;
 int FUNC_6 () ;

void
FUNC_7(struct nfp_app *VAR_0, enum nfp_repr_type VAR_1)
{
 struct net_device *VAR_2;
 struct nfp_reprs *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_5(VAR_0->reprs[VAR_1],
       FUNC_0(&VAR_0->pf->lock));
 if (!VAR_3)
  return;




 for (VAR_4 = 0; VAR_4 < VAR_3->num_reprs; VAR_4++) {
  VAR_2 = FUNC_3(VAR_0, VAR_3, VAR_4);
  if (VAR_2)
   FUNC_1(VAR_0, VAR_2);
 }

 VAR_3 = FUNC_2(VAR_0, VAR_1, ((void*)0));

 FUNC_6();
 FUNC_4(VAR_0, VAR_3);
}
