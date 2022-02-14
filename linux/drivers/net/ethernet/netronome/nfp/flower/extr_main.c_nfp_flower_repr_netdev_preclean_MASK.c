
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_repr {int dummy; } ;
struct nfp_flower_priv {int reify_replies; } ;
struct nfp_app {int cpp; struct nfp_flower_priv* priv; } ;
struct net_device {int dummy; } ;
typedef int atomic_t ;


 int FUNC_0 (int *,int ) ;
 struct nfp_repr* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct nfp_repr*,int) ;
 int FUNC_3 (struct nfp_app*,int *,int) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static void
FUNC_5(struct nfp_app *VAR_0, struct net_device *VAR_1)
{
 struct nfp_repr *VAR_2 = FUNC_1(VAR_1);
 struct nfp_flower_priv *VAR_3 = VAR_0->priv;
 atomic_t *VAR_4 = &VAR_3->reify_replies;
 int VAR_5;

 FUNC_0(VAR_4, 0);
 VAR_5 = FUNC_2(VAR_2, 0);
 if (VAR_5) {
  FUNC_4(VAR_0->cpp, "Failed to notify firmware about repr destruction\n");
  return;
 }

 FUNC_3(VAR_0, VAR_4, 1);
}
