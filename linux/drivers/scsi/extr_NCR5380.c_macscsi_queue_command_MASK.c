
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int* cmnd; int result; int (* scsi_done ) (struct scsi_cmnd*) ;} ;
struct Scsi_Host {int dummy; } ;
struct NCR5380_hostdata {int main_task; int work_q; int lock; int unissued; } ;
struct NCR5380_cmd {int list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct Scsi_Host*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int FUNC_1 (int ,struct Scsi_Host*,char*,struct scsi_cmnd*,char*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,int *) ;
 struct NCR5380_cmd* FUNC_5 (struct scsi_cmnd*) ;
 int FUNC_6 (int ,struct Scsi_Host*,char*) ;
 struct NCR5380_hostdata* FUNC_7 (struct Scsi_Host*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_11(struct Scsi_Host *VAR_5,
                                 struct scsi_cmnd *VAR_6)
{
 struct NCR5380_hostdata *VAR_7 = FUNC_7(VAR_5);
 struct NCR5380_cmd *VAR_8 = FUNC_5(VAR_6);
 unsigned long VAR_9;
 VAR_6->result = 0;

 if (!FUNC_0(VAR_5))
  return VAR_4;

 FUNC_8(&VAR_7->lock, VAR_9);
 if (VAR_6->cmnd[0] == VAR_3)
  FUNC_2(&VAR_8->list, &VAR_7->unissued);
 else
  FUNC_3(&VAR_8->list, &VAR_7->unissued);

 FUNC_9(&VAR_7->lock, VAR_9);

 FUNC_1(VAR_2, VAR_5, "command %p added to %s of queue\n",
          VAR_6, (VAR_6->cmnd[0] == VAR_3) ? "head" : "tail");


 FUNC_4(VAR_7->work_q, &VAR_7->main_task);
 return 0;
}
