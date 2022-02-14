
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct scsiio_tracker {int dummy; } ;
struct scsi_cmnd {int result; int (* scsi_done ) (struct scsi_cmnd*) ;} ;
struct MPT3SAS_ADAPTER {int scsiio_depth; scalar_t__ remove_host; scalar_t__ pci_error_recovery; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct scsi_cmnd*,int) ;
 int FUNC_1 (struct MPT3SAS_ADAPTER*,int ) ;
 int FUNC_2 (struct MPT3SAS_ADAPTER*,char*,int) ;
 int FUNC_3 (struct MPT3SAS_ADAPTER*,struct scsiio_tracker*) ;
 struct scsi_cmnd* FUNC_4 (struct MPT3SAS_ADAPTER*,int) ;
 struct scsiio_tracker* FUNC_5 (struct scsi_cmnd*) ;
 int FUNC_6 (struct scsi_cmnd*) ;
 int FUNC_7 (struct scsi_cmnd*) ;

__attribute__((used)) static void
FUNC_8(struct MPT3SAS_ADAPTER *VAR_2)
{
 struct scsi_cmnd *VAR_3;
 struct scsiio_tracker *VAR_4;
 u16 VAR_5;
 int VAR_6 = 0;

 for (VAR_5 = 1; VAR_5 <= VAR_2->scsiio_depth; VAR_5++) {
  VAR_3 = FUNC_4(VAR_2, VAR_5);
  if (!VAR_3)
   continue;
  VAR_6++;
  FUNC_0(VAR_3, 0);
  VAR_4 = FUNC_5(VAR_3);
  FUNC_3(VAR_2, VAR_4);
  FUNC_6(VAR_3);
  if (VAR_2->pci_error_recovery || VAR_2->remove_host)
   VAR_3->result = VAR_0 << 16;
  else
   VAR_3->result = VAR_1 << 16;
  VAR_3->scsi_done(VAR_3);
 }
 FUNC_1(VAR_2, FUNC_2(VAR_2, "completing %d cmds\n", VAR_6));
}
