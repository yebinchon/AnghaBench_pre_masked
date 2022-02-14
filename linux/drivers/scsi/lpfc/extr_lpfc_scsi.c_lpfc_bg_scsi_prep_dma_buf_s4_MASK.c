
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct sli4_sge {int word2; } ;
struct scsi_cmnd {int sc_data_direction; TYPE_3__* device; } ;
struct lpfc_vport {int cfg_first_burst_size; } ;
struct TYPE_7__ {int fcpi_parm; int fcpi_XRdy; } ;
struct TYPE_8__ {TYPE_1__ fcpi; } ;
struct TYPE_12__ {TYPE_2__ un; } ;
struct TYPE_10__ {int iocb_flag; TYPE_6__ iocb; } ;
struct lpfc_io_buf {int seg_cnt; int prot_seg_cnt; TYPE_4__ cur_iocbq; scalar_t__ dma_sgl; struct fcp_cmnd* fcp_cmnd; struct scsi_cmnd* pCmd; } ;
struct lpfc_hba {int cfg_sg_seg_cnt; int cfg_total_seg_cnt; TYPE_5__* pcidev; scalar_t__ cfg_fof; int cfg_xpsgl; struct lpfc_vport* pport; } ;
struct lpfc_device_data {scalar_t__ oas_enabled; } ;
struct fcp_cmnd {int fcpDl; } ;
struct TYPE_11__ {int dev; } ;
struct TYPE_9__ {scalar_t__ hostdata; } ;
typedef TYPE_6__ IOCB_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,struct sli4_sge*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,scalar_t__,int) ;
 int FUNC_5 (int *,int ,scalar_t__,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct lpfc_hba*,struct lpfc_io_buf*) ;
 int FUNC_8 (struct lpfc_hba*,struct scsi_cmnd*,struct sli4_sge*,int,struct lpfc_io_buf*) ;
 int FUNC_9 (struct lpfc_hba*,struct scsi_cmnd*,struct sli4_sge*,int,int,struct lpfc_io_buf*) ;
 int FUNC_10 (struct lpfc_hba*,int ,int ,char*,int,...) ;
 int FUNC_11 (struct lpfc_hba*,struct scsi_cmnd*) ;
 int VAR_7 ;
 int FUNC_12 (struct scsi_cmnd*) ;
 int FUNC_13 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_14 (struct scsi_cmnd*) ;
 int FUNC_15 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_16 (struct scsi_cmnd*) ;
 int FUNC_17 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_18 (int) ;

__attribute__((used)) static int
FUNC_19(struct lpfc_hba *VAR_8,
  struct lpfc_io_buf *VAR_9)
{
 struct scsi_cmnd *VAR_10 = VAR_9->pCmd;
 struct fcp_cmnd *VAR_11 = VAR_9->fcp_cmnd;
 struct sli4_sge *VAR_12 = (struct sli4_sge *)(VAR_9->dma_sgl);
 IOCB_t *VAR_13 = &VAR_9->cur_iocbq.iocb;
 uint32_t VAR_14 = 0;
 int VAR_15, VAR_16, VAR_17 = VAR_10->sc_data_direction;
 int VAR_18 = 0;
 int VAR_19;
 int VAR_20 = 1;
 struct lpfc_vport *VAR_21 = VAR_8->pport;





