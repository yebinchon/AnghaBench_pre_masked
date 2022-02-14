
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int (* scsi_done ) (struct scsi_cmnd*) ;int result; } ;
struct Scsi_Host {int dummy; } ;
struct NCR5380_hostdata {struct scsi_cmnd* sensing; int ses; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct Scsi_Host*,char*,struct scsi_cmnd*) ;
 int FUNC_1 (struct scsi_cmnd*,int *) ;
 int FUNC_2 (struct scsi_cmnd*,int ) ;
 struct NCR5380_hostdata* FUNC_3 (struct Scsi_Host*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_6(struct Scsi_Host *VAR_3,
                         struct scsi_cmnd *VAR_4)
{
 struct NCR5380_hostdata *VAR_5 = FUNC_3(VAR_3);

 FUNC_0(VAR_2, VAR_3, "complete_cmd: cmd %p\n", VAR_4);

 if (VAR_5->sensing == VAR_4) {

  if (FUNC_4(VAR_4->result) != VAR_1) {
   FUNC_1(VAR_4, &VAR_5->ses);
  } else {
   FUNC_1(VAR_4, &VAR_5->ses);
   FUNC_2(VAR_4, VAR_0);
  }
  VAR_5->sensing = ((void*)0);
 }

 VAR_4->scsi_done(VAR_4);
}
