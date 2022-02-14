
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int qp0_qkey; int qp0_tunnel; int qp0_proxy; int qp1_tunnel; int qp1_proxy; } ;
struct mlx4_func_cap {int flags; int num_ports; int pf_context_behaviour; int qp_quota; int srq_quota; int cq_quota; int mpt_quota; int mtt_quota; int mcg_quota; int max_eq; int reserved_eq; int reserved_lkey; int flags1; int physical_port; int phys_port_id; int flags0; TYPE_2__ spec_qps; int extra_flags; } ;
struct TYPE_3__ {int num_ports; scalar_t__* port_type; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
struct mlx4_cmd_mailbox {int* buf; int dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int*,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct mlx4_cmd_mailbox*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
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
 int VAR_27 ;
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
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 struct mlx4_cmd_mailbox* FUNC_3 (struct mlx4_dev*) ;
 int FUNC_4 (struct mlx4_dev*,int ,int ,int,int,int ,int ,int ) ;
 int FUNC_5 (struct mlx4_dev*,char*) ;
 int FUNC_6 (struct mlx4_dev*,struct mlx4_cmd_mailbox*) ;

int FUNC_7(struct mlx4_dev *VAR_51, u8 VAR_52,
   struct mlx4_func_cap *VAR_53)
{
 struct mlx4_cmd_mailbox *VAR_54;
 u32 *VAR_55;
 u8 VAR_56, VAR_57;
 u32 VAR_58, VAR_59;
 int VAR_60 = 0, VAR_61 = 0;
 u32 VAR_62;
 u32 VAR_63;

 VAR_57 = !!VAR_52;
 VAR_63 = VAR_49 |
  VAR_48;
 VAR_62 = VAR_57 ? VAR_52 : VAR_63;

 VAR_54 = FUNC_3(VAR_51);
 if (FUNC_0(VAR_54))
  return FUNC_2(VAR_54);

 VAR_60 = FUNC_4(VAR_51, 0, VAR_54->dma, VAR_62, VAR_57,
      VAR_2,
      VAR_3, VAR_4);
 if (VAR_60)
  goto out;

 VAR_55 = VAR_54->buf;

 if (!VAR_57) {
  FUNC_1(VAR_56, VAR_55, VAR_20);
  if (!(VAR_56 & (VAR_21 | VAR_23))) {
   FUNC_5(VAR_51, "The host supports neither eth nor rdma interfaces\n");
   VAR_60 = -VAR_1;
   goto out;
  }
  VAR_53->flags = VAR_56;
  VAR_61 = !!(VAR_53->flags & VAR_22);

  FUNC_1(VAR_56, VAR_55, VAR_33);
  VAR_53->num_ports = VAR_56;

  FUNC_1(VAR_58, VAR_55, VAR_34);
  VAR_53->pf_context_behaviour = VAR_58;

  if (VAR_61) {
   FUNC_1(VAR_58, VAR_55, VAR_42);
   VAR_53->qp_quota = VAR_58 & 0xFFFFFF;

   FUNC_1(VAR_58, VAR_55, VAR_46);
   VAR_53->srq_quota = VAR_58 & 0xFFFFFF;

   FUNC_1(VAR_58, VAR_55, VAR_9);
   VAR_53->cq_quota = VAR_58 & 0xFFFFFF;

   FUNC_1(VAR_58, VAR_55, VAR_29);
   VAR_53->mpt_quota = VAR_58 & 0xFFFFFF;

   FUNC_1(VAR_58, VAR_55, VAR_31);
   VAR_53->mtt_quota = VAR_58 & 0xFFFFFF;

   FUNC_1(VAR_58, VAR_55, VAR_27);
   VAR_53->mcg_quota = VAR_58 & 0xFFFFFF;

  } else {
   FUNC_1(VAR_58, VAR_55, VAR_43);
   VAR_53->qp_quota = VAR_58 & 0xFFFFFF;

   FUNC_1(VAR_58, VAR_55, VAR_47);
   VAR_53->srq_quota = VAR_58 & 0xFFFFFF;

   FUNC_1(VAR_58, VAR_55, VAR_10);
   VAR_53->cq_quota = VAR_58 & 0xFFFFFF;

   FUNC_1(VAR_58, VAR_55, VAR_30);
   VAR_53->mpt_quota = VAR_58 & 0xFFFFFF;

   FUNC_1(VAR_58, VAR_55, VAR_32);
   VAR_53->mtt_quota = VAR_58 & 0xFFFFFF;

   FUNC_1(VAR_58, VAR_55, VAR_28);
   VAR_53->mcg_quota = VAR_58 & 0xFFFFFF;
  }
  FUNC_1(VAR_58, VAR_55, VAR_26);
  VAR_53->max_eq = VAR_58 & 0xFFFFFF;

  FUNC_1(VAR_58, VAR_55, VAR_45);
  VAR_53->reserved_eq = VAR_58 & 0xFFFFFF;

  if (VAR_53->flags & VAR_24) {
   FUNC_1(VAR_58, VAR_55, VAR_44);
   VAR_53->reserved_lkey = VAR_58;
  } else {
   VAR_53->reserved_lkey = 0;
  }

  VAR_53->extra_flags = 0;




  if (VAR_53->flags & VAR_25) {
   FUNC_1(VAR_58, VAR_55, VAR_13);
   if (VAR_58 & VAR_12)
    VAR_53->extra_flags |= VAR_8;
   if (VAR_58 & VAR_11)
    VAR_53->extra_flags |= VAR_7;
  }

  goto out;
 }


