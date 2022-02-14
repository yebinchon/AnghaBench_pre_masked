
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_flower_priv {int flower_ext_feats; } ;
struct nfp_app {struct nfp_flower_priv* priv; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nfp_app*,struct net_device*,unsigned long) ;
 int FUNC_1 (struct nfp_flower_priv*,struct net_device*,unsigned long,void*) ;
 int FUNC_2 (struct nfp_app*,struct net_device*,unsigned long) ;
 int FUNC_3 (struct nfp_app*,struct net_device*,unsigned long,void*) ;

__attribute__((used)) static int
FUNC_4(struct nfp_app *VAR_2, struct net_device *VAR_3,
   unsigned long VAR_4, void *VAR_5)
{
 struct nfp_flower_priv *VAR_6 = VAR_2->priv;
 int VAR_7;

 if (VAR_6->flower_ext_feats & VAR_0) {
  VAR_7 = FUNC_1(VAR_6, VAR_3, VAR_4, VAR_5);
  if (VAR_7 & VAR_1)
   return VAR_7;
 }

 VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_4);
 if (VAR_7 & VAR_1)
  return VAR_7;

 VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_4);
 if (VAR_7 & VAR_1)
  return VAR_7;

 return FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5);
}
