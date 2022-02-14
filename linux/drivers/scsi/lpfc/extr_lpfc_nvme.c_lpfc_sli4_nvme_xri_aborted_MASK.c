
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct sli4_wcqe_xri_aborted {int dummy; } ;
struct nvmefc_fcp_req {int (* done ) (struct nvmefc_fcp_req*) ;} ;
struct lpfc_nodelist {int dummy; } ;
struct TYPE_2__ {int iotag; } ;
struct lpfc_io_buf {struct nvmefc_fcp_req* nvmeCmd; TYPE_1__ cur_iocbq; struct lpfc_nodelist* ndlp; } ;
struct lpfc_hba {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct sli4_wcqe_xri_aborted*) ;
 int FUNC_1 (struct lpfc_hba*,int ,int ,char*,struct nvmefc_fcp_req*,int ,int ) ;
 int FUNC_2 (struct lpfc_hba*,struct lpfc_io_buf*) ;
 int FUNC_3 (struct lpfc_hba*,struct lpfc_nodelist*,struct sli4_wcqe_xri_aborted*) ;
 int VAR_2 ;
 int FUNC_4 (struct nvmefc_fcp_req*) ;

void
FUNC_5(struct lpfc_hba *VAR_3,
      struct sli4_wcqe_xri_aborted *VAR_4,
      struct lpfc_io_buf *VAR_5)
{
 uint16_t VAR_6 = FUNC_0(VAR_2, VAR_4);
 struct nvmefc_fcp_req *VAR_7 = ((void*)0);
 struct lpfc_nodelist *VAR_8 = VAR_5->ndlp;


 if (VAR_8)
  FUNC_3(VAR_3, VAR_8, VAR_4);

 FUNC_1(VAR_3, VAR_0, VAR_1,
   "6311 nvme_cmd %p xri x%x tag x%x abort complete and "
   "xri released\n",
   VAR_5->nvmeCmd, VAR_6,
   VAR_5->cur_iocbq.iotag);





 if (VAR_5->nvmeCmd) {
  VAR_7 = VAR_5->nvmeCmd;
  VAR_7->done(VAR_7);
  VAR_5->nvmeCmd = ((void*)0);
 }
 FUNC_2(VAR_3, VAR_5);
}