 if (VAR_52 > VAR_51->caps.num_ports) {
  VAR_60 = -VAR_0;
  goto out;
 }

 FUNC_1(VAR_53->flags1, VAR_55, VAR_19);
 if (VAR_51->caps.port_type[VAR_52] == VAR_5) {
  if (VAR_53->flags1 & VAR_17) {
   FUNC_5(VAR_51, "VLAN is enforced on this port\n");
   VAR_60 = -VAR_1;
   goto out;
  }

  if (VAR_53->flags1 & VAR_16) {
   FUNC_5(VAR_51, "Force mac is enabled on this port\n");
   VAR_60 = -VAR_1;
   goto out;
  }
 } else if (VAR_51->caps.port_type[VAR_52] == VAR_6) {
  FUNC_1(VAR_56, VAR_55, VAR_15);
  if (VAR_56 & VAR_14) {
   FUNC_5(VAR_51, "phy_wqe_gid is enforced on this ib port\n");
   VAR_60 = -VAR_1;
   goto out;
  }
 }

 FUNC_1(VAR_56, VAR_55, VAR_36);
 VAR_53->physical_port = VAR_56;
 if (VAR_53->physical_port != VAR_52) {
  VAR_60 = -VAR_0;
  goto out;
 }

 if (VAR_53->flags1 & VAR_50) {
  FUNC_1(VAR_59, VAR_55, VAR_37);
  VAR_53->spec_qps.qp0_qkey = VAR_59;
 } else {
  VAR_53->spec_qps.qp0_qkey = 0;
 }

 FUNC_1(VAR_58, VAR_55, VAR_39);
 VAR_53->spec_qps.qp0_tunnel = VAR_58 & 0xFFFFFF;

 FUNC_1(VAR_58, VAR_55, VAR_38);
 VAR_53->spec_qps.qp0_proxy = VAR_58 & 0xFFFFFF;

 FUNC_1(VAR_58, VAR_55, VAR_41);
 VAR_53->spec_qps.qp1_tunnel = VAR_58 & 0xFFFFFF;

 FUNC_1(VAR_58, VAR_55, VAR_40);
 VAR_53->spec_qps.qp1_proxy = VAR_58 & 0xFFFFFF;

 if (VAR_53->flags1 & VAR_18)
  FUNC_1(VAR_53->phys_port_id, VAR_55,
    VAR_35);

 FUNC_1(VAR_53->flags0, VAR_55, VAR_15);
out:
 FUNC_6(VAR_51, VAR_54);

 return VAR_60;
}
