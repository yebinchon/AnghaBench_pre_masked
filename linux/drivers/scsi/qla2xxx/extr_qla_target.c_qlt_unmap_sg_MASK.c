
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct scsi_qla_host {struct qla_hw_data* hw; } ;
struct qla_tgt_cmd {TYPE_2__* ctx; scalar_t__ ctx_dsd_alloced; int dma_data_direction; int prot_sg_cnt; int prot_sg; scalar_t__ sg_mapped; int sg_cnt; int sg; struct qla_qpair* qpair; } ;
struct qla_qpair {TYPE_1__* pdev; } ;
struct qla_hw_data {int dl_dma_pool; } ;
struct TYPE_5__ {int crc_ctx_dma; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int ,TYPE_2__*,int ) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (struct qla_hw_data*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(struct scsi_qla_host *VAR_0, struct qla_tgt_cmd *VAR_1)
{
 struct qla_hw_data *VAR_2;
 struct qla_qpair *VAR_3;

 if (!VAR_1->sg_mapped)
  return;

 VAR_3 = VAR_1->qpair;

 FUNC_1(&VAR_3->pdev->dev, VAR_1->sg, VAR_1->sg_cnt,
     VAR_1->dma_data_direction);
 VAR_1->sg_mapped = 0;

 if (VAR_1->prot_sg_cnt)
  FUNC_1(&VAR_3->pdev->dev, VAR_1->prot_sg, VAR_1->prot_sg_cnt,
   VAR_1->dma_data_direction);

 if (!VAR_1->ctx)
  return;
 VAR_2 = VAR_0->hw;
 if (VAR_1->ctx_dsd_alloced)
  FUNC_2(VAR_2, VAR_1->ctx);

 FUNC_0(VAR_2->dl_dma_pool, VAR_1->ctx, VAR_1->ctx->crc_ctx_dma);
}
