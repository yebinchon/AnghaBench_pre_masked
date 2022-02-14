
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_net {struct nfp_abm_link* app_priv; } ;
struct nfp_app {int dummy; } ;
struct nfp_abm_link {struct nfp_abm_link* prio_map; int qdiscs; int abm; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct nfp_abm_link*) ;
 int FUNC_2 (int ,struct nfp_abm_link*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct nfp_app *VAR_0, struct nfp_net *VAR_1)
{
 struct nfp_abm_link *VAR_2 = VAR_1->app_priv;

 FUNC_2(VAR_2->abm, VAR_2);
 FUNC_0(!FUNC_3(&VAR_2->qdiscs), "left over qdiscs\n");
 FUNC_1(VAR_2->prio_map);
 FUNC_1(VAR_2);
}
