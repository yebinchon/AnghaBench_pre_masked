
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct lpfc_hba {int lpfc_scsi_cmd_iocb_cmpl; int lpfc_rampdown_queue_depth; int lpfc_get_scsi_buf; int lpfc_release_scsi_buf; int lpfc_bg_scsi_prep_dma_buf; int lpfc_scsi_prep_dma_buf; int lpfc_scsi_prep_cmnd; int lpfc_scsi_unprep_dma_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct lpfc_hba*,int ,int ,char*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;

int
FUNC_1(struct lpfc_hba *VAR_15, uint8_t VAR_16)
{

 VAR_15->lpfc_scsi_unprep_dma_buf = VAR_14;
 VAR_15->lpfc_scsi_prep_cmnd = VAR_11;

 switch (VAR_16) {
 case 129:
  VAR_15->lpfc_scsi_prep_dma_buf = VAR_12;
  VAR_15->lpfc_bg_scsi_prep_dma_buf = VAR_3;
  VAR_15->lpfc_release_scsi_buf = VAR_8;
  VAR_15->lpfc_get_scsi_buf = VAR_5;
  break;
 case 128:
  VAR_15->lpfc_scsi_prep_dma_buf = VAR_13;
  VAR_15->lpfc_bg_scsi_prep_dma_buf = VAR_4;
  VAR_15->lpfc_release_scsi_buf = VAR_9;
  VAR_15->lpfc_get_scsi_buf = VAR_6;
  break;
 default:
  FUNC_0(VAR_15, VAR_1, VAR_2,
    "1418 Invalid HBA PCI-device group: 0x%x\n",
    VAR_16);
  return -VAR_0;
  break;
 }
 VAR_15->lpfc_rampdown_queue_depth = VAR_7;
 VAR_15->lpfc_scsi_cmd_iocb_cmpl = VAR_10;
 return 0;
}
