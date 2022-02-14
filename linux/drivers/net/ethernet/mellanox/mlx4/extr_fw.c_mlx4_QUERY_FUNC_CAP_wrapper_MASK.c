
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct TYPE_16__ {scalar_t__ vlan_proto; } ;
struct mlx4_vport_oper_state {TYPE_8__ state; } ;
struct mlx4_vhcr {int op_modifier; int in_modifier; } ;
struct mlx4_slave_state {int vst_qinq_supported; } ;
struct TYPE_10__ {TYPE_1__* res_alloc; } ;
struct TYPE_13__ {TYPE_2__ res_tracker; struct mlx4_slave_state* slave_state; TYPE_4__* vf_oper; } ;
struct TYPE_14__ {TYPE_5__ master; } ;
struct mlx4_priv {TYPE_6__ mfunc; } ;
struct mlx4_func {int max_eq; int rsvd_eqs; } ;
struct TYPE_15__ {int* phys_port_id; int function_caps; int num_qps; int num_srqs; int num_cqs; int flags2; int num_eqs; int reserved_eqs; int num_mpts; int num_mtts; int num_mgms; int num_amgms; int reserved_lkey; int num_ports; scalar_t__* phv_bit; } ;
struct TYPE_11__ {int base_proxy_sqpn; int base_tunnel_sqpn; } ;
struct mlx4_dev {TYPE_7__ caps; TYPE_3__ phys_caps; } ;
struct mlx4_cmd_mailbox {int buf; } ;
struct mlx4_cmd_info {int dummy; } ;
struct mlx4_active_ports {int ports; } ;
struct TYPE_12__ {struct mlx4_vport_oper_state* vport; } ;
struct TYPE_9__ {int* quota; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 size_t VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 size_t VAR_43 ;
 size_t VAR_44 ;
 size_t VAR_45 ;
 size_t VAR_46 ;
 size_t VAR_47 ;
 size_t VAR_48 ;
 size_t VAR_49 ;
 int FUNC_1 (int ,int ) ;
 size_t FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 size_t FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (struct mlx4_dev*,struct mlx4_func*,int) ;
 struct mlx4_active_ports FUNC_6 (struct mlx4_dev*,int) ;
 int FUNC_7 (struct mlx4_dev*,int,int*) ;
 int FUNC_8 (struct mlx4_priv*,int,size_t) ;
 struct mlx4_priv* FUNC_9 (struct mlx4_dev*) ;
 int FUNC_10 (struct mlx4_dev*,int,int) ;
 scalar_t__ FUNC_11 (struct mlx4_dev*,int,size_t) ;
 int FUNC_12 (int) ;

int FUNC_13(struct mlx4_dev *VAR_50, int VAR_51,
    struct mlx4_vhcr *VAR_52,
    struct mlx4_cmd_mailbox *VAR_53,
    struct mlx4_cmd_mailbox *VAR_54,
    struct mlx4_cmd_info *VAR_55)
{
 struct mlx4_priv *VAR_56 = FUNC_9(VAR_50);
 u8 VAR_57, VAR_58;
 u32 VAR_59, VAR_60, VAR_61;
 int VAR_62 = 0;
 struct mlx4_func VAR_63;
 if (VAR_52->op_modifier == 1) {
  struct mlx4_active_ports VAR_64 =
   FUNC_6(VAR_50, VAR_51);
  int VAR_65 = FUNC_10(
    VAR_50, VAR_51, VAR_52->in_modifier);
  struct mlx4_vport_oper_state *VAR_66;

  if (VAR_65 < 0)
   return -VAR_0;

  VAR_52->in_modifier = VAR_65;

  VAR_57 = VAR_52->in_modifier -
   FUNC_2(VAR_64.ports, VAR_50->caps.num_ports);
  FUNC_0(VAR_54->buf, VAR_57, 0x3);

  VAR_58 = VAR_52->in_modifier;
  VAR_60 = VAR_50->phys_caps.base_proxy_sqpn + 8 * VAR_51 + VAR_58 - 1;


  VAR_57 = 0x10;

  if (FUNC_11(VAR_50, VAR_51, VAR_58) &&
      !FUNC_7(VAR_50, VAR_60, &VAR_61)) {
   VAR_57 |= 0x08;
   FUNC_0(VAR_54->buf, VAR_61,
     0x4);
  }
  FUNC_0(VAR_54->buf, VAR_57, 0xc);


  VAR_59 = VAR_50->phys_caps.base_tunnel_sqpn + 8 * VAR_51 + VAR_58 - 1;
  FUNC_0(VAR_54->buf, VAR_59, 0x10);

  VAR_59 += 2;
  FUNC_0(VAR_54->buf, VAR_59, 0x18);

  FUNC_0(VAR_54->buf, VAR_60, 0x14);
  VAR_60 += 2;
  FUNC_0(VAR_54->buf, VAR_60, 0x1c);

  FUNC_0(VAR_54->buf, VAR_50->caps.phys_port_id[VAR_52->in_modifier],
    0x28);

  VAR_66 = &VAR_56->mfunc.master.vf_oper[VAR_51].vport[VAR_58];
  VAR_62 = FUNC_8(VAR_56, VAR_51, VAR_58);
  if (VAR_62)
   return VAR_62;

  VAR_57 = 0;
  if (VAR_50->caps.phv_bit[VAR_58])
   VAR_57 |= 0x40;
  if (VAR_66->state.vlan_proto == FUNC_3(VAR_1))
   VAR_57 |= 0x20;
  FUNC_0(VAR_54->buf, VAR_57, 0x8);

 } else if (VAR_52->op_modifier == 0) {
  struct mlx4_active_ports VAR_67 =
   FUNC_6(VAR_50, VAR_51);
  struct mlx4_slave_state *VAR_68 =
   &VAR_56->mfunc.master.slave_state[VAR_51];




  VAR_57 = (0x80 | 0x40 |
    0x10 | 0x04 |
    0x08);
  FUNC_0(VAR_54->buf, VAR_57, 0x0);

  VAR_57 = FUNC_4(
   FUNC_1(VAR_67.ports, VAR_50->caps.num_ports),
   VAR_50->caps.num_ports);
  FUNC_0(VAR_54->buf, VAR_57, 0x1);

  VAR_59 = VAR_50->caps.function_caps;
  FUNC_0(VAR_54->buf, VAR_59, 0x4);

  VAR_57 = 0;
  FUNC_0(VAR_54->buf, VAR_57, 0x8);

  VAR_59 = VAR_56->mfunc.master.res_tracker.res_alloc[VAR_48].quota[VAR_51];
  FUNC_0(VAR_54->buf, VAR_59, 0x50);
  VAR_59 = VAR_50->caps.num_qps;
  FUNC_0(VAR_54->buf, VAR_59, 0x10);

  VAR_59 = VAR_56->mfunc.master.res_tracker.res_alloc[VAR_49].quota[VAR_51];
  FUNC_0(VAR_54->buf, VAR_59, 0x58);
  VAR_59 = VAR_50->caps.num_srqs;
  FUNC_0(VAR_54->buf, VAR_59, 0x18);

  VAR_59 = VAR_56->mfunc.master.res_tracker.res_alloc[VAR_45].quota[VAR_51];
  FUNC_0(VAR_54->buf, VAR_59, 0x54);
  VAR_59 = VAR_50->caps.num_cqs;
  FUNC_0(VAR_54->buf, VAR_59, 0x14);

  if (!(VAR_50->caps.flags2 & VAR_2) ||
      FUNC_5(VAR_50, &VAR_63, VAR_51)) {
   VAR_59 = VAR_52->in_modifier &
    FUNC_0(31) ?
    VAR_50->caps.num_eqs :
    FUNC_12(VAR_50->caps.num_eqs);
   FUNC_0(VAR_54->buf, VAR_59, 0x2c);
   VAR_59 = VAR_50->caps.reserved_eqs;
   FUNC_0(VAR_54->buf, VAR_59, 0x30);
  } else {
   VAR_59 = VAR_52->in_modifier &
    FUNC_0(31) ?
    VAR_63.max_eq :
    FUNC_12(VAR_63.max_eq);
   FUNC_0(VAR_54->buf, VAR_59, 0x2c);
   VAR_59 = VAR_63.rsvd_eqs;
   FUNC_0(VAR_54->buf, VAR_59, 0x30);
  }

  VAR_59 = VAR_56->mfunc.master.res_tracker.res_alloc[VAR_46].quota[VAR_51];
  FUNC_0(VAR_54->buf, VAR_59, 0x60);
  VAR_59 = VAR_50->caps.num_mpts;
  FUNC_0(VAR_54->buf, VAR_59, 0x20);

  VAR_59 = VAR_56->mfunc.master.res_tracker.res_alloc[VAR_47].quota[VAR_51];
  FUNC_0(VAR_54->buf, VAR_59, 0x64);
  VAR_59 = VAR_50->caps.num_mtts;
  FUNC_0(VAR_54->buf, VAR_59, 0x24);

  VAR_59 = VAR_50->caps.num_mgms + VAR_50->caps.num_amgms;
  FUNC_0(VAR_54->buf, VAR_59, 0x68);
  FUNC_0(VAR_54->buf, VAR_59, 0x28);

  VAR_59 = (1UL << 31) |
   (1UL << 30);
  FUNC_0(VAR_54->buf, VAR_59, 0x6c);

  VAR_59 = VAR_50->caps.reserved_lkey + ((VAR_51 << 8) & 0xFF00);
  FUNC_0(VAR_54->buf, VAR_59, 0x48);

  if (VAR_52->in_modifier & FUNC_0(30))
   VAR_68->vst_qinq_supported = 1;

 } else
  VAR_62 = -VAR_0;

 return VAR_62;
}
