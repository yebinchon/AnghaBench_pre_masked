
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct nfp_flower_priv {TYPE_1__ nfp_lag; } ;
struct nfp_fl_lag_group {int group_id; } ;
struct nfp_app {struct nfp_flower_priv* priv; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct nfp_fl_lag_group* FUNC_2 (TYPE_1__*,struct net_device*) ;

int FUNC_3(struct nfp_app *VAR_1, struct net_device *VAR_2)
{
 struct nfp_flower_priv *VAR_3 = VAR_1->priv;
 struct nfp_fl_lag_group *VAR_4 = ((void*)0);
 int VAR_5 = -VAR_0;

 FUNC_0(&VAR_3->nfp_lag.lock);
 VAR_4 = FUNC_2(&VAR_3->nfp_lag,
         VAR_2);
 if (VAR_4)
  VAR_5 = VAR_4->group_id;
 FUNC_1(&VAR_3->nfp_lag.lock);

 return VAR_5;
}
