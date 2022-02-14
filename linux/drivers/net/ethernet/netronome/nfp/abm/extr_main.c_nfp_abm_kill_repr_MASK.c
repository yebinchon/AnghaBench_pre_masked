
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_reprs {int * reprs; } ;
struct nfp_repr {int dummy; } ;
struct nfp_app {int dummy; } ;
struct nfp_abm_link {size_t id; } ;
struct net_device {int dummy; } ;
typedef enum nfp_repr_type { ____Placeholder_nfp_repr_type } nfp_repr_type ;


 scalar_t__ FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct nfp_repr*) ;
 struct net_device* FUNC_2 (struct nfp_app*,struct nfp_reprs*,size_t) ;
 struct nfp_reprs* FUNC_3 (struct nfp_app*,int) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;

__attribute__((used)) static void
FUNC_8(struct nfp_app *VAR_0, struct nfp_abm_link *VAR_1,
    enum nfp_repr_type VAR_2)
{
 struct net_device *VAR_3;
 struct nfp_reprs *VAR_4;

 VAR_4 = FUNC_3(VAR_0, VAR_2);
 VAR_3 = FUNC_2(VAR_0, VAR_4, VAR_1->id);
 if (!VAR_3)
  return;
 FUNC_5();
 FUNC_4(VAR_4->reprs[VAR_1->id], ((void*)0));
 FUNC_6();
 FUNC_7();

 FUNC_1((struct nfp_repr *)FUNC_0(VAR_3));
}
