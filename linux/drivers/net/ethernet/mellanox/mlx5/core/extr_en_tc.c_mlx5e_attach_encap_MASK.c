
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct mlx5e_tc_flow_parse_attr {struct mlx5e_encap_entry** tun_info; } ;
struct mlx5e_tc_flow {TYPE_3__* encaps; struct mlx5_esw_flow_attr* esw_attr; } ;
struct mlx5e_priv {TYPE_2__* mdev; } ;
typedef struct mlx5e_encap_entry {int compl_result; int flags; int pkt_reformat; struct net_device* out_dev; int flows; int res_ready; int encap_hlist; struct mlx5e_encap_entry const* tun_info; int refcnt; int key; } const mlx5e_encap_entry ;
struct TYPE_10__ {int encap_tbl_lock; int encap_tbl; } ;
struct mlx5_eswitch {TYPE_5__ offloads; } ;
struct mlx5_esw_flow_attr {TYPE_4__* dests; struct mlx5e_tc_flow_parse_attr* parse_attr; } ;
struct ip_tunnel_info {int compl_result; int flags; int pkt_reformat; struct net_device* out_dev; int flows; int res_ready; int encap_hlist; struct ip_tunnel_info const* tun_info; int refcnt; int key; } ;
struct encap_key {int tc_tunnel; int * ip_tun_key; } ;
struct TYPE_9__ {int flags; int pkt_reformat; } ;
struct TYPE_8__ {int index; int list; struct mlx5e_encap_entry const* e; } ;
struct TYPE_6__ {struct mlx5_eswitch* eswitch; } ;
struct TYPE_7__ {TYPE_1__ priv; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct netlink_ext_ack*,char*) ;
 int FUNC_2 (int *) ;
 struct mlx5e_encap_entry* FUNC_3 (struct mlx5e_encap_entry const*) ;
 int FUNC_4 (int ,int *,uintptr_t) ;
 uintptr_t FUNC_5 (struct encap_key*) ;
 int FUNC_6 (int *) ;
 unsigned short FUNC_7 (struct mlx5e_encap_entry const*) ;
 int FUNC_8 (struct mlx5e_encap_entry const*) ;
 struct mlx5e_encap_entry* FUNC_9 (int,int ) ;
 int FUNC_10 (int *,int *) ;
 struct mlx5e_encap_entry* FUNC_11 (struct mlx5e_priv*,struct encap_key*,uintptr_t) ;
 int FUNC_12 (struct mlx5e_priv*,struct mlx5e_encap_entry const*) ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct mlx5e_priv*,struct net_device*,struct mlx5e_encap_entry const*) ;
 int FUNC_15 (struct mlx5e_priv*,struct net_device*,struct mlx5e_encap_entry const*) ;
 int FUNC_16 (struct net_device*,struct mlx5e_priv*,struct mlx5e_encap_entry const*,struct netlink_ext_ack*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,int) ;
 int FUNC_20 (int *) ;

__attribute__((used)) static int FUNC_21(struct mlx5e_priv *VAR_8,
         struct mlx5e_tc_flow *VAR_9,
         struct net_device *VAR_10,
         int VAR_11,
         struct netlink_ext_ack *VAR_12,
         struct net_device **VAR_13,
         bool *VAR_14)
{
 struct mlx5_eswitch *VAR_15 = VAR_8->mdev->priv.eswitch;
 struct mlx5_esw_flow_attr *VAR_16 = VAR_9->esw_attr;
 struct mlx5e_tc_flow_parse_attr *VAR_17;
 const struct ip_tunnel_info *VAR_18;
 struct encap_key VAR_19;
 struct mlx5e_encap_entry *VAR_20;
 unsigned short VAR_21;
 uintptr_t VAR_22;
 int VAR_23 = 0;

 VAR_17 = VAR_16->parse_attr;
 VAR_18 = VAR_17->tun_info[VAR_11];
 VAR_21 = FUNC_7(VAR_18);
 VAR_19.ip_tun_key = &VAR_18->key;
 VAR_19.tc_tunnel = FUNC_13(VAR_10);
 if (!VAR_19.tc_tunnel) {
  FUNC_1(VAR_12, "Unsupported tunnel");
  return -VAR_3;
 }

 VAR_22 = FUNC_5(&VAR_19);

 FUNC_17(&VAR_15->offloads.encap_tbl_lock);
 VAR_20 = FUNC_11(VAR_8, &VAR_19, VAR_22);


 if (VAR_20) {
  FUNC_18(&VAR_15->offloads.encap_tbl_lock);
  FUNC_20(&VAR_20->res_ready);


  FUNC_17(&VAR_15->offloads.encap_tbl_lock);
  if (VAR_20->compl_result < 0) {
   VAR_23 = -VAR_4;
   goto out_err;
  }
  goto attach_flow;
 }

 VAR_20 = FUNC_9(sizeof(*VAR_20), VAR_5);
 if (!VAR_20) {
  VAR_23 = -VAR_2;
  goto out_err;
 }

 FUNC_19(&VAR_20->refcnt, 1);
 FUNC_6(&VAR_20->res_ready);

 VAR_18 = FUNC_3(VAR_18);
 if (!VAR_18) {
  VAR_23 = -VAR_2;
  goto out_err_init;
 }
 VAR_20->tun_info = VAR_18;
 VAR_23 = FUNC_16(VAR_10, VAR_8, VAR_20, VAR_12);
 if (VAR_23)
  goto out_err_init;

 FUNC_0(&VAR_20->flows);
 FUNC_4(VAR_15->offloads.encap_tbl, &VAR_20->encap_hlist, VAR_22);
 FUNC_18(&VAR_15->offloads.encap_tbl_lock);

 if (VAR_21 == VAR_0)
  VAR_23 = FUNC_14(VAR_8, VAR_10, VAR_20);
 else if (VAR_21 == VAR_1)
  VAR_23 = FUNC_15(VAR_8, VAR_10, VAR_20);


 FUNC_17(&VAR_15->offloads.encap_tbl_lock);
 FUNC_2(&VAR_20->res_ready);
 if (VAR_23) {
  VAR_20->compl_result = VAR_23;
  goto out_err;
 }
 VAR_20->compl_result = 1;

attach_flow:
 VAR_9->encaps[VAR_11].e = VAR_20;
 FUNC_10(&VAR_9->encaps[VAR_11].list, &VAR_20->flows);
 VAR_9->encaps[VAR_11].index = VAR_11;
 *VAR_13 = VAR_20->out_dev;
 if (VAR_20->flags & VAR_6) {
  VAR_16->dests[VAR_11].pkt_reformat = VAR_20->pkt_reformat;
  VAR_16->dests[VAR_11].flags |= VAR_7;
  *VAR_14 = 1;
 } else {
  *VAR_14 = 0;
 }
 FUNC_18(&VAR_15->offloads.encap_tbl_lock);

 return VAR_23;

out_err:
 FUNC_18(&VAR_15->offloads.encap_tbl_lock);
 if (VAR_20)
  FUNC_12(VAR_8, VAR_20);
 return VAR_23;

out_err_init:
 FUNC_18(&VAR_15->offloads.encap_tbl_lock);
 FUNC_8(VAR_18);
 FUNC_8(VAR_20);
 return VAR_23;
}
