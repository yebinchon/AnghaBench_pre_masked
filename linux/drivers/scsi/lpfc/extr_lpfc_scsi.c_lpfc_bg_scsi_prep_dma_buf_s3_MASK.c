
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct ulp_bde64 {int dummy; } ;
struct scsi_cmnd {int sc_data_direction; } ;
struct lpfc_vport {int cfg_first_burst_size; } ;
struct TYPE_11__ {int fcpi_parm; int fcpi_XRdy; } ;
struct TYPE_9__ {int bdeSize; } ;
struct TYPE_10__ {TYPE_2__ bdl; } ;
struct TYPE_12__ {TYPE_4__ fcpi; TYPE_3__ fcpi64; } ;
struct TYPE_14__ {int ulpBdeCount; int ulpLe; TYPE_5__ un; } ;
struct TYPE_8__ {TYPE_7__ iocb; } ;
struct lpfc_io_buf {int seg_cnt; int prot_seg_cnt; TYPE_1__ cur_iocbq; scalar_t__ dma_sgl; struct fcp_cmnd* fcp_cmnd; struct scsi_cmnd* pCmd; } ;
struct lpfc_hba {int cfg_sg_seg_cnt; int cfg_total_seg_cnt; TYPE_6__* pcidev; struct lpfc_vport* pport; } ;
struct fcp_cmnd {int fcpDl; } ;
struct TYPE_13__ {int dev; } ;
typedef TYPE_7__ IOCB_t ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ,scalar_t__,int) ;
 int FUNC_3 (int *,int ,scalar_t__,int) ;
 int FUNC_4 (struct lpfc_hba*,struct lpfc_io_buf*) ;
 int FUNC_5 (struct lpfc_hba*,struct scsi_cmnd*,struct ulp_bde64*,int) ;
 int FUNC_6 (struct lpfc_hba*,struct scsi_cmnd*,struct ulp_bde64*,int,int) ;
 int FUNC_7 (struct lpfc_hba*,int ,int ,char*,int,...) ;
 int FUNC_8 (struct lpfc_hba*,struct scsi_cmnd*) ;
 int FUNC_9 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_10 (struct scsi_cmnd*) ;
 int FUNC_11 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_12 (struct scsi_cmnd*) ;
 int FUNC_13 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static int
FUNC_15(struct lpfc_hba *VAR_2,
  struct lpfc_io_buf *VAR_3)
{
 struct scsi_cmnd *VAR_4 = VAR_3->pCmd;
 struct fcp_cmnd *VAR_5 = VAR_3->fcp_cmnd;
 struct ulp_bde64 *VAR_6 = (struct ulp_bde64 *)VAR_3->dma_sgl;
 IOCB_t *VAR_7 = &VAR_3->cur_iocbq.iocb;
 uint32_t VAR_8 = 0;
 int VAR_9, VAR_10, VAR_11 = VAR_4->sc_data_direction;
 int VAR_12 = 0;
 int VAR_13;
 int VAR_14 = 1;
 struct lpfc_vport *VAR_15 = VAR_2->pport;





 VAR_6 += 2;
 if (FUNC_12(VAR_4)) {






  VAR_9 = FUNC_2(&VAR_2->pcidev->dev,
     FUNC_13(VAR_4),
     FUNC_12(VAR_4), VAR_11);
  if (FUNC_14(!VAR_9))
   return 1;

  VAR_3->seg_cnt = VAR_9;


  if (VAR_3->seg_cnt > VAR_2->cfg_sg_seg_cnt) {
   FUNC_0(VAR_3->seg_cnt > VAR_2->cfg_sg_seg_cnt);
   VAR_14 = 2;
   goto err;
  }

  VAR_12 = FUNC_8(VAR_2, VAR_4);

  switch (VAR_12) {
  case 128:


   if ((VAR_3->seg_cnt + 2) > VAR_2->cfg_total_seg_cnt) {
    VAR_14 = 2;
    goto err;
   }

   VAR_8 = FUNC_5(VAR_2, VAR_4, VAR_6,
     VAR_9);

   if (VAR_8 < 2) {
    VAR_14 = 2;
    goto err;
   }
   break;

  case 130:





   VAR_10 = FUNC_2(&VAR_2->pcidev->dev,
     FUNC_11(VAR_4),
     FUNC_10(VAR_4), VAR_11);
   if (FUNC_14(!VAR_10)) {
    FUNC_9(VAR_4);
    return 1;
   }

   VAR_3->prot_seg_cnt = VAR_10;





   if ((VAR_3->prot_seg_cnt * 4) >
       (VAR_2->cfg_total_seg_cnt - 2)) {
    VAR_14 = 2;
    goto err;
   }

   VAR_8 = FUNC_6(VAR_2, VAR_4, VAR_6,
     VAR_9, VAR_10);

   if ((VAR_8 < 3) ||
       (VAR_8 > VAR_2->cfg_total_seg_cnt)) {
    VAR_14 = 2;
    goto err;
   }
   break;

  case 129:
  default:
   FUNC_9(VAR_4);
   VAR_3->seg_cnt = 0;

   FUNC_7(VAR_2, VAR_0, VAR_1,
     "9022 Unexpected protection group %i\n",
     VAR_12);
   return 2;
  }
 }







 VAR_7->un.fcpi64.bdl.bdeSize = (2 * sizeof(struct ulp_bde64));
 VAR_7->un.fcpi64.bdl.bdeSize += (VAR_8 * sizeof(struct ulp_bde64));
 VAR_7->ulpBdeCount = 1;
 VAR_7->ulpLe = 1;

 VAR_13 = FUNC_4(VAR_2, VAR_3);
 VAR_5->fcpDl = FUNC_1(VAR_13);





 VAR_7->un.fcpi.fcpi_parm = VAR_13;





 if (VAR_7->un.fcpi.fcpi_XRdy &&
     (VAR_13 < VAR_15->cfg_first_burst_size))
  VAR_7->un.fcpi.fcpi_XRdy = VAR_13;

 return 0;
err:
 if (VAR_3->seg_cnt)
  FUNC_9(VAR_4);
 if (VAR_3->prot_seg_cnt)
  FUNC_3(&VAR_2->pcidev->dev, FUNC_11(VAR_4),
        FUNC_10(VAR_4),
        VAR_4->sc_data_direction);

 FUNC_7(VAR_2, VAR_0, VAR_1,
   "9023 Cannot setup S/G List for HBA"
   "IO segs %d/%d BPL %d SCSI %d: %d %d\n",
   VAR_3->seg_cnt, VAR_3->prot_seg_cnt,
   VAR_2->cfg_total_seg_cnt, VAR_2->cfg_sg_seg_cnt,
   VAR_12, VAR_8);

 VAR_3->seg_cnt = 0;
 VAR_3->prot_seg_cnt = 0;
 return VAR_14;
}
