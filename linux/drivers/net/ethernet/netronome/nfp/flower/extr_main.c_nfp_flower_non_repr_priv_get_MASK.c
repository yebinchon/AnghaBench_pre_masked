
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_flower_priv {int non_repr_priv; } ;
struct nfp_flower_non_repr_priv {int list; struct net_device* netdev; } ;
struct nfp_app {struct nfp_flower_priv* priv; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nfp_flower_non_repr_priv*) ;
 struct nfp_flower_non_repr_priv* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 struct nfp_flower_non_repr_priv* FUNC_3 (struct nfp_app*,struct net_device*) ;

struct nfp_flower_non_repr_priv *
FUNC_4(struct nfp_app *VAR_1, struct net_device *VAR_2)
{
 struct nfp_flower_priv *VAR_3 = VAR_1->priv;
 struct nfp_flower_non_repr_priv *VAR_4;

 VAR_4 = FUNC_3(VAR_1, VAR_2);
 if (VAR_4)
  goto inc_ref;

 VAR_4 = FUNC_1(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->netdev = VAR_2;
 FUNC_2(&VAR_4->list, &VAR_3->non_repr_priv);

inc_ref:
 FUNC_0(VAR_4);
 return VAR_4;
}
