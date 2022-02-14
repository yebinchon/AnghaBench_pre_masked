
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int buf; } ;
struct TYPE_7__ {TYPE_2__ free_list; } ;
struct TYPE_8__ {int buf; } ;
struct TYPE_5__ {int last_used; TYPE_4__ mask_id_free_list; } ;
struct nfp_flower_priv {TYPE_3__ stats_ids; TYPE_1__ mask_ids; int stats; int stats_ctx_table; int flow_table; } ;
struct nfp_app {struct nfp_flower_priv* priv; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct nfp_app *VAR_1)
{
 struct nfp_flower_priv *VAR_2 = VAR_1->priv;

 if (!VAR_2)
  return;

 FUNC_2(&VAR_2->flow_table,
        VAR_0, ((void*)0));
 FUNC_2(&VAR_2->stats_ctx_table,
        VAR_0, ((void*)0));
 FUNC_1(VAR_2->stats);
 FUNC_0(VAR_2->mask_ids.mask_id_free_list.buf);
 FUNC_0(VAR_2->mask_ids.last_used);
 FUNC_3(VAR_2->stats_ids.free_list.buf);
}
