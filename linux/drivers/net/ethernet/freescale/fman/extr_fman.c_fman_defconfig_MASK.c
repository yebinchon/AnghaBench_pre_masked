
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fman_cfg {int fm_ctl2_disp_tsh; int fm_ctl1_disp_tsh; int qmi_deq_disp_tsh; int qmi_enq_disp_tsh; int bmi_disp_tsh; int kg_disp_tsh; int plcr_disp_tsh; int prs_disp_tsh; int disp_limit_tsh; int dma_watchdog; int dma_sos_emergency; int dma_dbg_cnt_mode; int dma_cam_num_of_entries; int dma_cache_override; int dma_comm_qtsh_asrt_emer; int dma_comm_qtsh_clr_emer; int dma_aid_mode; int dma_err; int catastrophic_err; } ;


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
 int FUNC_0 (struct fman_cfg*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct fman_cfg *VAR_19)
{
 FUNC_0(VAR_19, 0, sizeof(struct fman_cfg));

 VAR_19->catastrophic_err = VAR_3;
 VAR_19->dma_err = VAR_9;
 VAR_19->dma_aid_mode = VAR_0;
 VAR_19->dma_comm_qtsh_clr_emer = VAR_7;
 VAR_19->dma_comm_qtsh_asrt_emer = VAR_6;
 VAR_19->dma_cache_override = VAR_2;
 VAR_19->dma_cam_num_of_entries = VAR_5;
 VAR_19->dma_dbg_cnt_mode = VAR_8;
 VAR_19->dma_sos_emergency = VAR_10;
 VAR_19->dma_watchdog = VAR_11;
 VAR_19->disp_limit_tsh = VAR_4;
 VAR_19->prs_disp_tsh = VAR_16;
 VAR_19->plcr_disp_tsh = VAR_15;
 VAR_19->kg_disp_tsh = VAR_14;
 VAR_19->bmi_disp_tsh = VAR_1;
 VAR_19->qmi_enq_disp_tsh = VAR_18;
 VAR_19->qmi_deq_disp_tsh = VAR_17;
 VAR_19->fm_ctl1_disp_tsh = VAR_12;
 VAR_19->fm_ctl2_disp_tsh = VAR_13;
}
