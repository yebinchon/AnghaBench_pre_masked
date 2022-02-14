
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct lpfc_iocbq {struct lpfc_io_buf* context1; int sli4_xritag; scalar_t__ sli4_lxritag; } ;
struct lpfc_io_buf {int list; int buf_lock; struct lpfc_iocbq cur_iocbq; int dma_handle; int dma_phys_sgl; scalar_t__ data; scalar_t__ dma_sgl; int dma_cmd_rsp_list; int dma_sgl_xtra_list; } ;
struct TYPE_2__ {scalar_t__ io_xri_cnt; int * xri_ids; } ;
struct lpfc_hba {int sli3_options; TYPE_1__ sli4_hba; int lpfc_sg_dma_buf_pool; int nvmet_support; scalar_t__ cfg_xpsgl; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (struct lpfc_io_buf*) ;
 struct lpfc_io_buf* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct lpfc_hba*,int ,int ,char*,int,...) ;
 int FUNC_9 (struct lpfc_hba*,scalar_t__) ;
 scalar_t__ FUNC_10 (struct lpfc_hba*) ;
 int FUNC_11 (struct lpfc_hba*,int *,int) ;
 scalar_t__ FUNC_12 (struct lpfc_hba*,struct lpfc_iocbq*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_13 (int *) ;

int
FUNC_14(struct lpfc_hba *VAR_12, int VAR_13)
{
 struct lpfc_io_buf *VAR_14;
 struct lpfc_iocbq *VAR_15;
 uint16_t VAR_16, VAR_17 = 0;
 int VAR_18, VAR_19;
 FUNC_1(VAR_11);
 FUNC_1(VAR_10);
 FUNC_1(VAR_9);

 VAR_12->sli4_hba.io_xri_cnt = 0;
 for (VAR_18 = 0; VAR_18 < VAR_13; VAR_18++) {
  VAR_14 = FUNC_5(sizeof(*VAR_14), VAR_0);
  if (!VAR_14)
   break;





  VAR_14->data = FUNC_3(VAR_12->lpfc_sg_dma_buf_pool,
        VAR_0,
        &VAR_14->dma_handle);
  if (!VAR_14->data) {
   FUNC_4(VAR_14);
   break;
  }

  if (VAR_12->cfg_xpsgl && !VAR_12->nvmet_support) {
   FUNC_0(&VAR_14->dma_sgl_xtra_list);
  } else {




   if ((VAR_12->sli3_options & VAR_6) &&
       (((unsigned long)(VAR_14->data) &
       (unsigned long)(VAR_8 - 1)) != 0)) {
    FUNC_8(VAR_12, VAR_1, VAR_3,
      "3369 Memory alignment err: "
      "addr=%lx\n",
      (unsigned long)VAR_14->data);
    FUNC_2(VAR_12->lpfc_sg_dma_buf_pool,
           VAR_14->data,
           VAR_14->dma_handle);
    FUNC_4(VAR_14);
    break;
   }
  }

  FUNC_0(&VAR_14->dma_cmd_rsp_list);

  VAR_17 = FUNC_10(VAR_12);
  if (VAR_17 == VAR_7) {
   FUNC_2(VAR_12->lpfc_sg_dma_buf_pool,
          VAR_14->data, VAR_14->dma_handle);
   FUNC_4(VAR_14);
   break;
  }
  VAR_15 = &VAR_14->cur_iocbq;


  VAR_16 = FUNC_12(VAR_12, VAR_15);
  if (VAR_16 == 0) {
   FUNC_2(VAR_12->lpfc_sg_dma_buf_pool,
          VAR_14->data, VAR_14->dma_handle);
   FUNC_4(VAR_14);
   FUNC_8(VAR_12, VAR_1, VAR_5,
     "6121 Failed to allocate IOTAG for"
     " XRI:0x%x\n", VAR_17);
   FUNC_9(VAR_12, VAR_17);
   break;
  }
  VAR_15->sli4_lxritag = VAR_17;
  VAR_15->sli4_xritag = VAR_12->sli4_hba.xri_ids[VAR_17];
  VAR_15->context1 = VAR_14;


  VAR_14->dma_sgl = VAR_14->data;
  VAR_14->dma_phys_sgl = VAR_14->dma_handle;
  VAR_14->cur_iocbq.context1 = VAR_14;
  FUNC_13(&VAR_14->buf_lock);


  FUNC_6(&VAR_14->list, &VAR_10);
  VAR_12->sli4_hba.io_xri_cnt++;
 }
 FUNC_8(VAR_12, VAR_2, VAR_4,
   "6114 Allocate %d out of %d requested new NVME "
   "buffers\n", VAR_18, VAR_13);


 if (!FUNC_7(&VAR_10))
  VAR_19 = FUNC_11(
    VAR_12, &VAR_10, VAR_18);
 else
  VAR_19 = 0;

 return VAR_19;
}
