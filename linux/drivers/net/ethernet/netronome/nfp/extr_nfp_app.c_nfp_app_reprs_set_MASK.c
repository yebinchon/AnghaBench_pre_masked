
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_reprs {int dummy; } ;
struct nfp_app {int * reprs; } ;
typedef enum nfp_repr_type { ____Placeholder_nfp_repr_type } nfp_repr_type ;


 struct nfp_reprs* FUNC_0 (struct nfp_app*,int) ;
 int FUNC_1 (int ,struct nfp_reprs*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

struct nfp_reprs *
FUNC_4(struct nfp_app *VAR_0, enum nfp_repr_type VAR_1,
    struct nfp_reprs *VAR_2)
{
 struct nfp_reprs *VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1);
 FUNC_2();
 FUNC_1(VAR_0->reprs[VAR_1], VAR_2);
 FUNC_3();

 return VAR_3;
}
