
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfp_repr {struct nfp_abm_link* app_priv; } ;
struct nfp_port {scalar_t__ type; int netdev; } ;
struct nfp_app {int dummy; } ;
struct nfp_abm_link {TYPE_2__* vnic; } ;
struct TYPE_3__ {int num_r_vecs; } ;
struct TYPE_4__ {TYPE_1__ dp; } ;


 scalar_t__ VAR_0 ;
 struct nfp_repr* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct nfp_app *VAR_1, struct nfp_port *VAR_2)
{
 struct nfp_repr *VAR_3 = FUNC_0(VAR_2->netdev);
 struct nfp_abm_link *VAR_4;

 if (VAR_2->type != VAR_0)
  return 0;
 VAR_4 = VAR_3->app_priv;
 return VAR_4->vnic->dp.num_r_vecs * 2;
}
