
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_flower_non_repr_priv {int dummy; } ;
struct nfp_app {int dummy; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct nfp_flower_non_repr_priv*) ;
 struct nfp_flower_non_repr_priv* FUNC_1 (struct nfp_app*,struct net_device*) ;

void
FUNC_2(struct nfp_app *VAR_0, struct net_device *VAR_1)
{
 struct nfp_flower_non_repr_priv *VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (!VAR_2)
  return;

 FUNC_0(VAR_2);
}
