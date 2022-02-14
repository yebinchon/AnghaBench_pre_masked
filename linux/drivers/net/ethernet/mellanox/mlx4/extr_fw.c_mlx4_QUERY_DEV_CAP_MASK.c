
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int num_rates; int max_val; int max_unit; int min_val; int min_unit; } ;
struct mlx4_dev_cap {int reserved_qps; int max_qps; int reserved_srqs; int max_srqs; int max_cq_sz; int reserved_cqs; int max_cqs; int max_mpts; int reserved_eqs; int max_eqs; int reserved_mtts; int reserved_mrws; int num_sys_eqs; int max_requester_per_qp; int max_responder_per_qp; int max_gso_sz; int max_rss_tbl_sz; int max_rdma_global; int local_ca_ack_delay; int num_ports; int max_msg_sz; int fs_log_max_ucast_qp_range_size; int fs_max_num_qp_per_entry; int stat_rate_support; int flags; int* wol_port; int reserved_uars; int uar_size; int min_page_sz; int bf_reg_size; int bf_regs_per_page; int max_sq_sg; int max_sq_desc_sz; int max_qp_per_mcg; int reserved_mgms; int max_mcgs; int reserved_pds; int max_pds; int reserved_xrcds; int max_xrcds; int rdmarc_entry_sz; int qpc_entry_sz; int aux_entry_sz; int altc_entry_sz; int eqc_entry_sz; int cqc_entry_sz; int srq_entry_sz; int cmpt_entry_sz; int mtt_entry_sz; int dmpt_entry_sz; int max_srq_sz; int max_qp_sz; int resize_srq; int max_rq_sg; int max_rq_desc_sz; int bmme_flags; int reserved_lkey; int max_icm_sz; int max_counters; int dmfs_high_rate_qpn_base; int dmfs_high_rate_qpn_range; int health_buffer_addrs; int flags2; scalar_t__ port_cap; TYPE_1__ rl_caps; } ;
struct mlx4_dev {int dummy; } ;
struct mlx4_cmd_mailbox {int* buf; int dma; } ;


 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
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
 int FUNC_1 (int,int*,int ) ;
 int VAR_47 ;
 int FUNC_2 (struct mlx4_cmd_mailbox*) ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 int VAR_72 ;
 int VAR_73 ;
 int VAR_74 ;
 int VAR_75 ;
 int VAR_76 ;
 int VAR_77 ;
 int VAR_78 ;
 int VAR_79 ;
 int VAR_80 ;
 int VAR_81 ;
 int VAR_82 ;
 int VAR_83 ;
 int VAR_84 ;
 int VAR_85 ;
 int VAR_86 ;
 int VAR_87 ;
 int VAR_88 ;
 int VAR_89 ;
 int VAR_90 ;
 int VAR_91 ;
 int VAR_92 ;
 int VAR_93 ;
 int VAR_94 ;
 int VAR_95 ;
 int VAR_96 ;
 int VAR_97 ;
 int VAR_98 ;
 int VAR_99 ;
 int VAR_100 ;
 int VAR_101 ;
 int VAR_102 ;
 int VAR_103 ;
 int VAR_104 ;
 int VAR_105 ;
 int VAR_106 ;
 int VAR_107 ;
 int VAR_108 ;
 int VAR_109 ;
 int VAR_110 ;
 int VAR_111 ;
 int VAR_112 ;
 int VAR_113 ;
 int VAR_114 ;
 int VAR_115 ;
 int VAR_116 ;
 int VAR_117 ;
 int VAR_118 ;
 int VAR_119 ;
 int VAR_120 ;
 int VAR_121 ;
 int VAR_122 ;
 int VAR_123 ;
 int VAR_124 ;
 int VAR_125 ;
 int VAR_126 ;
 int VAR_127 ;
 int VAR_128 ;
 int VAR_129 ;
 int VAR_130 ;
 int VAR_131 ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (struct mlx4_dev*,int,scalar_t__) ;
 struct mlx4_cmd_mailbox* FUNC_6 (struct mlx4_dev*) ;
 int FUNC_7 (struct mlx4_dev*,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_8 (struct mlx4_dev*,struct mlx4_cmd_mailbox*) ;
 scalar_t__ FUNC_9 (struct mlx4_dev*) ;

int FUNC_10(struct mlx4_dev *VAR_132, struct mlx4_dev_cap *VAR_133)
{
 struct mlx4_cmd_mailbox *VAR_134;
 u32 *VAR_135;
 u8 VAR_136;
 u32 VAR_137, VAR_138, VAR_139;
 u16 VAR_140;
 u16 VAR_141;
 int VAR_142;
 int VAR_143;
 VAR_133->flags2 = 0;
 VAR_134 = FUNC_6(VAR_132);
 if (FUNC_0(VAR_134))
  return FUNC_2(VAR_134);
 VAR_135 = VAR_134->buf;

 VAR_142 = FUNC_7(VAR_132, 0, VAR_134->dma, 0, 0, VAR_2,
      VAR_3, VAR_1);
 if (VAR_142)
  goto out;

 if (FUNC_9(VAR_132))
  FUNC_3(VAR_135);
 FUNC_1(VAR_136, VAR_135, 0x12);
 VAR_133->reserved_qps = 1 << (VAR_136 & 0xf);
 FUNC_1(VAR_136, VAR_135, 0x13);
 VAR_133->max_qps = 1 << (VAR_136 & 0x1f);
 FUNC_1(VAR_136, VAR_135, 0x14);
 VAR_133->reserved_srqs = 1 << (VAR_136 >> 4);
 FUNC_1(VAR_136, VAR_135, 0x15);
 VAR_133->max_srqs = 1 << (VAR_136 & 0x1f);
 FUNC_1(VAR_136, VAR_135, 0x19);
 VAR_133->max_cq_sz = 1 << VAR_136;
 FUNC_1(VAR_136, VAR_135, 0x1a);
 VAR_133->reserved_cqs = 1 << (VAR_136 & 0xf);
 FUNC_1(VAR_136, VAR_135, 0x1b);
 VAR_133->max_cqs = 1 << (VAR_136 & 0x1f);
 FUNC_1(VAR_136, VAR_135, 0x1d);
 VAR_133->max_mpts = 1 << (VAR_136 & 0x3f);
 FUNC_1(VAR_136, VAR_135, 0x1e);
 VAR_133->reserved_eqs = 1 << (VAR_136 & 0xf);
 FUNC_1(VAR_136, VAR_135, 0x1f);
 VAR_133->max_eqs = 1 << (VAR_136 & 0xf);
 FUNC_1(VAR_136, VAR_135, 0x20);
 VAR_133->reserved_mtts = 1 << (VAR_136 >> 4);
 FUNC_1(VAR_136, VAR_135, 0x22);
 VAR_133->reserved_mrws = 1 << (VAR_136 & 0xf);
 FUNC_1(VAR_140, VAR_135, 0x26);
 VAR_133->num_sys_eqs = VAR_140 & 0xfff;
 FUNC_1(VAR_136, VAR_135, 0x29);
 VAR_133->max_requester_per_qp = 1 << (VAR_136 & 0x3f);
 FUNC_1(VAR_136, VAR_135, 0x2b);
 VAR_133->max_responder_per_qp = 1 << (VAR_136 & 0x3f);
 FUNC_1(VAR_136, VAR_135, 0x2d);
 VAR_136 &= 0x1f;
 if (!VAR_136)
  VAR_133->max_gso_sz = 0;
 else
  VAR_133->max_gso_sz = 1 << VAR_136;

 FUNC_1(VAR_136, VAR_135, 0x2e);
 if (VAR_136 & 0x20)
  VAR_133->flags2 |= VAR_32;
 if (VAR_136 & 0x10)
  VAR_133->flags2 |= VAR_31;
 VAR_136 &= 0xf;
 if (VAR_136) {
  VAR_133->flags2 |= VAR_30;
  VAR_133->max_rss_tbl_sz = 1 << VAR_136;
 } else
  VAR_133->max_rss_tbl_sz = 0;
 FUNC_1(VAR_136, VAR_135, 0x2f);
 VAR_133->max_rdma_global = 1 << (VAR_136 & 0x3f);
 FUNC_1(VAR_136, VAR_135, 0x35);
 VAR_133->local_ca_ack_delay = VAR_136 & 0x1f;
 FUNC_1(VAR_136, VAR_135, 0x37);
 VAR_133->num_ports = VAR_136 & 0xf;
 FUNC_1(VAR_136, VAR_135, 0x38);
 VAR_133->max_msg_sz = 1 << (VAR_136 & 0x1f);
 FUNC_1(VAR_136, VAR_135, 0x70);
 if (VAR_136 & 0x10)
  VAR_133->flags2 |= VAR_15;
 FUNC_1(VAR_136, VAR_135, 0x76);
 if (VAR_136 & 0x80)
  VAR_133->flags2 |= VAR_17;
 VAR_133->fs_log_max_ucast_qp_range_size = VAR_136 & 0x1f;
 if (VAR_136 & 0x20)
  VAR_133->flags2 |= VAR_9;
 FUNC_1(VAR_136, VAR_135, 0x34);
 if (VAR_136 & 0x80)
  VAR_133->flags2 |= VAR_22;
 FUNC_1(VAR_136, VAR_135, 0x74);
 if (VAR_136 & 0x80)
  VAR_133->flags2 |= VAR_8;
 FUNC_1(VAR_136, VAR_135, 0x77);
 VAR_133->fs_max_num_qp_per_entry = VAR_136;
 FUNC_1(VAR_136, VAR_135, 0x78);
 if (VAR_136 & (1 << 5))
  VAR_133->flags2 |= VAR_34;
 FUNC_1(VAR_136, VAR_135, 0x7b);
 if (VAR_136 & 0x1)
  VAR_133->flags2 |= VAR_24;
 FUNC_1(VAR_141, VAR_135, 0x3c);
 VAR_133->stat_rate_support = VAR_141;
 FUNC_1(VAR_136, VAR_135, 0x3e);
 if (VAR_136 & 0x80)
  VAR_133->flags2 |= VAR_38;
 FUNC_1(VAR_139, VAR_135, 0x40);
 FUNC_1(VAR_138, VAR_135, 0x44);
 VAR_133->flags = VAR_138 | (u64)VAR_139 << 32;
 FUNC_1(VAR_136, VAR_135, 0x43);
 VAR_133->wol_port[1] = !!(VAR_136 & 0x20);
 VAR_133->wol_port[2] = !!(VAR_136 & 0x40);
 FUNC_1(VAR_136, VAR_135, 0x48);
 VAR_133->reserved_uars = VAR_136 >> 4;
 FUNC_1(VAR_136, VAR_135, 0x49);
 VAR_133->uar_size = 1 << ((VAR_136 & 0x3f) + 20);
 FUNC_1(VAR_136, VAR_135, 0x4b);
 VAR_133->min_page_sz = 1 << VAR_136;

 FUNC_1(VAR_136, VAR_135, 0x4c);
 if (VAR_136 & 0x80) {
  FUNC_1(VAR_136, VAR_135, 0x4d);
  VAR_133->bf_reg_size = 1 << (VAR_136 & 0x1f);
  FUNC_1(VAR_136, VAR_135, 0x4e);
  if ((1 << (VAR_136 & 0x3f)) > (VAR_47 / VAR_133->bf_reg_size))
   VAR_136 = 3;
  VAR_133->bf_regs_per_page = 1 << (VAR_136 & 0x3f);
 } else {
  VAR_133->bf_reg_size = 0;
 }

 FUNC_1(VAR_136, VAR_135, 0x51);
 VAR_133->max_sq_sg = VAR_136;
 FUNC_1(VAR_140, VAR_135, 0x52);
 VAR_133->max_sq_desc_sz = VAR_140;

 FUNC_1(VAR_136, VAR_135, 0x5C);
 if (VAR_136 & (1 << 2))
  VAR_133->flags2 |= VAR_41;
 FUNC_1(VAR_136, VAR_135, 0x5D);
 if (VAR_136 & 0x1)
  VAR_133->flags2 |= VAR_35;
 FUNC_1(VAR_136, VAR_135, 0x61);
 VAR_133->max_qp_per_mcg = 1 << VAR_136;
 FUNC_1(VAR_136, VAR_135, 0x62);
 VAR_133->reserved_mgms = VAR_136 & 0xf;
 FUNC_1(VAR_136, VAR_135, 0x63);
 VAR_133->max_mcgs = 1 << VAR_136;
 FUNC_1(VAR_136, VAR_135, 0x64);
 VAR_133->reserved_pds = VAR_136 >> 4;
 FUNC_1(VAR_136, VAR_135, 0x65);
 VAR_133->max_pds = 1 << (VAR_136 & 0x3f);
 FUNC_1(VAR_136, VAR_135, 0x66);
 VAR_133->reserved_xrcds = VAR_136 >> 4;
 FUNC_1(VAR_136, VAR_135, 0x67);
 VAR_133->max_xrcds = 1 << (VAR_136 & 0x1f);

 FUNC_1(VAR_140, VAR_135, 0x80);
 VAR_133->rdmarc_entry_sz = VAR_140;
 FUNC_1(VAR_140, VAR_135, 0x82);
 VAR_133->qpc_entry_sz = VAR_140;
 FUNC_1(VAR_140, VAR_135, 0x84);
 VAR_133->aux_entry_sz = VAR_140;
 FUNC_1(VAR_140, VAR_135, 0x86);
 VAR_133->altc_entry_sz = VAR_140;
 FUNC_1(VAR_140, VAR_135, 0x88);
 VAR_133->eqc_entry_sz = VAR_140;
 FUNC_1(VAR_140, VAR_135, 0x8a);
 VAR_133->cqc_entry_sz = VAR_140;
 FUNC_1(VAR_140, VAR_135, 0x8c);
 VAR_133->srq_entry_sz = VAR_140;
 FUNC_1(VAR_140, VAR_135, 0x8e);
 VAR_133->cmpt_entry_sz = VAR_140;
 FUNC_1(VAR_140, VAR_135, 0x90);
 VAR_133->mtt_entry_sz = VAR_140;
 FUNC_1(VAR_140, VAR_135, 0x92);
 VAR_133->dmpt_entry_sz = VAR_140;

 FUNC_1(VAR_136, VAR_135, 0x10);
 VAR_133->max_srq_sz = 1 << VAR_136;
 FUNC_1(VAR_136, VAR_135, 0x11);
 VAR_133->max_qp_sz = 1 << VAR_136;
 FUNC_1(VAR_136, VAR_135, 0x33);
 VAR_133->resize_srq = VAR_136 & 1;
 FUNC_1(VAR_136, VAR_135, 0x55);
 VAR_133->max_rq_sg = VAR_136;
 FUNC_1(VAR_140, VAR_135, 0x56);
 VAR_133->max_rq_desc_sz = VAR_140;
 FUNC_1(VAR_136, VAR_135, 0x7a);
 if (VAR_136 & (1 << 4))
  VAR_133->flags2 |= VAR_25;
 if (VAR_136 & (1 << 5))
  VAR_133->flags2 |= VAR_13;
 if (VAR_136 & (1 << 6))
  VAR_133->flags2 |= VAR_6;
 if (VAR_136 & (1 << 7))
  VAR_133->flags2 |= VAR_11;
 FUNC_1(VAR_133->bmme_flags, VAR_135,
   0x94);
 if (VAR_133->bmme_flags & VAR_46)
  VAR_133->flags2 |= VAR_29;
 if (VAR_133->bmme_flags & VAR_45)
  VAR_133->flags2 |= VAR_23;
 FUNC_1(VAR_136, VAR_135, 0x94);
 if (VAR_136 & 0x20)
  VAR_133->flags2 |= VAR_5;
 if (VAR_136 & (1 << 2))
  VAR_133->flags2 |= VAR_18;
 FUNC_1(VAR_136, VAR_135, 0x96);
 if (VAR_136 & 0x80)
  VAR_133->flags2 |= VAR_21;
 if (VAR_136 & 0x40)
  VAR_133->flags2 |= VAR_33;

 FUNC_1(VAR_133->reserved_lkey, VAR_135,
   0x98);
 FUNC_1(VAR_137, VAR_135, 0x9c);
 if (VAR_137 & (1 << 0))
  VAR_133->flags2 |= VAR_12;
 if (VAR_137 & (1 << 7))
  VAR_133->flags2 |= VAR_28;
 if (VAR_137 & (1 << 8))
  VAR_133->flags2 |= VAR_10;
 FUNC_1(VAR_137, VAR_135, 0x9c);
 if (VAR_137 & (1 << 17))
  VAR_133->flags2 |= VAR_7;
 FUNC_1(VAR_136, VAR_135, 0x9d);
 if (VAR_136 & 1<<6)
  VAR_133->flags2 |= VAR_27;
 FUNC_1(VAR_136, VAR_135, 0x9e);
 if (VAR_136 & 1<<3)
  VAR_133->flags2 |= VAR_43;
 if (VAR_136 & (1 << 5))
  VAR_133->flags2 |= VAR_14;
 FUNC_1(VAR_133->max_icm_sz, VAR_135,
   0xa0);
 if (VAR_133->flags & VAR_44)
  FUNC_1(VAR_133->max_counters, VAR_135,
    0x68);

 FUNC_1(VAR_137, VAR_135,
   0xb0);
 if (VAR_137 & (1 << 0))
  VAR_133->flags2 |= VAR_20;

 FUNC_1(VAR_133->dmfs_high_rate_qpn_base, VAR_135,
   0xa8);
 VAR_133->dmfs_high_rate_qpn_base &= VAR_0;
 FUNC_1(VAR_133->dmfs_high_rate_qpn_range, VAR_135,
   0xac);
 VAR_133->dmfs_high_rate_qpn_range &= VAR_0;

 FUNC_1(VAR_140, VAR_135, 0xcc);
 VAR_133->rl_caps.num_rates = VAR_140;
 if (VAR_133->rl_caps.num_rates) {
  VAR_133->flags2 |= VAR_26;
  FUNC_1(VAR_140, VAR_135, 0xd0);
  VAR_133->rl_caps.max_val = VAR_140 & 0xfff;
  VAR_133->rl_caps.max_unit = VAR_140 >> 14;
  FUNC_1(VAR_140, VAR_135, 0xd2);
  VAR_133->rl_caps.min_val = VAR_140 & 0xfff;
  VAR_133->rl_caps.min_unit = VAR_140 >> 14;
 }

 FUNC_1(VAR_133->health_buffer_addrs, VAR_135,
   0xe4);

 FUNC_1(VAR_137, VAR_135, 0x70);
 if (VAR_137 & (1 << 16))
  VAR_133->flags2 |= VAR_39;
 if (VAR_137 & (1 << 18))
  VAR_133->flags2 |= VAR_40;
 if (VAR_137 & (1 << 19))
  VAR_133->flags2 |= VAR_19;
 if (VAR_137 & (1 << 26))
  VAR_133->flags2 |= VAR_42;
 if (VAR_137 & (1 << 20))
  VAR_133->flags2 |= VAR_16;
 if (VAR_137 & (1 << 21))
  VAR_133->flags2 |= VAR_4;
 if (VAR_137 & (1 << 23))
  VAR_133->flags2 |= VAR_36;

 for (VAR_143 = 1; VAR_143 <= VAR_133->num_ports; VAR_143++) {
  VAR_142 = FUNC_5(VAR_132, VAR_143, VAR_133->port_cap + VAR_143);
  if (VAR_142)
   goto out;
 }






 if (VAR_133->num_sys_eqs == 0)
  VAR_133->reserved_eqs = FUNC_4(VAR_133->reserved_uars * 4,
         VAR_133->reserved_eqs);
 else
  VAR_133->flags2 |= VAR_37;

out:
 FUNC_8(VAR_132, VAR_134);
 return VAR_142;
}
