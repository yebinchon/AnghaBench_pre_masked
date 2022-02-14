
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_flower_priv {int flower_ext_feats; int nfp_lag; int cmsg_work; int cmsg_skbs_low; int cmsg_skbs_high; } ;
struct nfp_app {struct nfp_flower_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct nfp_flower_priv*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nfp_app*) ;
 int FUNC_4 (struct nfp_app*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct nfp_flower_priv*) ;

__attribute__((used)) static void FUNC_7(struct nfp_app *VAR_3)
{
 struct nfp_flower_priv *VAR_4 = VAR_3->priv;

 FUNC_5(&VAR_4->cmsg_skbs_high);
 FUNC_5(&VAR_4->cmsg_skbs_low);
 FUNC_0(&VAR_4->cmsg_work);

 if (VAR_4->flower_ext_feats & VAR_2)
  FUNC_4(VAR_3);

 if (VAR_4->flower_ext_feats & VAR_1)
  FUNC_2(&VAR_4->nfp_lag);

 if (VAR_4->flower_ext_feats & VAR_0)
  FUNC_1(VAR_4);

 FUNC_3(VAR_3);
 FUNC_6(VAR_3->priv);
 VAR_3->priv = ((void*)0);
}
