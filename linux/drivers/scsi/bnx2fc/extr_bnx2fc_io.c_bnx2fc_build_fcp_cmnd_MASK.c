
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {int cmd_len; int cmnd; TYPE_1__* device; } ;
struct fcp_cmnd {scalar_t__ fc_pri_ta; int fc_flags; int fc_tm_flags; scalar_t__ fc_cmdref; int fc_cdb; int fc_dl; int fc_lun; } ;
struct TYPE_4__ {int tm_flags; } ;
struct bnx2fc_cmd {int io_req_flags; TYPE_2__ mp_req; int data_xfer_len; struct scsi_cmnd* sc_cmd; } ;
struct TYPE_3__ {int lun; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct fcp_cmnd*,int ,int) ;

void FUNC_4(struct bnx2fc_cmd *VAR_1,
      struct fcp_cmnd *VAR_2)
{
 struct scsi_cmnd *VAR_3 = VAR_1->sc_cmd;

 FUNC_3(VAR_2, 0, sizeof(struct fcp_cmnd));

 FUNC_1(VAR_3->device->lun, &VAR_2->fc_lun);

 VAR_2->fc_dl = FUNC_0(VAR_1->data_xfer_len);
 FUNC_2(VAR_2->fc_cdb, VAR_3->cmnd, VAR_3->cmd_len);

 VAR_2->fc_cmdref = 0;
 VAR_2->fc_pri_ta = 0;
 VAR_2->fc_tm_flags = VAR_1->mp_req.tm_flags;
 VAR_2->fc_flags = VAR_1->io_req_flags;
 VAR_2->fc_pri_ta = VAR_0;
}
