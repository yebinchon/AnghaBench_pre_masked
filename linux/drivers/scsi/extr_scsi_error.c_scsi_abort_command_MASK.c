
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {struct Scsi_Host* host; } ;
struct scsi_cmnd {int eh_eflags; int abort_work; struct scsi_device* device; } ;
struct Scsi_Host {int eh_deadline; int tmf_work_q; int host_lock; scalar_t__ last_reset; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int ) ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int ,int *,int) ;
 int FUNC_4 (int ,struct scsi_cmnd*,char*) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (int ,unsigned long) ;

__attribute__((used)) static int
FUNC_7(struct scsi_cmnd *VAR_6)
{
 struct scsi_device *VAR_7 = VAR_6->device;
 struct Scsi_Host *VAR_8 = VAR_7->host;
 unsigned long VAR_9;

 if (VAR_6->eh_eflags & VAR_3) {



  FUNC_1(3,
   FUNC_4(VAR_2, VAR_6,
        "previous abort failed\n"));
  FUNC_0(FUNC_2(&VAR_6->abort_work));
  return VAR_0;
 }

 FUNC_5(VAR_8->host_lock, VAR_9);
 if (VAR_8->eh_deadline != -1 && !VAR_8->last_reset)
  VAR_8->last_reset = VAR_5;
 FUNC_6(VAR_8->host_lock, VAR_9);

 VAR_6->eh_eflags |= VAR_3;
 FUNC_1(3,
  FUNC_4(VAR_2, VAR_6, "abort scheduled\n"));
 FUNC_3(VAR_8->tmf_work_q, &VAR_6->abort_work, VAR_1 / 100);
 return VAR_4;
}
