
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_flower_priv {int flow_table; } ;
struct nfp_fl_payload {int dummy; } ;
struct nfp_fl_flow_table_cmp_arg {unsigned long cookie; struct net_device* netdev; } ;
struct nfp_app {struct nfp_flower_priv* priv; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 struct nfp_fl_payload* FUNC_0 (int *,struct nfp_fl_flow_table_cmp_arg*,int ) ;

struct nfp_fl_payload *
FUNC_1(struct nfp_app *VAR_1, unsigned long VAR_2,
      struct net_device *VAR_3)
{
 struct nfp_fl_flow_table_cmp_arg VAR_4;
 struct nfp_flower_priv *VAR_5 = VAR_1->priv;

 VAR_4.netdev = VAR_3;
 VAR_4.cookie = VAR_2;

 return FUNC_0(&VAR_5->flow_table, &VAR_4,
          VAR_0);
}
