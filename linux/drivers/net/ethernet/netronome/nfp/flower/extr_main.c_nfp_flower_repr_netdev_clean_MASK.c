
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_repr {int app_priv; } ;
struct nfp_app {int dummy; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct nfp_repr* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void
FUNC_2(struct nfp_app *VAR_0, struct net_device *VAR_1)
{
 struct nfp_repr *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_2->app_priv);
}
