
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ulp_bde64 {int dummy; } ;
struct sli4_sge {int dummy; } ;
struct lpfc_sli_ring {int dummy; } ;
struct TYPE_6__ {scalar_t__ sli3_ring; } ;
struct lpfc_hba {int work_ha_mask; int cfg_sg_seg_cnt; scalar_t__ sli_rev; int cfg_sg_dma_buf_size; int cfg_total_seg_cnt; int * lpfc_sg_dma_buf_pool; int cfg_sriov_nr_virtfn; void* lpfc_cmd_rsp_buf_pool; TYPE_2__* pcidev; scalar_t__ max_vports; int max_vpi; scalar_t__ cfg_enable_bg; TYPE_1__ sli; int menlo_flag; int fcp_poll_timer; } ;
struct fcp_rsp {int dummy; } ;
struct fcp_cmnd {int dummy; } ;
struct TYPE_10__ {int sg_tablesize; } ;
struct TYPE_9__ {int sg_tablesize; } ;
struct TYPE_8__ {int sg_tablesize; } ;
struct TYPE_7__ {scalar_t__ device; int dev; } ;


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
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 void* FUNC_0 (char*,int *,int,int ,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int,int ) ;
 int FUNC_3 (struct lpfc_hba*) ;
 scalar_t__ FUNC_4 (struct lpfc_hba*,int ) ;
 int FUNC_5 (struct lpfc_hba*) ;
 int VAR_21 ;
 int FUNC_6 (struct lpfc_hba*,int ,int,char*,int,...) ;
 int FUNC_7 (struct lpfc_hba*) ;
 int FUNC_8 (struct lpfc_hba*,int ) ;
 int FUNC_9 (struct lpfc_hba*) ;
 int FUNC_10 (struct lpfc_hba*) ;
 TYPE_5__ VAR_22 ;
 TYPE_4__ VAR_23 ;
 TYPE_3__ VAR_24 ;
 int FUNC_11 (int *,int ,int ) ;

__attribute__((used)) static int
FUNC_12(struct lpfc_hba *VAR_25)
{
 int VAR_26, VAR_27;






 FUNC_11(&VAR_25->fcp_poll_timer, VAR_21, 0);


 VAR_25->work_ha_mask = (VAR_4 | VAR_6 | VAR_5);
 VAR_25->work_ha_mask |= (VAR_7 << (VAR_14 * 4));


 FUNC_3(VAR_25);


 VAR_26 = FUNC_7(VAR_25);
 if (VAR_26)
  return -VAR_1;

 if (VAR_25->pcidev->device == VAR_20) {
  VAR_25->menlo_flag |= VAR_8;

  if (VAR_25->cfg_sg_seg_cnt < VAR_13)
   VAR_25->cfg_sg_seg_cnt = VAR_13;
 }

 if (!VAR_25->sli.sli3_ring)
  VAR_25->sli.sli3_ring = FUNC_2(VAR_18,
           sizeof(struct lpfc_sli_ring),
           VAR_3);
 if (!VAR_25->sli.sli3_ring)
  return -VAR_2;







 VAR_24.sg_tablesize = VAR_25->cfg_sg_seg_cnt;
 VAR_23.sg_tablesize = VAR_25->cfg_sg_seg_cnt;
 VAR_22.sg_tablesize = VAR_25->cfg_sg_seg_cnt;

 if (VAR_25->sli_rev == VAR_19)
  VAR_27 = sizeof(struct sli4_sge);
 else
  VAR_27 = sizeof(struct ulp_bde64);


 if (VAR_25->cfg_enable_bg) {
  VAR_25->cfg_sg_dma_buf_size = sizeof(struct fcp_cmnd) +
   sizeof(struct fcp_rsp) +
   (VAR_15 * VAR_27);

  if (VAR_25->cfg_sg_seg_cnt > VAR_16)
   VAR_25->cfg_sg_seg_cnt = VAR_16;


  VAR_25->cfg_total_seg_cnt = VAR_15;
 } else {





  VAR_25->cfg_sg_dma_buf_size = sizeof(struct fcp_cmnd) +
   sizeof(struct fcp_rsp) +
   ((VAR_25->cfg_sg_seg_cnt + 2) * VAR_27);


  VAR_25->cfg_total_seg_cnt = VAR_25->cfg_sg_seg_cnt + 2;
 }

 FUNC_6(VAR_25, VAR_9, VAR_12 | VAR_11,
   "9088 sg_tablesize:%d dmabuf_size:%d total_bde:%d\n",
   VAR_25->cfg_sg_seg_cnt, VAR_25->cfg_sg_dma_buf_size,
   VAR_25->cfg_total_seg_cnt);

 VAR_25->max_vpi = VAR_17;

 VAR_25->max_vports = 0;




 FUNC_10(VAR_25);
 FUNC_9(VAR_25);


 if (FUNC_4(VAR_25, VAR_0))
  return -VAR_2;

 VAR_25->lpfc_sg_dma_buf_pool =
  FUNC_0("lpfc_sg_dma_buf_pool",
    &VAR_25->pcidev->dev, VAR_25->cfg_sg_dma_buf_size,
    VAR_0, 0);

 if (!VAR_25->lpfc_sg_dma_buf_pool)
  goto fail_free_mem;

 VAR_25->lpfc_cmd_rsp_buf_pool =
   FUNC_0("lpfc_cmd_rsp_buf_pool",
     &VAR_25->pcidev->dev,
     sizeof(struct fcp_cmnd) +
     sizeof(struct fcp_rsp),
     VAR_0, 0);

 if (!VAR_25->lpfc_cmd_rsp_buf_pool)
  goto fail_free_dma_buf_pool;





 if (VAR_25->cfg_sriov_nr_virtfn > 0) {
  VAR_26 = FUNC_8(VAR_25,
       VAR_25->cfg_sriov_nr_virtfn);
  if (VAR_26) {
   FUNC_6(VAR_25, VAR_10, VAR_12,
     "2808 Requested number of SR-IOV "
     "virtual functions (%d) is not "
     "supported\n",
     VAR_25->cfg_sriov_nr_virtfn);
   VAR_25->cfg_sriov_nr_virtfn = 0;
  }
 }

 return 0;

fail_free_dma_buf_pool:
 FUNC_1(VAR_25->lpfc_sg_dma_buf_pool);
 VAR_25->lpfc_sg_dma_buf_pool = ((void*)0);
fail_free_mem:
 FUNC_5(VAR_25);
 return -VAR_2;
}
