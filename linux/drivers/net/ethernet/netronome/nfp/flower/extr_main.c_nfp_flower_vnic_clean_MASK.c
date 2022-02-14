
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nfp_net {int dummy; } ;
struct nfp_flower_priv {int * nn; } ;
struct nfp_app {TYPE_1__* pf; struct nfp_flower_priv* priv; } ;
struct TYPE_2__ {scalar_t__ num_vfs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nfp_app*,int ) ;

__attribute__((used)) static void FUNC_1(struct nfp_app *VAR_3, struct nfp_net *VAR_4)
{
 struct nfp_flower_priv *VAR_5 = VAR_3->priv;

 if (VAR_3->pf->num_vfs)
  FUNC_0(VAR_3, VAR_2);
 FUNC_0(VAR_3, VAR_0);
 FUNC_0(VAR_3, VAR_1);

 VAR_5->nn = ((void*)0);
}
