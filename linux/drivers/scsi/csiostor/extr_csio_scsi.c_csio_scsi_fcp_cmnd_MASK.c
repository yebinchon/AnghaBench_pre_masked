
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_4__ {scalar_t__ Message; } ;
struct scsi_cmnd {TYPE_2__ SCp; TYPE_1__* device; int cmnd; } ;
struct fcp_cmnd {scalar_t__ fc_tm_flags; int fc_lun; scalar_t__ fc_flags; int fc_dl; int fc_pri_ta; int fc_cdb; scalar_t__ fc_cmdref; } ;
struct csio_ioreq {scalar_t__ datadir; scalar_t__ nsge; } ;
struct TYPE_3__ {int lun; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct scsi_cmnd* FUNC_1 (struct csio_ioreq*) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (struct fcp_cmnd*,int ,int) ;
 int FUNC_6 (struct scsi_cmnd*) ;

__attribute__((used)) static inline void
FUNC_7(struct csio_ioreq *VAR_4, void *VAR_5)
{
 struct fcp_cmnd *VAR_6 = (struct fcp_cmnd *)VAR_5;
 struct scsi_cmnd *VAR_7 = FUNC_1(VAR_4);


 if (FUNC_3(VAR_7->SCp.Message == 0)) {
  FUNC_2(VAR_7->device->lun, &VAR_6->fc_lun);
  VAR_6->fc_tm_flags = 0;
  VAR_6->fc_cmdref = 0;

  FUNC_4(VAR_6->fc_cdb, VAR_7->cmnd, 16);
  VAR_6->fc_pri_ta = VAR_3;
  VAR_6->fc_dl = FUNC_0(FUNC_6(VAR_7));

  if (VAR_4->nsge)
   if (VAR_4->datadir == VAR_0)
    VAR_6->fc_flags = VAR_2;
   else
    VAR_6->fc_flags = VAR_1;
  else
   VAR_6->fc_flags = 0;
 } else {
  FUNC_5(VAR_6, 0, sizeof(*VAR_6));
  FUNC_2(VAR_7->device->lun, &VAR_6->fc_lun);
  VAR_6->fc_tm_flags = (uint8_t)VAR_7->SCp.Message;
 }
}
