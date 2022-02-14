
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_reprs {int num_reprs; } ;
struct nfp_repr {int dummy; } ;
struct nfp_app {TYPE_1__* pf; int * reprs; } ;
struct net_device {int dummy; } ;
typedef enum nfp_repr_type { ____Placeholder_nfp_repr_type } nfp_repr_type ;
struct TYPE_2__ {int lock; } ;


 int FUNC_0 (int *) ;
 struct nfp_repr* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct nfp_repr*,int) ;
 struct net_device* FUNC_3 (struct nfp_app*,struct nfp_reprs*,int) ;
 struct nfp_reprs* FUNC_4 (int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct nfp_app *VAR_0, enum nfp_repr_type VAR_1,
         bool VAR_2)
{
 struct nfp_reprs *VAR_3;
 int VAR_4, VAR_5, VAR_6 = 0;

 VAR_3 = FUNC_4(VAR_0->reprs[VAR_1],
       FUNC_0(&VAR_0->pf->lock));
 if (!VAR_3)
  return 0;

 for (VAR_4 = 0; VAR_4 < VAR_3->num_reprs; VAR_4++) {
  struct net_device *VAR_7;

  VAR_7 = FUNC_3(VAR_0, VAR_3, VAR_4);
  if (VAR_7) {
   struct nfp_repr *VAR_8 = FUNC_1(VAR_7);

   VAR_5 = FUNC_2(VAR_8, VAR_2);
   if (VAR_5)
    return VAR_5;
   VAR_6++;
  }
 }

 return VAR_6;
}
