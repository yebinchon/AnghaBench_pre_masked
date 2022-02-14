
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct qed_tlv_parsed_buf {int * p_val; } ;
struct qed_mfw_tlv_time {int dummy; } ;
struct qed_mfw_tlv_fcoe {struct qed_mfw_tlv_time* scsi_chk_tstamp; int * scsi_rx_chk; int * scsi_rx_chk_set; int scsi_tsk_abort; int scsi_tsk_abort_set; int scsi_aca_active; int scsi_aca_active_set; int scsi_tsk_full; int scsi_tsk_full_set; int scsi_rsv_conflicts; int scsi_rsv_conflicts_set; int scsi_inter_cond_met; int scsi_inter_cond_met_set; int scsi_inter; int scsi_inter_set; int scsi_busy; int scsi_busy_set; int scsi_cond_met; int scsi_cond_met_set; int scsi_chks; int scsi_chks_set; int eofni; int eofni_set; int eofa; int eofa_set; int rx_lip; int rx_lip_set; int tx_lip; int tx_lip_set; int lrr; int lrr_set; int lr; int lr_set; int ols; int ols_set; int rx_nos; int rx_nos_set; int tx_nos; int tx_nos_set; int tx_tprlos; int tx_tprlos_set; int abort_task_sets; int abort_task_sets_set; int tx_lun_rst; int tx_lun_rst_set; int * rx_rscn_nport; int * rx_rscn_nport_set; int rx_rscn; int rx_rscn_set; struct qed_mfw_tlv_time* abts_tstamp; int * abts_dst_fcid; int * abts_dst_fcid_set; int rx_abts_rjt; int rx_abts_rjt_set; int rx_abts_acc; int rx_abts_acc_set; int tx_abts; int tx_abts_set; int rx_accs; int rx_accs_set; int tx_prlis; int tx_prlis_set; int tx_accs; int tx_accs_set; int rx_logos; int rx_logos_set; struct qed_mfw_tlv_time* plogo_tstamp; int * plogo_src_fcid; int * plogo_src_fcid_set; int plogo_rjt; int plogo_rjt_set; int plogo_acc; int plogo_acc_set; int tx_plogos; int tx_plogos_set; struct qed_mfw_tlv_time* plogi_acc_tstamp; int * plogi_acc_src_fcid; int * plogi_acc_src_fcid_set; struct qed_mfw_tlv_time* plogi_tstamp; int * plogi_dst_fcid; int * plogi_dst_fcid_set; int plogi_rjt; int plogi_rjt_set; int plogi_acc; int plogi_acc_set; int plogi; int plogi_set; int fdisc_rjt; int fdisc_rjt_set; int fdisc_acc; int fdisc_acc_set; int fdiscs; int fdiscs_set; struct qed_mfw_tlv_time flogi_rjt_tstamp; int flogi_rjt; int flogi_rjt_set; struct qed_mfw_tlv_time flogi_acc_tstamp; int * flogi_acc_param; int * flogi_acc_param_set; struct qed_mfw_tlv_time flogi_tstamp; int * flogi_param; int * flogi_param_set; int code_violation_err; int code_violation_err_set; int disparity_err; int disparity_err_set; int primtive_err; int primtive_err_set; int losig_err; int losig_err_set; int losync_err; int losync_err_set; struct qed_mfw_tlv_time* crc_err; int * crc_err_src_fcid; int * crc_err_src_fcid_set; int crc_count; int crc_count_set; int fcoe_tx_bytes; int fcoe_tx_bytes_set; int fcoe_tx_frames; int fcoe_tx_frames_set; int fcoe_rx_bytes; int fcoe_rx_bytes_set; int fcoe_rx_frames; int fcoe_rx_frames_set; int fcoe_rxq_depth; int fcoe_rxq_depth_set; int fcoe_txq_depth; int fcoe_txq_depth_set; int tx_bcast; int tx_bcast_set; int rx_bcast; int rx_bcast_set; int fcoe_boot_progress; int fcoe_boot_progress_set; int link_failures; int link_failures_set; int fip_rx_descr_size; int fip_rx_descr_size_set; int fip_tx_descr_size; int fip_tx_descr_size_set; int port_state; int port_state_set; int port_alias; int port_alias_set; int qos_pri; int qos_pri_set; int switch_fw_version; int switch_fw_version_set; int switch_model; int switch_model_set; int vendor_name; int vendor_name_set; int switch_portid; int switch_portid_set; int switch_portnum; int switch_portnum_set; int switch_name; int switch_name_set; int num_npiv_ids; int num_npiv_ids_set; int npiv_state; int npiv_state_set; int boot_type; int boot_type_set; int cr_tov; int cr_tov_set; int ed_tov; int ed_tov_set; int ra_tov; int ra_tov_set; int rt_tov; int rt_tov_set; int scsi_timeout; int scsi_timeout_set; } ;
struct qed_drv_tlv_hdr {int tlv_type; } ;
 int FUNC_0 (struct qed_mfw_tlv_time*,struct qed_tlv_parsed_buf*) ;

