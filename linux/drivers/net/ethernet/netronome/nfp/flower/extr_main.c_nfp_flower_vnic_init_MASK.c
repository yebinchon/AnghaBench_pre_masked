
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_net {int dummy; } ;
struct nfp_flower_priv {struct nfp_net* nn; } ;
struct nfp_app {TYPE_1__* pf; struct nfp_flower_priv* priv; } ;
struct TYPE_2__ {int num_vfs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct nfp_app*,struct nfp_flower_priv*) ;
 int FUNC_1 (struct nfp_app*,int ,int ,int) ;
 int FUNC_2 (struct nfp_app*,int ) ;

__attribute__((used)) static int FUNC_3(struct nfp_app *VAR_5, struct nfp_net *VAR_6)
{
 struct nfp_flower_priv *VAR_7 = VAR_5->priv;
 int VAR_8;

 VAR_7->nn = VAR_6;

 VAR_8 = FUNC_0(VAR_5, VAR_5->priv);
 if (VAR_8)
  goto err_clear_nn;

 VAR_8 = FUNC_1(VAR_5,
       VAR_0,
       VAR_2, 1);
 if (VAR_8)
  goto err_destroy_reprs_phy;

 if (VAR_5->pf->num_vfs) {
  VAR_8 = FUNC_1(VAR_5,
        VAR_1,
        VAR_4,
        VAR_5->pf->num_vfs);
  if (VAR_8)
   goto err_destroy_reprs_pf;
 }

 return 0;

err_destroy_reprs_pf:
 FUNC_2(VAR_5, VAR_2);
err_destroy_reprs_phy:
 FUNC_2(VAR_5, VAR_3);
err_clear_nn:
 VAR_7->nn = ((void*)0);
 return VAR_8;
}
