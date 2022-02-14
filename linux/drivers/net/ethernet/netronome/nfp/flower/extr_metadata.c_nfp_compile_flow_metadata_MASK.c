
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef size_t u32 ;
struct nfp_flower_priv {int stats_ctx_table; TYPE_1__* stats; int flower_version; } ;
struct nfp_fl_stats_ctx_to_flow {size_t stats_cxt; int ht_node; struct nfp_fl_payload* flow; } ;
struct TYPE_4__ {int mask_len; void* flow_version; int flags; void* host_cookie; int host_ctx_id; } ;
struct nfp_fl_payload {TYPE_2__ meta; int mask_data; scalar_t__* unmasked_data; struct net_device* ingress_dev; } ;
struct nfp_app {struct nfp_flower_priv* priv; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct flow_cls_offload {int cookie; } ;
struct TYPE_3__ {int used; scalar_t__ bytes; scalar_t__ pkts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (size_t) ;
 void* FUNC_3 (int ) ;
 int VAR_6 ;
 int FUNC_4 (struct nfp_fl_stats_ctx_to_flow*) ;
 struct nfp_fl_stats_ctx_to_flow* FUNC_5 (int,int ) ;
 int FUNC_6 (struct nfp_app*,int ,int ,int *,scalar_t__*) ;
 int FUNC_7 (struct nfp_app*,int ,int ,int *,scalar_t__*) ;
 struct nfp_fl_payload* FUNC_8 (struct nfp_app*,int ,struct net_device*) ;
 int FUNC_9 (struct nfp_app*,size_t*) ;
 scalar_t__ FUNC_10 (struct nfp_app*,size_t) ;
 scalar_t__ FUNC_11 (int *,int *,int ) ;
 int FUNC_12 (int *,int *,int ) ;
 int VAR_7 ;

int FUNC_13(struct nfp_app *VAR_8,
         struct flow_cls_offload *VAR_9,
         struct nfp_fl_payload *VAR_10,
         struct net_device *VAR_11,
         struct netlink_ext_ack *VAR_12)
{
 struct nfp_fl_stats_ctx_to_flow *VAR_13;
 struct nfp_flower_priv *VAR_14 = VAR_8->priv;
 struct nfp_fl_payload *VAR_15;
 u8 VAR_16;
 u32 VAR_17;
 int VAR_18;

 VAR_18 = FUNC_9(VAR_8, &VAR_17);
 if (VAR_18) {
  FUNC_0(VAR_12, "invalid entry: cannot allocate new stats context");
  return VAR_18;
 }

 VAR_10->meta.host_ctx_id = FUNC_2(VAR_17);
 VAR_10->meta.host_cookie = FUNC_3(VAR_9->cookie);
 VAR_10->ingress_dev = VAR_11;

 VAR_13 = FUNC_5(sizeof(*VAR_13), VAR_4);
 if (!VAR_13) {
  VAR_18 = -VAR_3;
  goto err_release_stats;
 }

 VAR_13->stats_cxt = VAR_17;
 VAR_13->flow = VAR_10;

 if (FUNC_11(&VAR_14->stats_ctx_table, &VAR_13->ht_node,
       VAR_7)) {
  VAR_18 = -VAR_3;
  goto err_free_ctx_entry;
 }

 VAR_16 = 0;
 if (!FUNC_6(VAR_8, VAR_10->mask_data,
    VAR_10->meta.mask_len,
    &VAR_10->meta.flags, &VAR_16)) {
  FUNC_0(VAR_12, "invalid entry: cannot allocate a new mask id");
  if (FUNC_10(VAR_8, VAR_17)) {
   FUNC_0(VAR_12, "invalid entry: cannot release stats context");
   VAR_18 = -VAR_1;
   goto err_remove_rhash;
  }
  VAR_18 = -VAR_2;
  goto err_remove_rhash;
 }

 VAR_10->meta.flow_version = FUNC_3(VAR_14->flower_version);
 VAR_14->flower_version++;


 VAR_10->unmasked_data[VAR_5] = VAR_16;
 VAR_14->stats[VAR_17].pkts = 0;
 VAR_14->stats[VAR_17].bytes = 0;
 VAR_14->stats[VAR_17].used = VAR_6;

 VAR_15 = FUNC_8(VAR_8, VAR_9->cookie, VAR_11);
 if (VAR_15) {
  FUNC_0(VAR_12, "invalid entry: cannot offload duplicate flow entry");
  if (FUNC_10(VAR_8, VAR_17)) {
   FUNC_0(VAR_12, "invalid entry: cannot release stats context");
   VAR_18 = -VAR_1;
   goto err_remove_mask;
  }

  if (!FUNC_7(VAR_8, VAR_10->mask_data,
        VAR_10->meta.mask_len,
        ((void*)0), &VAR_16)) {
   FUNC_0(VAR_12, "invalid entry: cannot release mask id");
   VAR_18 = -VAR_1;
   goto err_remove_mask;
  }

  VAR_18 = -VAR_0;
  goto err_remove_mask;
 }

 return 0;

err_remove_mask:
 FUNC_7(VAR_8, VAR_10->mask_data, VAR_10->meta.mask_len,
         ((void*)0), &VAR_16);
err_remove_rhash:
 FUNC_1(FUNC_12(&VAR_14->stats_ctx_table,
         &VAR_13->ht_node,
         VAR_7));
err_free_ctx_entry:
 FUNC_4(VAR_13);
err_release_stats:
 FUNC_10(VAR_8, VAR_17);

 return VAR_18;
}
