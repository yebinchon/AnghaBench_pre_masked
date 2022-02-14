
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


typedef int uint8_t ;
typedef int uint64_t ;
struct lpfc_vport {TYPE_7__* phba; } ;
struct lpfc_rport_data {struct lpfc_nodelist* pnode; } ;
struct lpfc_nodelist {scalar_t__ nlp_state; size_t nlp_rpi; int nlp_fcp_info; } ;
struct TYPE_11__ {scalar_t__ fcpi_parm; } ;
struct TYPE_12__ {TYPE_4__ fcpi; } ;
struct TYPE_8__ {int icd; } ;
struct TYPE_9__ {TYPE_1__ fcp_ext; } ;
struct TYPE_13__ {size_t ulpContext; int ulpFCP2Rcvy; int ulpClass; int ulpTimeout; TYPE_5__ un; scalar_t__ ulpPU; int ulpCommand; TYPE_2__ unsli3; } ;
struct lpfc_iocbq {TYPE_6__ iocb; struct lpfc_vport* vport; } ;
struct lpfc_io_buf {int timeout; struct fcp_cmnd* fcp_cmnd; struct lpfc_iocbq cur_iocbq; struct lpfc_rport_data* rdata; } ;
struct fcp_cmnd {int fcpCntl2; int fcp_lun; } ;
struct TYPE_10__ {size_t* rpi_ids; } ;
struct TYPE_14__ {int sli_rev; int sli3_options; TYPE_3__ sli4_hba; } ;
typedef TYPE_6__ IOCB_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct lpfc_nodelist*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,struct fcp_cmnd*) ;
 int FUNC_3 (TYPE_7__*,struct lpfc_io_buf*) ;
 int FUNC_4 (struct fcp_cmnd*,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct lpfc_vport *VAR_5,
        struct lpfc_io_buf *VAR_6,
        uint64_t VAR_7,
        uint8_t VAR_8)
{
 struct lpfc_iocbq *VAR_9;
 IOCB_t *VAR_10;
 struct fcp_cmnd *VAR_11;
 struct lpfc_rport_data *VAR_12 = VAR_6->rdata;
 struct lpfc_nodelist *VAR_13 = VAR_12->pnode;

 if (!VAR_13 || !FUNC_0(VAR_13) ||
     VAR_13->nlp_state != VAR_4)
  return 0;

 VAR_9 = &(VAR_6->cur_iocbq);
 VAR_9->vport = VAR_5;

 VAR_10 = &VAR_9->iocb;

 VAR_11 = VAR_6->fcp_cmnd;

 FUNC_4(VAR_11, 0, sizeof(struct fcp_cmnd));
 FUNC_1(VAR_7, &VAR_11->fcp_lun);
 VAR_11->fcpCntl2 = VAR_8;
 if (VAR_5->phba->sli_rev == 3 &&
     !(VAR_5->phba->sli3_options & VAR_1))
  FUNC_2(VAR_10->unsli3.fcp_ext.icd, VAR_11);
 VAR_10->ulpCommand = VAR_0;
 VAR_10->ulpContext = VAR_13->nlp_rpi;
 if (VAR_5->phba->sli_rev == VAR_2) {
  VAR_10->ulpContext =
    VAR_5->phba->sli4_hba.rpi_ids[VAR_13->nlp_rpi];
 }
 VAR_10->ulpFCP2Rcvy = (VAR_13->nlp_fcp_info & VAR_3) ? 1 : 0;
 VAR_10->ulpClass = (VAR_13->nlp_fcp_info & 0x0f);
 VAR_10->ulpPU = 0;
 VAR_10->un.fcpi.fcpi_parm = 0;


 if (VAR_6->timeout > 0xff) {




  VAR_10->ulpTimeout = 0;
 } else
  VAR_10->ulpTimeout = VAR_6->timeout;

 if (VAR_5->phba->sli_rev == VAR_2)
  FUNC_3(VAR_5->phba, VAR_6);

 return 1;
}
