
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_flower_priv {int qos_stats_work; } ;
struct nfp_app {struct nfp_flower_priv* priv; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct nfp_app *VAR_0)
{
 struct nfp_flower_priv *VAR_1 = VAR_0->priv;

 FUNC_0(&VAR_1->qos_stats_work);
}
