
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct nfp_repr {struct nfp_abm_link* app_priv; } ;
struct nfp_port {scalar_t__ type; int netdev; } ;
struct nfp_app {int dummy; } ;
struct nfp_abm_link {TYPE_2__* vnic; } ;
struct TYPE_3__ {unsigned int num_r_vecs; } ;
struct TYPE_4__ {TYPE_1__ dp; } ;


 scalar_t__ VAR_0 ;
 struct nfp_repr* FUNC_0 (int ) ;
 int * FUNC_1 (int *,char*,unsigned int) ;

__attribute__((used)) static u8 *
FUNC_2(struct nfp_app *VAR_1, struct nfp_port *VAR_2,
          u8 *VAR_3)
{
 struct nfp_repr *VAR_4 = FUNC_0(VAR_2->netdev);
 struct nfp_abm_link *VAR_5;
 unsigned int VAR_6;

 if (VAR_2->type != VAR_0)
  return VAR_3;
 VAR_5 = VAR_4->app_priv;
 for (VAR_6 = 0; VAR_6 < VAR_5->vnic->dp.num_r_vecs; VAR_6++) {
  VAR_3 = FUNC_1(VAR_3, "q%u_no_wait", VAR_6);
  VAR_3 = FUNC_1(VAR_3, "q%u_delayed", VAR_6);
 }
 return VAR_3;
}