__attribute__((used)) static int
FUNC_1(struct qed_drv_tlv_hdr *VAR_0,
      struct qed_mfw_tlv_fcoe *VAR_1,
      struct qed_tlv_parsed_buf *VAR_2)
{
 struct qed_mfw_tlv_time *VAR_3;
 u8 VAR_4;

 switch (VAR_0->tlv_type) {
 case 136:
  if (VAR_1->scsi_timeout_set) {
   VAR_2->p_val = &VAR_1->scsi_timeout;
   return sizeof(VAR_1->scsi_timeout);
  }
  break;
 case 156:
  if (VAR_1->rt_tov_set) {
   VAR_2->p_val = &VAR_1->rt_tov;
   return sizeof(VAR_1->rt_tov);
  }
  break;
 case 157:
  if (VAR_1->ra_tov_set) {
   VAR_2->p_val = &VAR_1->ra_tov;
   return sizeof(VAR_1->ra_tov);
  }
  break;
 case 243:
  if (VAR_1->ed_tov_set) {
   VAR_2->p_val = &VAR_1->ed_tov;
   return sizeof(VAR_1->ed_tov);
  }
  break;
 case 247:
  if (VAR_1->cr_tov_set) {
   VAR_2->p_val = &VAR_1->cr_tov;
   return sizeof(VAR_1->cr_tov);
  }
  break;
 case 260:
  if (VAR_1->boot_type_set) {
   VAR_2->p_val = &VAR_1->boot_type;
   return sizeof(VAR_1->boot_type);
  }
  break;
 case 190:
  if (VAR_1->npiv_state_set) {
   VAR_2->p_val = &VAR_1->npiv_state;
   return sizeof(VAR_1->npiv_state);
  }
  break;
 case 189:
  if (VAR_1->num_npiv_ids_set) {
   VAR_2->p_val = &VAR_1->num_npiv_ids;
   return sizeof(VAR_1->num_npiv_ids);
  }
  break;
 case 133:
  if (VAR_1->switch_name_set) {
   VAR_2->p_val = &VAR_1->switch_name;
   return sizeof(VAR_1->switch_name);
  }
  break;
 case 131:
  if (VAR_1->switch_portnum_set) {
   VAR_2->p_val = &VAR_1->switch_portnum;
   return sizeof(VAR_1->switch_portnum);
  }
  break;
 case 132:
  if (VAR_1->switch_portid_set) {
   VAR_2->p_val = &VAR_1->switch_portid;
   return sizeof(VAR_1->switch_portid);
  }
  break;
 case 128:
  if (VAR_1->vendor_name_set) {
   VAR_2->p_val = &VAR_1->vendor_name;
   return sizeof(VAR_1->vendor_name);
  }
  break;
 case 134:
  if (VAR_1->switch_model_set) {
   VAR_2->p_val = &VAR_1->switch_model;
   return sizeof(VAR_1->switch_model);
  }
  break;
 case 135:
  if (VAR_1->switch_fw_version_set) {
   VAR_2->p_val = &VAR_1->switch_fw_version;
   return sizeof(VAR_1->switch_fw_version);
  }
  break;
 case 160:
  if (VAR_1->qos_pri_set) {
   VAR_2->p_val = &VAR_1->qos_pri;
   return sizeof(VAR_1->qos_pri);
  }
  break;
 case 164:
  if (VAR_1->port_alias_set) {
   VAR_2->p_val = &VAR_1->port_alias;
   return sizeof(VAR_1->port_alias);
  }
  break;
 case 163:
  if (VAR_1->port_state_set) {
   VAR_2->p_val = &VAR_1->port_state;
   return sizeof(VAR_1->port_state);
  }
  break;
 case 231:
  if (VAR_1->fip_tx_descr_size_set) {
   VAR_2->p_val = &VAR_1->fip_tx_descr_size;
   return sizeof(VAR_1->fip_tx_descr_size);
  }
  break;
 case 239:
  if (VAR_1->fip_rx_descr_size_set) {
   VAR_2->p_val = &VAR_1->fip_rx_descr_size;
   return sizeof(VAR_1->fip_rx_descr_size);
  }
  break;
 case 214:
  if (VAR_1->link_failures_set) {
   VAR_2->p_val = &VAR_1->link_failures;
   return sizeof(VAR_1->link_failures);
  }
  break;
 case 242:
  if (VAR_1->fcoe_boot_progress_set) {
   VAR_2->p_val = &VAR_1->fcoe_boot_progress;
   return sizeof(VAR_1->fcoe_boot_progress);
  }
  break;
 case 158:
  if (VAR_1->rx_bcast_set) {
   VAR_2->p_val = &VAR_1->rx_bcast;
   return sizeof(VAR_1->rx_bcast);
  }
  break;
 case 129:
  if (VAR_1->tx_bcast_set) {
   VAR_2->p_val = &VAR_1->tx_bcast;
   return sizeof(VAR_1->tx_bcast);
  }
  break;
 case 236:
  if (VAR_1->fcoe_txq_depth_set) {
   VAR_2->p_val = &VAR_1->fcoe_txq_depth;
   return sizeof(VAR_1->fcoe_txq_depth);
  }
  break;
 case 240:
  if (VAR_1->fcoe_rxq_depth_set) {
   VAR_2->p_val = &VAR_1->fcoe_rxq_depth;
   return sizeof(VAR_1->fcoe_rxq_depth);
  }
  break;
 case 238:
  if (VAR_1->fcoe_rx_frames_set) {
   VAR_2->p_val = &VAR_1->fcoe_rx_frames;
   return sizeof(VAR_1->fcoe_rx_frames);
  }
  break;
 case 241:
  if (VAR_1->fcoe_rx_bytes_set) {
   VAR_2->p_val = &VAR_1->fcoe_rx_bytes;
   return sizeof(VAR_1->fcoe_rx_bytes);
  }
  break;
 case 235:
  if (VAR_1->fcoe_tx_frames_set) {
   VAR_2->p_val = &VAR_1->fcoe_tx_frames;
   return sizeof(VAR_1->fcoe_tx_frames);
  }
  break;
 case 237:
  if (VAR_1->fcoe_tx_bytes_set) {
   VAR_2->p_val = &VAR_1->fcoe_tx_bytes;
   return sizeof(VAR_1->fcoe_tx_bytes);
  }
  break;
 case 248:
  if (VAR_1->crc_count_set) {
   VAR_2->p_val = &VAR_1->crc_count;
   return sizeof(VAR_1->crc_count);
  }
  break;
 case 258:
 case 256:
 case 254:
 case 252:
 case 250:
  VAR_4 = (VAR_0->tlv_type -
         258) / 2;

  if (VAR_1->crc_err_src_fcid_set[VAR_4]) {
   VAR_2->p_val = &VAR_1->crc_err_src_fcid[VAR_4];
   return sizeof(VAR_1->crc_err_src_fcid[VAR_4]);
  }
  break;
 case 257:
 case 255:
 case 253:
 case 251:
 case 249:
  VAR_4 = (VAR_0->tlv_type - 257) / 2;

  return FUNC_0(&VAR_1->crc_err[VAR_4],
        VAR_2);
 case 196:
  if (VAR_1->losync_err_set) {
   VAR_2->p_val = &VAR_1->losync_err;
   return sizeof(VAR_1->losync_err);
  }
  break;
 case 197:
  if (VAR_1->losig_err_set) {
   VAR_2->p_val = &VAR_1->losig_err;
   return sizeof(VAR_1->losig_err);
  }
  break;
 case 162:
  if (VAR_1->primtive_err_set) {
   VAR_2->p_val = &VAR_1->primtive_err;
   return sizeof(VAR_1->primtive_err);
  }
  break;
 case 246:
  if (VAR_1->disparity_err_set) {
   VAR_2->p_val = &VAR_1->disparity_err;
   return sizeof(VAR_1->disparity_err);
  }
  break;
 case 259:
  if (VAR_1->code_violation_err_set) {
   VAR_2->p_val = &VAR_1->code_violation_err;
   return sizeof(VAR_1->code_violation_err);
  }
  break;
 case 225:
 case 224:
 case 223:
 case 222:
  VAR_4 = VAR_0->tlv_type -
   225;
  if (VAR_1->flogi_param_set[VAR_4]) {
   VAR_2->p_val = &VAR_1->flogi_param[VAR_4];
   return sizeof(VAR_1->flogi_param[VAR_4]);
  }
  break;
 case 219:
  return FUNC_0(&VAR_1->flogi_tstamp,
        VAR_2);
 case 230:
 case 229:
 case 228:
 case 227:
  VAR_4 = VAR_0->tlv_type -
   230;

  if (VAR_1->flogi_acc_param_set[VAR_4]) {
   VAR_2->p_val = &VAR_1->flogi_acc_param[VAR_4];
   return sizeof(VAR_1->flogi_acc_param[VAR_4]);
  }
  break;
 case 226:
  return FUNC_0(&VAR_1->flogi_acc_tstamp,
        VAR_2);
 case 221:
  if (VAR_1->flogi_rjt_set) {
   VAR_2->p_val = &VAR_1->flogi_rjt;
   return sizeof(VAR_1->flogi_rjt);
  }
  break;
 case 220:
  return FUNC_0(&VAR_1->flogi_rjt_tstamp,
        VAR_2);
 case 234:
  if (VAR_1->fdiscs_set) {
   VAR_2->p_val = &VAR_1->fdiscs;
   return sizeof(VAR_1->fdiscs);
  }
  break;
 case 233:
  if (VAR_1->fdisc_acc_set) {
   VAR_2->p_val = &VAR_1->fdisc_acc;
   return sizeof(VAR_1->fdisc_acc);
  }
  break;
 case 232:
  if (VAR_1->fdisc_rjt_set) {
   VAR_2->p_val = &VAR_1->fdisc_rjt;
   return sizeof(VAR_1->fdisc_rjt);
  }
  break;
 case 165:
  if (VAR_1->plogi_set) {
   VAR_2->p_val = &VAR_1->plogi;
   return sizeof(VAR_1->plogi);
  }
  break;
 case 167:
  if (VAR_1->plogi_acc_set) {
   VAR_2->p_val = &VAR_1->plogi_acc;
   return sizeof(VAR_1->plogi_acc);
  }
  break;
 case 166:
  if (VAR_1->plogi_rjt_set) {
   VAR_2->p_val = &VAR_1->plogi_rjt;
   return sizeof(VAR_1->plogi_rjt);
  }
  break;
 case 185:
 case 181:
 case 177:
 case 173:
 case 169:
  VAR_4 = (VAR_0->tlv_type -
         185) / 2;

  if (VAR_1->plogi_dst_fcid_set[VAR_4]) {
   VAR_2->p_val = &VAR_1->plogi_dst_fcid[VAR_4];
   return sizeof(VAR_1->plogi_dst_fcid[VAR_4]);
  }
  break;
 case 184:
 case 180:
 case 176:
 case 172:
 case 168:
  VAR_4 = (VAR_0->tlv_type - 184) / 2;

  return FUNC_0(&VAR_1->plogi_tstamp[VAR_4],
        VAR_2);
 case 187:
 case 183:
 case 179:
 case 175:
 case 171:
  VAR_4 = (VAR_0->tlv_type -
         187) / 2;

  if (VAR_1->plogi_acc_src_fcid_set[VAR_4]) {
   VAR_2->p_val = &VAR_1->plogi_acc_src_fcid[VAR_4];
   return sizeof(VAR_1->plogi_acc_src_fcid[VAR_4]);
  }
  break;
 case 186:
 case 182:
 case 178:
 case 174:
 case 170:
  VAR_4 = (VAR_0->tlv_type - 186) / 2;
  VAR_3 = &VAR_1->plogi_acc_tstamp[VAR_4];

  return FUNC_0(VAR_3, VAR_2);
 case 211:
  if (VAR_1->tx_plogos_set) {
   VAR_2->p_val = &VAR_1->tx_plogos;
   return sizeof(VAR_1->tx_plogos);
  }
  break;
 case 199:
  if (VAR_1->plogo_acc_set) {
   VAR_2->p_val = &VAR_1->plogo_acc;
   return sizeof(VAR_1->plogo_acc);
  }
  break;
 case 198:
  if (VAR_1->plogo_rjt_set) {
   VAR_2->p_val = &VAR_1->plogo_rjt;
   return sizeof(VAR_1->plogo_rjt);
  }
  break;
 case 209:
 case 207:
 case 205:
 case 203:
 case 201:
  VAR_4 = (VAR_0->tlv_type - 209) /
   2;

  if (VAR_1->plogo_src_fcid_set[VAR_4]) {
   VAR_2->p_val = &VAR_1->plogo_src_fcid[VAR_4];
   return sizeof(VAR_1->plogo_src_fcid[VAR_4]);
  }
  break;
 case 208:
 case 206:
 case 204:
 case 202:
 case 200:
  VAR_4 = (VAR_0->tlv_type - 208) / 2;

  return FUNC_0(&VAR_1->plogo_tstamp[VAR_4],
        VAR_2);
 case 210:
  if (VAR_1->rx_logos_set) {
   VAR_2->p_val = &VAR_1->rx_logos;
   return sizeof(VAR_1->rx_logos);
  }
  break;
 case 262:
  if (VAR_1->tx_accs_set) {
   VAR_2->p_val = &VAR_1->tx_accs;
   return sizeof(VAR_1->tx_accs);
  }
  break;
 case 161:
  if (VAR_1->tx_prlis_set) {
   VAR_2->p_val = &VAR_1->tx_prlis;
   return sizeof(VAR_1->tx_prlis);
  }
  break;
 case 261:
  if (VAR_1->rx_accs_set) {
   VAR_2->p_val = &VAR_1->rx_accs;
   return sizeof(VAR_1->rx_accs);
  }
  break;
 case 263:
  if (VAR_1->tx_abts_set) {
   VAR_2->p_val = &VAR_1->tx_abts;
   return sizeof(VAR_1->tx_abts);
  }
  break;
 case 265:
  if (VAR_1->rx_abts_acc_set) {
   VAR_2->p_val = &VAR_1->rx_abts_acc;
   return sizeof(VAR_1->rx_abts_acc);
  }
  break;
 case 264:
  if (VAR_1->rx_abts_rjt_set) {
   VAR_2->p_val = &VAR_1->rx_abts_rjt;
   return sizeof(VAR_1->rx_abts_rjt);
  }
  break;
 case 275:
 case 273:
 case 271:
 case 269:
 case 267:
  VAR_4 = (VAR_0->tlv_type -
         275) / 2;

  if (VAR_1->abts_dst_fcid_set[VAR_4]) {
   VAR_2->p_val = &VAR_1->abts_dst_fcid[VAR_4];
   return sizeof(VAR_1->abts_dst_fcid[VAR_4]);
  }
  break;
 case 274:
 case 272:
 case 270:
 case 268:
 case 266:
  VAR_4 = (VAR_0->tlv_type - 274) / 2;

  return FUNC_0(&VAR_1->abts_tstamp[VAR_4],
        VAR_2);
 case 159:
  if (VAR_1->rx_rscn_set) {
   VAR_2->p_val = &VAR_1->rx_rscn;
   return sizeof(VAR_1->rx_rscn);
  }
  break;
 case 218:
 case 217:
 case 216:
 case 215:
  VAR_4 = VAR_0->tlv_type - 218;

  if (VAR_1->rx_rscn_nport_set[VAR_4]) {
   VAR_2->p_val = &VAR_1->rx_rscn_nport[VAR_4];
   return sizeof(VAR_1->rx_rscn_nport[VAR_4]);
  }
  break;
 case 193:
  if (VAR_1->tx_lun_rst_set) {
   VAR_2->p_val = &VAR_1->tx_lun_rst;
   return sizeof(VAR_1->tx_lun_rst);
  }
  break;
 case 276:
  if (VAR_1->abort_task_sets_set) {
   VAR_2->p_val = &VAR_1->abort_task_sets;
   return sizeof(VAR_1->abort_task_sets);
  }
  break;
 case 130:
  if (VAR_1->tx_tprlos_set) {
   VAR_2->p_val = &VAR_1->tx_tprlos;
   return sizeof(VAR_1->tx_tprlos);
  }
  break;
 case 191:
  if (VAR_1->tx_nos_set) {
   VAR_2->p_val = &VAR_1->tx_nos;
   return sizeof(VAR_1->tx_nos);
  }
  break;
 case 192:
  if (VAR_1->rx_nos_set) {
   VAR_2->p_val = &VAR_1->rx_nos;
   return sizeof(VAR_1->rx_nos);
  }
  break;
 case 188:
  if (VAR_1->ols_set) {
   VAR_2->p_val = &VAR_1->ols;
   return sizeof(VAR_1->ols);
  }
  break;
 case 194:
  if (VAR_1->lr_set) {
   VAR_2->p_val = &VAR_1->lr;
   return sizeof(VAR_1->lr);
  }
  break;
 case 195:
  if (VAR_1->lrr_set) {
   VAR_2->p_val = &VAR_1->lrr;
   return sizeof(VAR_1->lrr);
  }
  break;
 case 212:
  if (VAR_1->tx_lip_set) {
   VAR_2->p_val = &VAR_1->tx_lip;
   return sizeof(VAR_1->tx_lip);
  }
  break;
 case 213:
  if (VAR_1->rx_lip_set) {
   VAR_2->p_val = &VAR_1->rx_lip;
   return sizeof(VAR_1->rx_lip);
  }
  break;
 case 245:
  if (VAR_1->eofa_set) {
   VAR_2->p_val = &VAR_1->eofa;
   return sizeof(VAR_1->eofa);
  }
  break;
 case 244:
  if (VAR_1->eofni_set) {
   VAR_2->p_val = &VAR_1->eofni;
   return sizeof(VAR_1->eofni);
  }
  break;
 case 143:
  if (VAR_1->scsi_chks_set) {
   VAR_2->p_val = &VAR_1->scsi_chks;
   return sizeof(VAR_1->scsi_chks);
  }
  break;
 case 142:
  if (VAR_1->scsi_cond_met_set) {
   VAR_2->p_val = &VAR_1->scsi_cond_met;
   return sizeof(VAR_1->scsi_cond_met);
  }
  break;
 case 144:
  if (VAR_1->scsi_busy_set) {
   VAR_2->p_val = &VAR_1->scsi_busy;
   return sizeof(VAR_1->scsi_busy);
  }
  break;
 case 140:
  if (VAR_1->scsi_inter_set) {
   VAR_2->p_val = &VAR_1->scsi_inter;
   return sizeof(VAR_1->scsi_inter);
  }
  break;
 case 141:
  if (VAR_1->scsi_inter_cond_met_set) {
   VAR_2->p_val = &VAR_1->scsi_inter_cond_met;
   return sizeof(VAR_1->scsi_inter_cond_met);
  }
  break;
 case 139:
  if (VAR_1->scsi_rsv_conflicts_set) {
   VAR_2->p_val = &VAR_1->scsi_rsv_conflicts;
   return sizeof(VAR_1->scsi_rsv_conflicts);
  }
  break;
 case 137:
  if (VAR_1->scsi_tsk_full_set) {
   VAR_2->p_val = &VAR_1->scsi_tsk_full;
   return sizeof(VAR_1->scsi_tsk_full);
  }
  break;
 case 145:
  if (VAR_1->scsi_aca_active_set) {
   VAR_2->p_val = &VAR_1->scsi_aca_active;
   return sizeof(VAR_1->scsi_aca_active);
  }
  break;
 case 138:
  if (VAR_1->scsi_tsk_abort_set) {
   VAR_2->p_val = &VAR_1->scsi_tsk_abort;
   return sizeof(VAR_1->scsi_tsk_abort);
  }
  break;
 case 150:
 case 149:
 case 148:
 case 147:
 case 146:
  VAR_4 = (VAR_0->tlv_type -
         150) / 2;

  if (VAR_1->scsi_rx_chk_set[VAR_4]) {
   VAR_2->p_val = &VAR_1->scsi_rx_chk[VAR_4];
   return sizeof(VAR_1->scsi_rx_chk[VAR_4]);
  }
  break;
 case 155:
 case 154:
 case 153:
 case 152:
 case 151:
  VAR_4 = (VAR_0->tlv_type - 155) / 2;
  VAR_3 = &VAR_1->scsi_chk_tstamp[VAR_4];

  return FUNC_0(VAR_3, VAR_2);
 default:
  break;
 }

 return -1;
}
