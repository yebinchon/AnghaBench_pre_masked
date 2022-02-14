
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_lun {int dummy; } ;
struct scsi_cmnd {scalar_t__ sc_data_direction; int cmd_len; int cmnd; TYPE_1__* device; } ;
struct qedf_ioreq {scalar_t__ cmd_type; int data_xfer_len; int io_req_flags; int tm_flags; struct scsi_cmnd* sc_cmd; } ;
struct fcp_cmnd {int fc_dl; int fc_cdb; scalar_t__ fc_pri_ta; int fc_flags; scalar_t__ fc_cmdref; int fc_tm_flags; int fc_lun; } ;
struct TYPE_2__ {int lun; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct scsi_lun*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct fcp_cmnd*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct qedf_ioreq *VAR_7,
      struct fcp_cmnd *VAR_8)
{
 struct scsi_cmnd *VAR_9 = VAR_7->sc_cmd;


 FUNC_3(VAR_8, 0, VAR_4);


 FUNC_1(VAR_9->device->lun,
   (struct scsi_lun *)&VAR_8->fc_lun);


 VAR_8->fc_pri_ta = 0;
 VAR_8->fc_tm_flags = VAR_7->tm_flags;
 VAR_8->fc_flags = VAR_7->io_req_flags;
 VAR_8->fc_cmdref = 0;


 if (VAR_7->cmd_type == VAR_6) {
  VAR_8->fc_flags |= VAR_2;
 } else {
  if (VAR_9->sc_data_direction == VAR_1)
   VAR_8->fc_flags |= VAR_3;
  else if (VAR_9->sc_data_direction == VAR_0)
   VAR_8->fc_flags |= VAR_2;
 }

 VAR_8->fc_pri_ta = VAR_5;


 if (VAR_7->cmd_type != VAR_6)
  FUNC_2(VAR_8->fc_cdb, VAR_9->cmnd, VAR_9->cmd_len);


 VAR_8->fc_dl = FUNC_0(VAR_7->data_xfer_len);
}
