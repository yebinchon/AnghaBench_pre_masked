
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int batch_ver; int lock; } ;
struct nfp_flower_priv {TYPE_1__ nfp_lag; } ;
struct nfp_fl_pre_lag {int instance; int lag_version; int group_id; } ;
struct nfp_fl_lag_group {int group_inst; int group_id; } ;
struct nfp_app {struct nfp_flower_priv* priv; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct nfp_fl_lag_group* FUNC_6 (TYPE_1__*,struct net_device*) ;

int FUNC_7(struct nfp_app *VAR_2,
           struct net_device *VAR_3,
           struct nfp_fl_pre_lag *VAR_4,
           struct netlink_ext_ack *VAR_5)
{
 struct nfp_flower_priv *VAR_6 = VAR_2->priv;
 struct nfp_fl_lag_group *VAR_7 = ((void*)0);
 __be32 VAR_8;

 FUNC_4(&VAR_6->nfp_lag.lock);
 VAR_7 = FUNC_6(&VAR_6->nfp_lag,
         VAR_3);
 if (!VAR_7) {
  FUNC_5(&VAR_6->nfp_lag.lock);
  FUNC_0(VAR_5, "invalid entry: group does not exist for LAG action");
  return -VAR_0;
 }

 VAR_4->group_id = FUNC_1(VAR_7->group_id);
 VAR_8 = FUNC_2(VAR_6->nfp_lag.batch_ver <<
    VAR_1);
 FUNC_3(VAR_4->lag_version, &VAR_8, 3);
 VAR_4->instance = VAR_7->group_inst;
 FUNC_5(&VAR_6->nfp_lag.lock);

 return 0;
}
