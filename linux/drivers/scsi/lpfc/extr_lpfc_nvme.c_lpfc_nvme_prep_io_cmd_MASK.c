
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_16__ {int abort_tag; } ;
struct TYPE_12__ {TYPE_8__ wqe_com; } ;
struct TYPE_10__ {scalar_t__ total_xfer_len; scalar_t__ rsrvd5; } ;
struct TYPE_9__ {scalar_t__ total_xfer_len; scalar_t__ initial_xfer_len; } ;
union lpfc_wqe128 {TYPE_4__ generic; TYPE_8__ fcp_icmd; int * words; TYPE_2__ fcp_iread; TYPE_1__ fcp_iwrite; } ;
typedef scalar_t__ uint32_t ;
struct nvmefc_fcp_req {scalar_t__ io_dir; scalar_t__ payload_length; int rsplen; int cmdlen; scalar_t__ sg_cnt; } ;
struct lpfc_vport {struct lpfc_hba* phba; } ;
struct lpfc_nodelist {int nlp_flag; scalar_t__ nvme_fb_size; int nlp_nvme_info; size_t nlp_rpi; } ;
struct lpfc_iocbq {int sli4_xritag; int iotag; struct lpfc_vport* vport; union lpfc_wqe128 wqe; } ;
struct lpfc_io_buf {struct nvmefc_fcp_req* nvmeCmd; struct lpfc_iocbq cur_iocbq; } ;
struct TYPE_11__ {int* rpi_ids; } ;
struct lpfc_hba {TYPE_3__ sli4_hba; scalar_t__ cfg_nvme_enable_fb; } ;
struct lpfc_fc4_ctrl_stat {int control_requests; int input_requests; int output_requests; } ;
struct TYPE_15__ {int * words; } ;
struct TYPE_14__ {int * words; } ;
struct TYPE_13__ {int * words; } ;


 int VAR_0 ;
 int FUNC_0 (struct lpfc_nodelist*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,TYPE_8__*,int) ;
 TYPE_7__ VAR_4 ;
 TYPE_6__ VAR_5 ;
 TYPE_5__ VAR_6 ;
 int FUNC_2 (int *,int *,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int
FUNC_3(struct lpfc_vport *VAR_12,
        struct lpfc_io_buf *VAR_13,
        struct lpfc_nodelist *VAR_14,
        struct lpfc_fc4_ctrl_stat *VAR_15)
{
 struct lpfc_hba *VAR_16 = VAR_12->phba;
 struct nvmefc_fcp_req *VAR_17 = VAR_13->nvmeCmd;
 struct lpfc_iocbq *VAR_18 = &(VAR_13->cur_iocbq);
 union lpfc_wqe128 *VAR_19 = &VAR_18->wqe;
 uint32_t VAR_20;

 if (!FUNC_0(VAR_14))
  return -VAR_0;





 if (VAR_17->sg_cnt) {
  if (VAR_17->io_dir == VAR_3) {

   FUNC_2(&VAR_19->words[7],
          &VAR_6.words[7],
          sizeof(uint32_t) * 5);


   VAR_19->fcp_iwrite.total_xfer_len = VAR_17->payload_length;


   if ((VAR_16->cfg_nvme_enable_fb) &&
       (VAR_14->nlp_flag & VAR_1)) {
    VAR_20 = VAR_13->nvmeCmd->payload_length;
    if (VAR_20 < VAR_14->nvme_fb_size)
     VAR_19->fcp_iwrite.initial_xfer_len =
      VAR_20;
    else
     VAR_19->fcp_iwrite.initial_xfer_len =
      VAR_14->nvme_fb_size;
   } else {
    VAR_19->fcp_iwrite.initial_xfer_len = 0;
   }
   VAR_15->output_requests++;
  } else {

   FUNC_2(&VAR_19->words[7],
          &VAR_5.words[7],
          sizeof(uint32_t) * 5);


   VAR_19->fcp_iread.total_xfer_len = VAR_17->payload_length;


   VAR_19->fcp_iread.rsrvd5 = 0;

   VAR_15->input_requests++;
  }
 } else {

  FUNC_2(&VAR_19->words[4], &VAR_4.words[4],
         sizeof(uint32_t) * 8);
  VAR_15->control_requests++;
 }

 if (VAR_14->nlp_nvme_info & VAR_2)
  FUNC_1(VAR_9, &VAR_19->generic.wqe_com, 1);






 FUNC_1(VAR_7, &VAR_19->fcp_icmd,
        (VAR_17->rsplen + VAR_17->cmdlen));


 FUNC_1(VAR_8, &VAR_19->generic.wqe_com,
        VAR_16->sli4_hba.rpi_ids[VAR_14->nlp_rpi]);
 FUNC_1(VAR_11, &VAR_19->generic.wqe_com, VAR_18->sli4_xritag);


 VAR_19->generic.wqe_com.abort_tag = VAR_18->iotag;


 FUNC_1(VAR_10, &VAR_19->generic.wqe_com, VAR_18->iotag);



 VAR_18->vport = VAR_12;
 return 0;
}
