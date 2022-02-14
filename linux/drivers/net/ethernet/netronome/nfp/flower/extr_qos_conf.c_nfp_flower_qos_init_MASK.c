
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_flower_priv {int qos_stats_work; int qos_stats_lock; } ;
struct nfp_app {struct nfp_flower_priv* priv; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;

void FUNC_2(struct nfp_app *VAR_1)
{
 struct nfp_flower_priv *VAR_2 = VAR_1->priv;

 FUNC_1(&VAR_2->qos_stats_lock);
 FUNC_0(&VAR_2->qos_stats_work, &VAR_0);
}
