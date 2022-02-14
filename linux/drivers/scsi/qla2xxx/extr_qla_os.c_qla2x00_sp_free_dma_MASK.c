
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct scsi_cmnd {int sc_data_direction; } ;
struct qla_hw_data {int ctx_mempool; int gbl_dsd_avail; int gbl_dsd_inuse; int gbl_dsd_list; int fcp_cmnd_dma_pool; int dl_dma_pool; TYPE_2__* pdev; } ;
struct ct6_dsd {scalar_t__ dsd_use_cnt; int dsd_list; int fcp_cmnd_dma; struct crc_context* fcp_cmnd; } ;
struct crc_context {int crc_ctx_dma; } ;
struct TYPE_10__ {struct ct6_dsd* ct6_ctx; struct crc_context* crc_ctx; } ;
struct TYPE_11__ {TYPE_3__ scmd; } ;
struct TYPE_12__ {int flags; TYPE_4__ u; TYPE_1__* vha; } ;
typedef TYPE_5__ srb_t ;
struct TYPE_9__ {int dev; } ;
struct TYPE_8__ {struct qla_hw_data* hw; } ;


 struct scsi_cmnd* FUNC_0 (TYPE_5__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,struct crc_context*,int ) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct ct6_dsd*,int ) ;
 int FUNC_5 (struct qla_hw_data*,struct crc_context*) ;
 int FUNC_6 (struct scsi_cmnd*) ;
 int FUNC_7 (struct scsi_cmnd*) ;
 int FUNC_8 (struct scsi_cmnd*) ;

void FUNC_9(srb_t *VAR_5)
{
 struct qla_hw_data *VAR_6 = VAR_5->vha->hw;
 struct scsi_cmnd *VAR_7 = FUNC_0(VAR_5);

 if (VAR_5->flags & VAR_3) {
  FUNC_6(VAR_7);
  VAR_5->flags &= ~VAR_3;
 }

 if (VAR_5->flags & VAR_2) {
  FUNC_2(&VAR_6->pdev->dev, FUNC_8(VAR_7),
      FUNC_7(VAR_7), VAR_7->sc_data_direction);
  VAR_5->flags &= ~VAR_2;
 }

 if (VAR_5->flags & VAR_1) {

  FUNC_5(VAR_6, VAR_5->u.scmd.crc_ctx);
  VAR_5->flags &= ~VAR_1;
 }

 if (VAR_5->flags & VAR_0) {
  struct crc_context *VAR_8 = VAR_5->u.scmd.crc_ctx;

  FUNC_1(VAR_6->dl_dma_pool, VAR_8, VAR_8->crc_ctx_dma);
  VAR_5->flags &= ~VAR_0;
 }

 if (VAR_5->flags & VAR_4) {
  struct ct6_dsd *VAR_9 = VAR_5->u.scmd.ct6_ctx;

  FUNC_1(VAR_6->fcp_cmnd_dma_pool, VAR_9->fcp_cmnd,
      VAR_9->fcp_cmnd_dma);
  FUNC_3(&VAR_9->dsd_list, &VAR_6->gbl_dsd_list);
  VAR_6->gbl_dsd_inuse -= VAR_9->dsd_use_cnt;
  VAR_6->gbl_dsd_avail += VAR_9->dsd_use_cnt;
  FUNC_4(VAR_9, VAR_6->ctx_mempool);
 }
}
