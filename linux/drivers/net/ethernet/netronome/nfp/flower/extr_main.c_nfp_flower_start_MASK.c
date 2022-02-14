
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_flower_priv {int flower_ext_feats; int nfp_lag; } ;
struct nfp_app {struct nfp_flower_priv* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct nfp_app*) ;

__attribute__((used)) static int FUNC_2(struct nfp_app *VAR_1)
{
 struct nfp_flower_priv *VAR_2 = VAR_1->priv;
 int VAR_3;

 if (VAR_2->flower_ext_feats & VAR_0) {
  VAR_3 = FUNC_0(&VAR_2->nfp_lag);
  if (VAR_3)
   return VAR_3;
 }

 return FUNC_1(VAR_1);
}
