
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct mlx5e_tc_flow_parse_attr {int* mirred_ifindex; int spec; int mod_hdr_actions; } ;
struct mlx5e_tc_flow {struct mlx5_fc** rule; struct mlx5_esw_flow_attr* esw_attr; } ;
struct mlx5e_rep_priv {int rep; } ;
struct mlx5e_priv {TYPE_3__* mdev; struct mlx5e_rep_priv* ppriv; int netdev; } ;
struct mlx5_fc {int dummy; } ;
struct mlx5_eswitch {int dummy; } ;
struct mlx5_esw_flow_attr {int prio; scalar_t__ chain; int action; struct mlx5_fc* counter; int counter_dev; TYPE_2__* dests; struct mlx5e_tc_flow_parse_attr* parse_attr; } ;
struct TYPE_4__ {struct mlx5_eswitch* eswitch; } ;
struct TYPE_6__ {TYPE_1__ priv; } ;
struct TYPE_5__ {int flags; TYPE_3__* mdev; int rep; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mlx5_fc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct netlink_ext_ack*,char*) ;
 int VAR_5 ;
 int FUNC_2 (struct mlx5_fc*) ;
 struct net_device* FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct mlx5e_tc_flow*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct mlx5_eswitch*,struct mlx5_esw_flow_attr*) ;
 scalar_t__ FUNC_8 (struct mlx5_eswitch*) ;
 int FUNC_9 (struct mlx5_eswitch*) ;
 int FUNC_10 (struct mlx5_eswitch*) ;
 struct mlx5_fc* FUNC_11 (int ,int) ;
 int FUNC_12 (struct mlx5e_priv*,struct mlx5e_tc_flow*,struct net_device*,int,struct netlink_ext_ack*,struct net_device**,int*) ;
 int FUNC_13 (struct mlx5e_priv*,struct mlx5e_tc_flow*,struct mlx5e_tc_flow_parse_attr*) ;
 struct mlx5_fc* FUNC_14 (struct mlx5_eswitch*,struct mlx5e_tc_flow*,int *,struct mlx5_esw_flow_attr*) ;
 struct mlx5_fc* FUNC_15 (struct mlx5_eswitch*,struct mlx5e_tc_flow*,int *,struct mlx5_esw_flow_attr*) ;
 struct mlx5e_priv* FUNC_16 (struct net_device*) ;

__attribute__((used)) static int
FUNC_17(struct mlx5e_priv *VAR_6,
        struct mlx5e_tc_flow *VAR_7,
        struct netlink_ext_ack *VAR_8)
{
 struct mlx5_eswitch *VAR_9 = VAR_6->mdev->priv.eswitch;
 u32 VAR_10 = FUNC_8(VAR_9);
 struct mlx5_esw_flow_attr *VAR_11 = VAR_7->esw_attr;
 struct mlx5e_tc_flow_parse_attr *VAR_12 = VAR_11->parse_attr;
 u16 VAR_13 = FUNC_9(VAR_9);
 struct net_device *VAR_14, *VAR_15 = ((void*)0);
 struct mlx5_fc *VAR_16 = ((void*)0);
 struct mlx5e_rep_priv *VAR_17;
 struct mlx5e_priv *VAR_18;
 bool VAR_19 = 1;
 int VAR_20 = 0;
 int VAR_21;

 if (!FUNC_10(VAR_9) && VAR_11->prio != 1) {
  FUNC_1(VAR_8, "E-switch priorities unsupported, upgrade FW");
  return -VAR_0;
 }

 if (VAR_11->chain > VAR_10) {
  FUNC_1(VAR_8, "Requested chain is out of supported range");
  return -VAR_0;
 }

 if (VAR_11->prio > VAR_13) {
  FUNC_1(VAR_8, "Requested priority is out of supported range");
  return -VAR_0;
 }

 for (VAR_21 = 0; VAR_21 < VAR_4; VAR_21++) {
  int VAR_22;

  if (!(VAR_11->dests[VAR_21].flags & VAR_1))
   continue;

  VAR_22 = VAR_12->mirred_ifindex[VAR_21];
  VAR_14 = FUNC_3(FUNC_4(VAR_6->netdev),
          VAR_22);
  VAR_20 = FUNC_12(VAR_6, VAR_7, VAR_14, VAR_21,
      VAR_8, &VAR_15, &VAR_19);
  if (VAR_20)
   return VAR_20;

  VAR_18 = FUNC_16(VAR_15);
  VAR_17 = VAR_18->ppriv;
  VAR_11->dests[VAR_21].rep = VAR_17->rep;
  VAR_11->dests[VAR_21].mdev = VAR_18->mdev;
 }

 VAR_20 = FUNC_7(VAR_9, VAR_11);
 if (VAR_20)
  return VAR_20;

 if (VAR_11->action & VAR_3) {
  VAR_20 = FUNC_13(VAR_6, VAR_7, VAR_12);
  FUNC_6(VAR_12->mod_hdr_actions);
  if (VAR_20)
   return VAR_20;
 }

 if (VAR_11->action & VAR_2) {
  VAR_16 = FUNC_11(VAR_11->counter_dev, 1);
  if (FUNC_0(VAR_16))
   return FUNC_2(VAR_16);

  VAR_11->counter = VAR_16;
 }





 if (!VAR_19) {

  struct mlx5_esw_flow_attr VAR_23;

  VAR_7->rule[0] = FUNC_15(VAR_9, VAR_7, &VAR_12->spec, &VAR_23);
 } else {
  VAR_7->rule[0] = FUNC_14(VAR_9, VAR_7, &VAR_12->spec, VAR_11);
 }

 if (FUNC_0(VAR_7->rule[0]))
  return FUNC_2(VAR_7->rule[0]);
 else
  FUNC_5(VAR_7, VAR_5);

 return 0;
}
