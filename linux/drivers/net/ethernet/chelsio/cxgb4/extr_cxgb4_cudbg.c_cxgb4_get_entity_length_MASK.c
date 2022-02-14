
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
typedef int t6_up_cim_reg_array ;
typedef int t6_tp_tm_pio_array ;
typedef int t6_tp_pio_array ;
typedef int t6_tp_mib_index_array ;
typedef int t6_ma_ireg_array ;
typedef int t6_hma_ireg_array ;
typedef int t5_up_cim_reg_array ;
typedef int t5_tp_tm_pio_array ;
typedef int t5_tp_pio_array ;
typedef int t5_tp_mib_index_array ;
typedef int t5_pm_rx_array ;
typedef int t5_pcie_pdbg_array ;
struct sge_qbase_reg_field {int dummy; } ;
struct ireg_buf {int dummy; } ;
struct cudbg_vpd_data {int dummy; } ;
struct cudbg_ver_hdr {int dummy; } ;
struct cudbg_ulptx_la {int dummy; } ;
struct cudbg_ulprx_la {int dummy; } ;
struct cudbg_tp_la {int dummy; } ;
struct cudbg_tid_info_region_rev1 {int dummy; } ;
struct cudbg_tid_data {int dummy; } ;
struct cudbg_tcam {int max_tid; int member_0; } ;
struct cudbg_rss_vf_conf {int dummy; } ;
struct cudbg_pm_stats {int dummy; } ;
struct cudbg_pbt_tables {int dummy; } ;
struct cudbg_mps_tcam {int dummy; } ;
struct cudbg_meminfo {int dummy; } ;
struct cudbg_mbox_log {int dummy; } ;
struct cudbg_hw_sched {int dummy; } ;
struct cudbg_clk_info {int dummy; } ;
struct cudbg_cim_qcfg {int dummy; } ;
struct cudbg_cim_pif_la {int dummy; } ;
struct TYPE_8__ {int vfcount; int mps_tcam_size; } ;
struct TYPE_6__ {int size; } ;
struct TYPE_7__ {int cim_la_size; int chip; TYPE_4__ arch; TYPE_2__ devlog; } ;
struct adapter {TYPE_3__ params; TYPE_1__* mbox_log; } ;
struct TYPE_5__ {int size; } ;


 int const FUNC_0 (int ) ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int VAR_6 ;
 int FUNC_3 (int) ;
 int VAR_7 ;
 int FUNC_4 (int) ;
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
 int FUNC_5 (struct adapter*,int) ;
 int FUNC_6 (struct adapter*) ;
 int FUNC_7 (struct adapter*,struct cudbg_tcam*) ;
 int FUNC_8 (struct adapter*,int *,int*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct adapter*) ;
 int FUNC_13 (struct adapter*,int ) ;

