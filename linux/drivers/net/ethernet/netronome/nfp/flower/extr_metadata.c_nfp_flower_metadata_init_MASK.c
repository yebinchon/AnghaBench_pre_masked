
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned int u64 ;
struct TYPE_7__ {void* buf; } ;
struct TYPE_8__ {TYPE_3__ mask_id_free_list; void* last_used; scalar_t__ init_unallocated; } ;
struct TYPE_5__ {int buf; } ;
struct TYPE_6__ {TYPE_1__ free_list; int init_unalloc; } ;
struct nfp_flower_priv {int flow_table; int stats_ctx_table; TYPE_4__ mask_ids; TYPE_2__ stats_ids; int stats_lock; int stats; int stats_ring_size; int mask_id_seed; int mask_table; } ;
struct nfp_fl_stats {int dummy; } ;
struct nfp_app {struct nfp_flower_priv* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (void*) ;
 void* FUNC_6 (scalar_t__,int,int ) ;
 int FUNC_7 (int,int,int ) ;
 int VAR_7 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int VAR_8 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;

int FUNC_13(struct nfp_app *VAR_9, u64 VAR_10,
        unsigned int VAR_11)
{
 struct nfp_flower_priv *VAR_12 = VAR_9->priv;
 int VAR_13, VAR_14;

 FUNC_4(VAR_12->mask_table);

 VAR_13 = FUNC_9(&VAR_12->flow_table, &VAR_7);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_9(&VAR_12->stats_ctx_table, &VAR_8);
 if (VAR_13)
  goto err_free_flow_table;

 FUNC_3(&VAR_12->mask_id_seed, sizeof(VAR_12->mask_id_seed));


 VAR_12->mask_ids.mask_id_free_list.buf =
  FUNC_6(VAR_3,
         VAR_2, VAR_1);
 if (!VAR_12->mask_ids.mask_id_free_list.buf)
  goto err_free_stats_ctx_table;

 VAR_12->mask_ids.init_unallocated = VAR_3 - 1;


 VAR_12->mask_ids.last_used =
  FUNC_6(VAR_3,
         sizeof(*VAR_12->mask_ids.last_used), VAR_1);
 if (!VAR_12->mask_ids.last_used)
  goto err_free_mask_id;


 VAR_12->stats_ids.free_list.buf =
  FUNC_12(FUNC_1(VAR_4,
       VAR_12->stats_ring_size));
 if (!VAR_12->stats_ids.free_list.buf)
  goto err_free_last_used;

 VAR_12->stats_ids.init_unalloc = FUNC_2(VAR_10, VAR_11);

 VAR_14 = FUNC_0(VAR_6, VAR_10) |
       FUNC_0(VAR_5, VAR_11 - 1);
 VAR_12->stats = FUNC_7(VAR_14, sizeof(struct nfp_fl_stats),
         VAR_1);
 if (!VAR_12->stats)
  goto err_free_ring_buf;

 FUNC_10(&VAR_12->stats_lock);

 return 0;

err_free_ring_buf:
 FUNC_11(VAR_12->stats_ids.free_list.buf);
err_free_last_used:
 FUNC_5(VAR_12->mask_ids.last_used);
err_free_mask_id:
 FUNC_5(VAR_12->mask_ids.mask_id_free_list.buf);
err_free_stats_ctx_table:
 FUNC_8(&VAR_12->stats_ctx_table);
err_free_flow_table:
 FUNC_8(&VAR_12->flow_table);
 return -VAR_0;
}
