
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct nfp_flower_priv {int stats_ctx_table; } ;
struct nfp_fl_stats_ctx_to_flow {int ht_node; } ;
struct TYPE_2__ {int host_ctx_id; int flags; int mask_len; } ;
struct nfp_fl_payload {TYPE_1__ meta; int * unmasked_data; int mask_data; } ;
struct nfp_app {struct nfp_flower_priv* priv; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct nfp_flower_priv*,struct nfp_fl_payload*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct nfp_fl_stats_ctx_to_flow*) ;
 int FUNC_4 (struct nfp_app*,int ,int ,int *,int *) ;
 int FUNC_5 (struct nfp_app*,int ) ;
 struct nfp_fl_stats_ctx_to_flow* FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (int *,int *,int ) ;
 int VAR_2 ;

int FUNC_8(struct nfp_app *VAR_3,
        struct nfp_fl_payload *VAR_4)
{
 struct nfp_fl_stats_ctx_to_flow *VAR_5;
 struct nfp_flower_priv *VAR_6 = VAR_3->priv;
 u8 VAR_7 = 0;
 u32 VAR_8;

 FUNC_1(VAR_6, VAR_4);

 FUNC_4(VAR_3, VAR_4->mask_data,
         VAR_4->meta.mask_len, &VAR_4->meta.flags,
         &VAR_7);


 VAR_4->unmasked_data[VAR_1] = VAR_7;


 VAR_8 = FUNC_2(VAR_4->meta.host_ctx_id);

 VAR_5 = FUNC_6(&VAR_6->stats_ctx_table, &VAR_8,
        VAR_2);
 if (!VAR_5)
  return -VAR_0;

 FUNC_0(FUNC_7(&VAR_6->stats_ctx_table,
         &VAR_5->ht_node,
         VAR_2));
 FUNC_3(VAR_5);

 return FUNC_5(VAR_3, VAR_8);
}
