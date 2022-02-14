
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct scsi_lun {int dummy; } ;
struct scsi_cmnd {scalar_t__ sc_data_direction; TYPE_1__* device; int cmd_len; int cmnd; } ;
struct fcp_cmnd {void* fc_dl; int fc_cdb; int fc_flags; int fc_pri_ta; int fc_lun; } ;
struct TYPE_2__ {int sector_size; int lun; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ,struct scsi_lun*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_4 (struct scsi_cmnd*) ;

__attribute__((used)) static inline
void FUNC_5(struct fcp_cmnd *VAR_6, struct scsi_cmnd *VAR_7)
{
 u32 VAR_8;

 FUNC_1(VAR_7->device->lun, (struct scsi_lun *) &VAR_6->fc_lun);

 VAR_6->fc_pri_ta = VAR_4;

 if (VAR_7->sc_data_direction == VAR_0)
  VAR_6->fc_flags |= VAR_2;
 if (VAR_7->sc_data_direction == VAR_1)
  VAR_6->fc_flags |= VAR_3;

 FUNC_2(VAR_6->fc_cdb, VAR_7->cmnd, VAR_7->cmd_len);

 VAR_8 = FUNC_3(VAR_7);
 VAR_6->fc_dl = FUNC_0(VAR_8);

 if (FUNC_4(VAR_7) == VAR_5) {
  VAR_8 += VAR_8 / VAR_7->device->sector_size * 8;
  VAR_6->fc_dl = FUNC_0(VAR_8);
 }
}
