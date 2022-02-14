
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int dummy; } ;
struct Scsi_Host {int dummy; } ;
struct NCR5380_hostdata {int unissued; struct scsi_cmnd* sensing; int autosense; int ses; } ;
struct NCR5380_cmd {int list; } ;


 int FUNC_0 (int *,int *) ;
 struct NCR5380_cmd* FUNC_1 (struct scsi_cmnd*) ;
 int FUNC_2 (struct scsi_cmnd*,int *) ;
 struct NCR5380_hostdata* FUNC_3 (struct Scsi_Host*) ;

__attribute__((used)) static void FUNC_4(struct Scsi_Host *VAR_0, struct scsi_cmnd *VAR_1)
{
 struct NCR5380_hostdata *VAR_2 = FUNC_3(VAR_0);
 struct NCR5380_cmd *VAR_3 = FUNC_1(VAR_1);

 if (VAR_2->sensing == VAR_1) {
  FUNC_2(VAR_1, &VAR_2->ses);
  FUNC_0(&VAR_3->list, &VAR_2->autosense);
  VAR_2->sensing = ((void*)0);
 } else
  FUNC_0(&VAR_3->list, &VAR_2->unissued);
}
