
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct mlx4_init_hca_param {int global_caps; int hca_core_clock; int qpc_base; int log_num_qps; int srqc_base; int log_num_srqs; int cqc_base; int log_num_cqs; int altc_base; int auxc_base; int eqc_base; int log_num_eqs; int num_sys_eqs; int rdmarc_base; int log_rd_per_qp; scalar_t__ steering_mode; int rss_ip_frags; int mc_base; int log_mc_entry_sz; int log_mc_table_sz; int dmfs_high_steer_mode; int log_mc_hash_sz; int cqe_size; int eqe_size; int dmpt_base; int mw_enabled; int log_mpt_sz; int mtt_base; int cmpt_base; int uar_page_sz; int log_uar_sz; int phv_check_en; int dev_cap_enabled; } ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_mailbox {int dma; int * buf; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
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
 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int FUNC_1 (int,int *,int ) ;




 scalar_t__ VAR_42 ;
 scalar_t__ VAR_43 ;
 scalar_t__ VAR_44 ;
 int FUNC_2 (struct mlx4_cmd_mailbox*) ;
 int VAR_45 ;
 int VAR_46 ;
 struct mlx4_cmd_mailbox* FUNC_3 (struct mlx4_dev*) ;
 int FUNC_4 (struct mlx4_dev*,int ,int ,int ,int ,int ,int ,int) ;
 int FUNC_5 (struct mlx4_dev*,struct mlx4_cmd_mailbox*) ;
 int FUNC_6 (struct mlx4_dev*) ;

int FUNC_7(struct mlx4_dev *VAR_47,
     struct mlx4_init_hca_param *VAR_48)
{
 struct mlx4_cmd_mailbox *VAR_49;
 __be32 *VAR_50;
 u64 VAR_51;
 u32 VAR_52;
 u16 VAR_53;
 u8 VAR_54;
 int VAR_55;
 static const u8 VAR_56[] = {
  [0] = 131,
  [1] = 129,
  [2] = 128,
  [3] = 130
 };




 VAR_49 = FUNC_3(VAR_47);
 if (FUNC_0(VAR_49))
  return FUNC_2(VAR_49);
 VAR_50 = VAR_49->buf;

 VAR_55 = FUNC_4(VAR_47, 0, VAR_49->dma, 0, 0,
      VAR_34,
      VAR_35,
      !FUNC_6(VAR_47));
 if (VAR_55)
  goto out;

 FUNC_1(VAR_48->global_caps, VAR_50, 0x04);
 FUNC_1(VAR_48->hca_core_clock, VAR_50, 0x0c);



 FUNC_1(VAR_51, VAR_50, VAR_28);
 VAR_48->qpc_base = VAR_51 & ~((u64)0x1f);
 FUNC_1(VAR_54, VAR_50, VAR_21);
 VAR_48->log_num_qps = VAR_54 & 0x1f;
 FUNC_1(VAR_51, VAR_50, VAR_30);
 VAR_48->srqc_base = VAR_51 & ~((u64)0x1f);
 FUNC_1(VAR_54, VAR_50, VAR_23);
 VAR_48->log_num_srqs = VAR_54 & 0x1f;
 FUNC_1(VAR_51, VAR_50, VAR_4);
 VAR_48->cqc_base = VAR_51 & ~((u64)0x1f);
 FUNC_1(VAR_54, VAR_50, VAR_15);
 VAR_48->log_num_cqs = VAR_54 & 0x1f;
 FUNC_1(VAR_51, VAR_50, VAR_0);
 VAR_48->altc_base = VAR_51;
 FUNC_1(VAR_51, VAR_50, VAR_1);
 VAR_48->auxc_base = VAR_51;
 FUNC_1(VAR_51, VAR_50, VAR_7);
 VAR_48->eqc_base = VAR_51 & ~((u64)0x1f);
 FUNC_1(VAR_54, VAR_50, VAR_16);
 VAR_48->log_num_eqs = VAR_54 & 0x1f;
 FUNC_1(VAR_53, VAR_50, VAR_27);
 VAR_48->num_sys_eqs = VAR_53 & 0xfff;
 FUNC_1(VAR_51, VAR_50, VAR_29);
 VAR_48->rdmarc_base = VAR_51 & ~((u64)0x1f);
 FUNC_1(VAR_54, VAR_50, VAR_22);
 VAR_48->log_rd_per_qp = VAR_54 & 0x7;

 FUNC_1(VAR_52, VAR_50, VAR_10);
 if (VAR_52 & (1 << VAR_5)) {
  VAR_48->steering_mode = VAR_44;
 } else {
  FUNC_1(VAR_54, VAR_50, VAR_33);
  if (VAR_54 & 0x8)
   VAR_48->steering_mode = VAR_43;
  else
   VAR_48->steering_mode = VAR_42;
 }

 if (VAR_52 & (1 << 13))
  VAR_48->rss_ip_frags = 1;


 if (VAR_48->steering_mode == VAR_44) {
  FUNC_1(VAR_48->mc_base, VAR_50, VAR_12);
  FUNC_1(VAR_54, VAR_50, VAR_13);
  VAR_48->log_mc_entry_sz = VAR_54 & 0x1f;
  FUNC_1(VAR_54, VAR_50, VAR_14);
  VAR_48->log_mc_table_sz = VAR_54 & 0x1f;
  FUNC_1(VAR_54, VAR_50, VAR_11);
  VAR_48->dmfs_high_steer_mode =
   VAR_56[(VAR_54 >> 6) & 3];
 } else {
  FUNC_1(VAR_48->mc_base, VAR_50, VAR_25);
  FUNC_1(VAR_54, VAR_50, VAR_17);
  VAR_48->log_mc_entry_sz = VAR_54 & 0x1f;
  FUNC_1(VAR_54, VAR_50, VAR_18);
  VAR_48->log_mc_hash_sz = VAR_54 & 0x1f;
  FUNC_1(VAR_54, VAR_50, VAR_19);
  VAR_48->log_mc_table_sz = VAR_54 & 0x1f;
 }


 FUNC_1(VAR_54, VAR_50, VAR_8);
 if (VAR_54 & 0x20)
  VAR_48->dev_cap_enabled |= VAR_38;
 if (VAR_54 & 0x40)
  VAR_48->dev_cap_enabled |= VAR_37;


 FUNC_1(VAR_54, VAR_50, VAR_9);
 if (VAR_54) {
  VAR_48->dev_cap_enabled |= VAR_40;
  VAR_48->dev_cap_enabled |= VAR_39;
  VAR_48->cqe_size = 1 << ((VAR_54 &
      VAR_36) + 5);
  VAR_48->eqe_size = 1 << (((VAR_54 &
       VAR_41) >> 4) + 5);
 }



 FUNC_1(VAR_48->dmpt_base, VAR_50, VAR_6);
 FUNC_1(VAR_54, VAR_50, VAR_31);
 VAR_48->mw_enabled = VAR_54 >> 7;
 FUNC_1(VAR_54, VAR_50, VAR_20);
 VAR_48->log_mpt_sz = VAR_54 & 0x3f;
 FUNC_1(VAR_48->mtt_base, VAR_50, VAR_26);
 FUNC_1(VAR_48->cmpt_base, VAR_50, VAR_3);



 FUNC_1(VAR_48->uar_page_sz, VAR_50, VAR_32);
 FUNC_1(VAR_54, VAR_50, VAR_24);
 VAR_48->log_uar_sz = VAR_54 & 0xf;


 FUNC_1(VAR_54, VAR_50, VAR_2);
 if (VAR_54 & 0x2)
  VAR_48->phv_check_en = 1;
out:
 FUNC_5(VAR_47, VAR_49);

 return VAR_55;
}