 if (FUNC_16(VAR_10)) {






  VAR_15 = FUNC_4(&VAR_8->pcidev->dev,
     FUNC_17(VAR_10),
     FUNC_16(VAR_10), VAR_17);
  if (FUNC_18(!VAR_15))
   return 1;

  VAR_12 += 1;

  VAR_12->word2 = FUNC_6(VAR_12->word2);
  FUNC_2(VAR_7, VAR_12, 0);
  VAR_12->word2 = FUNC_3(VAR_12->word2);

  VAR_12 += 1;
  VAR_9->seg_cnt = VAR_15;


  if (VAR_9->seg_cnt > VAR_8->cfg_sg_seg_cnt &&
      !VAR_8->cfg_xpsgl) {
   FUNC_0(VAR_9->seg_cnt > VAR_8->cfg_sg_seg_cnt);
   VAR_20 = 2;
   goto err;
  }

  VAR_18 = FUNC_11(VAR_8, VAR_10);

  switch (VAR_18) {
  case 134:

   if (((VAR_9->seg_cnt + 1) >
     VAR_8->cfg_total_seg_cnt) &&
       !VAR_8->cfg_xpsgl) {
    VAR_20 = 2;
    goto err;
   }

   VAR_14 = FUNC_8(VAR_8, VAR_10, VAR_12,
     VAR_15, VAR_9);


   if (VAR_14 < 2) {
    VAR_20 = 2;
    goto err;
   }
   break;

  case 136:





   VAR_16 = FUNC_4(&VAR_8->pcidev->dev,
     FUNC_15(VAR_10),
     FUNC_14(VAR_10), VAR_17);
   if (FUNC_18(!VAR_16)) {
    FUNC_12(VAR_10);
    return 1;
   }

   VAR_9->prot_seg_cnt = VAR_16;




   if (((VAR_9->prot_seg_cnt * 3) >
     (VAR_8->cfg_total_seg_cnt - 2)) &&
       !VAR_8->cfg_xpsgl) {
    VAR_20 = 2;
    goto err;
   }

   VAR_14 = FUNC_9(VAR_8, VAR_10, VAR_12,
     VAR_15, VAR_16, VAR_9);


   if (VAR_14 < 3 ||
       (VAR_14 > VAR_8->cfg_total_seg_cnt &&
        !VAR_8->cfg_xpsgl)) {
    VAR_20 = 2;
    goto err;
   }
   break;

  case 135:
  default:
   FUNC_12(VAR_10);
   VAR_9->seg_cnt = 0;

   FUNC_10(VAR_8, VAR_0, VAR_1,
     "9083 Unexpected protection group %i\n",
     VAR_18);
   return 2;
  }
 }

 switch (FUNC_13(VAR_10)) {
 case 128:
 case 131:
  VAR_9->cur_iocbq.iocb_flag |= VAR_4;
  break;
 case 130:
 case 133:
  VAR_9->cur_iocbq.iocb_flag |= VAR_2;
  break;
 case 129:
 case 132:
  VAR_9->cur_iocbq.iocb_flag |= VAR_3;
  break;
 }

 VAR_19 = FUNC_7(VAR_8, VAR_9);
 VAR_11->fcpDl = FUNC_1(VAR_19);





 VAR_13->un.fcpi.fcpi_parm = VAR_19;





 if (VAR_13->un.fcpi.fcpi_XRdy &&
     (VAR_19 < VAR_21->cfg_first_burst_size))
  VAR_13->un.fcpi.fcpi_XRdy = VAR_19;





 if ((VAR_8->cfg_fof) && ((struct lpfc_device_data *)
  VAR_10->device->hostdata)->oas_enabled)
  VAR_9->cur_iocbq.iocb_flag |= (VAR_6 | VAR_5);

 return 0;
err:
 if (VAR_9->seg_cnt)
  FUNC_12(VAR_10);
 if (VAR_9->prot_seg_cnt)
  FUNC_5(&VAR_8->pcidev->dev, FUNC_15(VAR_10),
        FUNC_14(VAR_10),
        VAR_10->sc_data_direction);

 FUNC_10(VAR_8, VAR_0, VAR_1,
   "9084 Cannot setup S/G List for HBA"
   "IO segs %d/%d SGL %d SCSI %d: %d %d\n",
   VAR_9->seg_cnt, VAR_9->prot_seg_cnt,
   VAR_8->cfg_total_seg_cnt, VAR_8->cfg_sg_seg_cnt,
   VAR_18, VAR_14);

 VAR_9->seg_cnt = 0;
 VAR_9->prot_seg_cnt = 0;
 return VAR_20;
}
