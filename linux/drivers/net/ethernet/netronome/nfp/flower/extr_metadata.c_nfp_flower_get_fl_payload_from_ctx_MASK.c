
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nfp_flower_priv {int stats_ctx_table; } ;
struct nfp_fl_stats_ctx_to_flow {struct nfp_fl_payload* flow; } ;
struct nfp_fl_payload {int dummy; } ;
struct nfp_app {struct nfp_flower_priv* priv; } ;


 struct nfp_fl_stats_ctx_to_flow* FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;

struct nfp_fl_payload *
FUNC_1(struct nfp_app *VAR_1, u32 VAR_2)
{
 struct nfp_fl_stats_ctx_to_flow *VAR_3;
 struct nfp_flower_priv *VAR_4 = VAR_1->priv;

 VAR_3 = FUNC_0(&VAR_4->stats_ctx_table, &VAR_2,
        VAR_0);
 if (!VAR_3)
  return ((void*)0);

 return VAR_3->flow;
}
