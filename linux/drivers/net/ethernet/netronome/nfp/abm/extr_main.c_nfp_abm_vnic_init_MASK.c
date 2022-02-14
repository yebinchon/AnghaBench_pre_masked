
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_net {struct nfp_abm_link* app_priv; } ;
struct nfp_app {int dummy; } ;
struct nfp_abm_link {int prio_map; int abm; } ;


 int FUNC_0 (struct nfp_abm_link*,int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct nfp_app *VAR_0, struct nfp_net *VAR_1)
{
 struct nfp_abm_link *VAR_2 = VAR_1->app_priv;

 if (FUNC_1(VAR_2->abm))
  return FUNC_0(VAR_2, VAR_2->prio_map);
 return 0;
}
