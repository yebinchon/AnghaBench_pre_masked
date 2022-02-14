
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct nfp_pf {int rtbl; int vf_cfg_bar; int mac_stats_bar; int eth_tbl; } ;
struct TYPE_2__ {int lock; int wait_q; } ;
struct nfp_flower_priv {int flower_ext_feats; int nfp_lag; scalar_t__ pre_tun_rule_cnt; int non_repr_priv; int indr_block_cb_priv; TYPE_1__ mtu_conf; int reify_wait_queue; int cmsg_work; int cmsg_skbs_low; int cmsg_skbs_high; struct nfp_app* app; int stats_ring_size; scalar_t__ active_mem_unit; scalar_t__ total_mem_units; } ;
struct nfp_app {struct nfp_flower_priv* priv; int cpp; struct nfp_pf* pf; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int *) ;
 int VAR_9 ;
 int FUNC_5 (struct nfp_flower_priv*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct nfp_app*) ;
 int FUNC_9 (struct nfp_app*,scalar_t__,scalar_t__) ;
 int FUNC_10 (struct nfp_app*) ;
 scalar_t__ FUNC_11 (int ,char*,int*) ;
 int FUNC_12 (int ,char*,int) ;
 int FUNC_13 (int ,char*,...) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct nfp_flower_priv*) ;
 struct nfp_flower_priv* FUNC_18 (int) ;

__attribute__((used)) static int FUNC_19(struct nfp_app *VAR_10)
{
 u64 VAR_11, VAR_12, VAR_13, VAR_14;
 const struct nfp_pf *VAR_15 = VAR_10->pf;
 struct nfp_flower_priv *VAR_16;
 int VAR_17;

 if (!VAR_15->eth_tbl) {
  FUNC_13(VAR_10->cpp, "FlowerNIC requires eth table\n");
  return -VAR_0;
 }

 if (!VAR_15->mac_stats_bar) {
  FUNC_13(VAR_10->cpp, "FlowerNIC requires mac_stats BAR\n");
  return -VAR_0;
 }

 if (!VAR_15->vf_cfg_bar) {
  FUNC_13(VAR_10->cpp, "FlowerNIC requires vf_cfg BAR\n");
  return -VAR_0;
 }

 VAR_11 = FUNC_11(VAR_10->pf->rtbl, "hw_flower_version", &VAR_17);
 if (VAR_17) {
  FUNC_13(VAR_10->cpp, "FlowerNIC requires hw_flower_version memory symbol\n");
  return VAR_17;
 }

 VAR_14 = FUNC_11(VAR_10->pf->rtbl, "CONFIG_FC_HOST_CTX_SPLIT",
         &VAR_17);
 if (VAR_17) {
  FUNC_13(VAR_10->cpp,
    "FlowerNIC: unsupported host context memory: %d\n",
    VAR_17);
  VAR_17 = 0;
  VAR_14 = 1;
 }

 if (!FUNC_1(VAR_8, VAR_14) || !VAR_14) {
  FUNC_13(VAR_10->cpp,
    "FlowerNIC: invalid host context memory: %llu\n",
    VAR_14);
  return -VAR_0;
 }

 VAR_13 = FUNC_11(VAR_10->pf->rtbl, "CONFIG_FC_HOST_CTX_COUNT",
          &VAR_17);
 if (VAR_17) {
  FUNC_13(VAR_10->cpp,
    "FlowerNIC: unsupported host context count: %d\n",
    VAR_17);
  VAR_17 = 0;
  VAR_13 = FUNC_0(17);
 }


 if (VAR_11 != VAR_3) {
  FUNC_13(VAR_10->cpp, "FlowerNIC: unsupported firmware version\n");
  return -VAR_0;
 }

 VAR_16 = FUNC_18(sizeof(struct nfp_flower_priv));
 if (!VAR_16)
  return -VAR_2;

 VAR_16->total_mem_units = VAR_14;
 VAR_16->active_mem_unit = 0;
 VAR_16->stats_ring_size = FUNC_14(VAR_13);
 VAR_10->priv = VAR_16;
 VAR_16->app = VAR_10;
 FUNC_15(&VAR_16->cmsg_skbs_high);
 FUNC_15(&VAR_16->cmsg_skbs_low);
 FUNC_3(&VAR_16->cmsg_work, VAR_9);
 FUNC_4(&VAR_16->reify_wait_queue);

 FUNC_4(&VAR_16->mtu_conf.wait_q);
 FUNC_16(&VAR_16->mtu_conf.lock);

 VAR_17 = FUNC_9(VAR_10, VAR_13, VAR_14);
 if (VAR_17)
  goto err_free_app_priv;


 VAR_12 = FUNC_11(VAR_10->pf->rtbl,
         "_abi_flower_extra_features", &VAR_17);
 if (VAR_17)
  VAR_16->flower_ext_feats = 0;
 else
  VAR_16->flower_ext_feats = VAR_12;


 VAR_17 = FUNC_12(VAR_10->pf->rtbl,
     "_abi_flower_balance_sync_enable", 1);
 if (!VAR_17) {
  VAR_16->flower_ext_feats |= VAR_6;
  FUNC_7(&VAR_16->nfp_lag);
 } else if (VAR_17 == -VAR_1) {
  FUNC_13(VAR_10->cpp, "LAG not supported by FW.\n");
 } else {
  goto err_cleanup_metadata;
 }

 if (VAR_16->flower_ext_feats & VAR_5) {

  VAR_17 = FUNC_12(VAR_10->pf->rtbl,
      "_abi_flower_merge_hint_enable", 1);
  if (!VAR_17) {
   VAR_16->flower_ext_feats |= VAR_4;
   FUNC_5(VAR_16);
  } else if (VAR_17 == -VAR_1) {
   FUNC_13(VAR_10->cpp, "Flow merge not supported by FW.\n");
  } else {
   goto err_lag_clean;
  }
 } else {
  FUNC_13(VAR_10->cpp, "Flow mod/merge not supported by FW.\n");
 }

 if (VAR_16->flower_ext_feats & VAR_7)
  FUNC_10(VAR_10);

 FUNC_2(&VAR_16->indr_block_cb_priv);
 FUNC_2(&VAR_16->non_repr_priv);
 VAR_16->pre_tun_rule_cnt = 0;

 return 0;

err_lag_clean:
 if (VAR_16->flower_ext_feats & VAR_6)
  FUNC_6(&VAR_16->nfp_lag);
err_cleanup_metadata:
 FUNC_8(VAR_10);
err_free_app_priv:
 FUNC_17(VAR_10->priv);
 return VAR_17;
}