__attribute__((used)) static u32 FUNC_14(struct adapter *VAR_20, u32 VAR_21)
{
 struct cudbg_tcam VAR_22 = { 0 };
 u32 VAR_23, VAR_24 = 0, VAR_25 = 0;

 switch (VAR_21) {
 case 138:
  switch (FUNC_0(VAR_20->params.chip)) {
  case 182:
   VAR_25 = VAR_17;
   break;
  case 181:
  case 180:
   VAR_25 = VAR_18;
   break;
  default:
   break;
  }
  break;
 case 159:
  VAR_25 = VAR_20->params.devlog.size;
  break;
 case 172:
  if (FUNC_11(VAR_20->params.chip)) {
   VAR_25 = VAR_20->params.cim_la_size / 10 + 1;
   VAR_25 *= 10 * sizeof(u32);
  } else {
   VAR_25 = VAR_20->params.cim_la_size / 8;
   VAR_25 *= 8 * sizeof(u32);
  }
  VAR_25 += sizeof(u32);
  break;
 case 171:
  VAR_25 = 2 * VAR_1 * 5 * sizeof(u32);
  break;
 case 161:
  VAR_25 = sizeof(struct cudbg_cim_qcfg);
  break;
 case 175:
 case 174:
 case 173:
 case 177:
 case 176:
 case 178:
  VAR_25 = VAR_0 * 4 * sizeof(u32);
  break;
 case 166:
  VAR_25 = FUNC_5(VAR_20, 0);
  break;
 case 165:
  VAR_25 = FUNC_5(VAR_20, 1);
  break;
 case 164:
  VAR_25 = FUNC_5(VAR_20, 2);
  break;
 case 163:
  VAR_25 = FUNC_5(VAR_20, 3);
  break;
 case 167:
  VAR_25 = FUNC_5(VAR_20, 4);
  break;
 case 170:
  VAR_25 = FUNC_5(VAR_20, 5);
  break;
 case 169:
  VAR_25 = FUNC_5(VAR_20, 6);
  break;
 case 168:
  VAR_25 = FUNC_5(VAR_20, 7);
  break;
 case 157:
  VAR_23 = FUNC_13(VAR_20, VAR_14);
  if (VAR_23 & VAR_4) {
   VAR_23 = FUNC_13(VAR_20, VAR_10);
   VAR_25 = FUNC_1(VAR_23);
  }
  VAR_25 = FUNC_9(VAR_25);
  break;
 case 156:
  VAR_23 = FUNC_13(VAR_20, VAR_14);
  if (VAR_23 & VAR_5) {
   VAR_23 = FUNC_13(VAR_20, VAR_11);
   VAR_25 = FUNC_2(VAR_23);
  }
  VAR_25 = FUNC_9(VAR_25);
  break;
 case 149:
  VAR_23 = FUNC_13(VAR_20, VAR_14);
  if (VAR_23 & VAR_6) {
   VAR_23 = FUNC_13(VAR_20, VAR_12);
   VAR_25 = FUNC_3(VAR_23);
  }
  VAR_25 = FUNC_9(VAR_25);
  break;
 case 148:
  VAR_23 = FUNC_13(VAR_20, VAR_14);
  if (VAR_23 & VAR_7) {
   VAR_23 = FUNC_13(VAR_20, VAR_13);
   VAR_25 = FUNC_4(VAR_23);
  }
  VAR_25 = FUNC_9(VAR_25);
  break;
 case 137:
  VAR_25 = FUNC_12(VAR_20) * sizeof(u16);
  break;
 case 136:
  VAR_25 = VAR_20->params.arch.vfcount *
        sizeof(struct cudbg_rss_vf_conf);
  break;
 case 145:
  VAR_25 = VAR_16 * sizeof(u16);
  break;
 case 140:
  VAR_25 = sizeof(struct cudbg_pm_stats);
  break;
 case 153:
  VAR_25 = sizeof(struct cudbg_hw_sched);
  break;
 case 133:
  switch (FUNC_0(VAR_20->params.chip)) {
  case 181:
   VAR_24 = sizeof(t5_tp_pio_array) +
       sizeof(t5_tp_tm_pio_array) +
       sizeof(t5_tp_mib_index_array);
   break;
  case 180:
   VAR_24 = sizeof(t6_tp_pio_array) +
       sizeof(t6_tp_tm_pio_array) +
       sizeof(t6_tp_mib_index_array);
   break;
  default:
   break;
  }
  VAR_24 = VAR_24 / (VAR_9 * sizeof(u32));
  VAR_25 = sizeof(struct ireg_buf) * VAR_24;
  break;
 case 135:
  VAR_25 = sizeof(struct ireg_buf) * 2 +
        sizeof(struct sge_qbase_reg_field);
  break;
 case 131:
  VAR_25 = sizeof(struct cudbg_ulprx_la);
  break;
 case 132:
  VAR_25 = sizeof(struct cudbg_tp_la) + VAR_19 * sizeof(u64);
  break;
 case 147:
  VAR_25 = sizeof(struct cudbg_ver_hdr) +
        sizeof(struct cudbg_meminfo);
  break;
 case 162:
  VAR_25 = sizeof(struct cudbg_cim_pif_la);
  VAR_25 += 2 * VAR_2 * 6 * sizeof(u32);
  break;
 case 160:
  VAR_25 = sizeof(struct cudbg_clk_info);
  break;
 case 142:
  VAR_24 = sizeof(t5_pcie_pdbg_array) / (VAR_9 * sizeof(u32));
  VAR_25 = sizeof(struct ireg_buf) * VAR_24 * 2;
  break;
 case 141:
  VAR_24 = sizeof(t5_pm_rx_array) / (VAR_9 * sizeof(u32));
  VAR_25 = sizeof(struct ireg_buf) * VAR_24 * 2;
  break;
 case 134:
  VAR_25 = sizeof(struct cudbg_tid_info_region_rev1);
  break;
 case 143:
  VAR_25 = sizeof(u32) * VAR_3;
  break;
 case 158:
  VAR_25 = FUNC_6(VAR_20);
  break;
 case 146:
  VAR_25 = sizeof(struct cudbg_mps_tcam) *
        VAR_20->params.arch.mps_tcam_size;
  break;
 case 128:
  VAR_25 = sizeof(struct cudbg_vpd_data);
  break;
 case 152:
  FUNC_7(VAR_20, &VAR_22);
  VAR_25 = sizeof(struct cudbg_tcam) +
        sizeof(struct cudbg_tid_data) * VAR_22.max_tid;
  break;
 case 179:
  VAR_25 = sizeof(u16) * VAR_16 * VAR_15;
  break;
 case 151:
  if (FUNC_0(VAR_20->params.chip) > 181) {
   VAR_24 = sizeof(t6_ma_ireg_array) /
       (VAR_9 * sizeof(u32));
   VAR_25 = sizeof(struct ireg_buf) * VAR_24 * 2;
  }
  break;
 case 130:
  VAR_25 = sizeof(struct cudbg_ver_hdr) +
        sizeof(struct cudbg_ulptx_la);
  break;
 case 129:
  VAR_24 = 0;
  if (FUNC_10(VAR_20->params.chip))
   VAR_24 = sizeof(t5_up_cim_reg_array) /
       ((VAR_9 + 1) * sizeof(u32));
  else if (FUNC_11(VAR_20->params.chip))
   VAR_24 = sizeof(t6_up_cim_reg_array) /
       ((VAR_9 + 1) * sizeof(u32));
  VAR_25 = sizeof(struct ireg_buf) * VAR_24;
  break;
 case 144:
  VAR_25 = sizeof(struct cudbg_pbt_tables);
  break;
 case 150:
  VAR_25 = sizeof(struct cudbg_mbox_log) * VAR_20->mbox_log->size;
  break;
 case 154:
  if (FUNC_0(VAR_20->params.chip) > 181) {
   VAR_24 = sizeof(t6_hma_ireg_array) /
       (VAR_9 * sizeof(u32));
   VAR_25 = sizeof(struct ireg_buf) * VAR_24;
  }
  break;
 case 155:
  VAR_23 = FUNC_13(VAR_20, VAR_14);
  if (VAR_23 & VAR_8) {



   VAR_23 = FUNC_13(VAR_20, VAR_13);
   VAR_25 = FUNC_4(VAR_23);
  }
  VAR_25 = FUNC_9(VAR_25);
  break;
 case 139:
  FUNC_8(VAR_20, ((void*)0), &VAR_25);
  break;
 default:
  break;
 }

 return VAR_25;
}
