
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nfp_cpp_explicit {int dummy; } ;
struct TYPE_5__ {int mutex; TYPE_1__* group; } ;
struct nfp6000_pcie {TYPE_2__ expl; } ;
struct TYPE_6__ {size_t group; size_t area; } ;
struct nfp6000_explicit_priv {TYPE_3__ bar; struct nfp6000_pcie* nfp; } ;
struct TYPE_4__ {int* free; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct nfp6000_explicit_priv* FUNC_2 (struct nfp_cpp_explicit*) ;

__attribute__((used)) static void FUNC_3(struct nfp_cpp_explicit *VAR_0)
{
 struct nfp6000_explicit_priv *VAR_1 = FUNC_2(VAR_0);
 struct nfp6000_pcie *VAR_2 = VAR_1->nfp;

 FUNC_0(&VAR_2->expl.mutex);
 VAR_2->expl.group[VAR_1->bar.group].free[VAR_1->bar.area] = 1;
 FUNC_1(&VAR_2->expl.mutex);
}
