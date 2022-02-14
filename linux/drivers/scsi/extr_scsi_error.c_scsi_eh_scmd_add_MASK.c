
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_cmnd {int rcu; int eh_entry; TYPE_1__* device; } ;
struct Scsi_Host {int eh_deadline; int host_lock; int eh_cmd_q; scalar_t__ last_reset; int ehandler; } ;
struct TYPE_2__ {struct Scsi_Host* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *,int *) ;
 int VAR_3 ;
 int FUNC_3 (struct scsi_cmnd*) ;
 int FUNC_4 (struct Scsi_Host*,int ) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (int ,unsigned long) ;

void FUNC_7(struct scsi_cmnd *VAR_4)
{
 struct Scsi_Host *VAR_5 = VAR_4->device->host;
 unsigned long VAR_6;
 int VAR_7;

 FUNC_0(!VAR_5->ehandler);

 FUNC_5(VAR_5->host_lock, VAR_6);
 if (FUNC_4(VAR_5, VAR_1)) {
  VAR_7 = FUNC_4(VAR_5, VAR_0);
  FUNC_0(VAR_7);
 }
 if (VAR_5->eh_deadline != -1 && !VAR_5->last_reset)
  VAR_5->last_reset = VAR_2;

 FUNC_3(VAR_4);
 FUNC_2(&VAR_4->eh_entry, &VAR_5->eh_cmd_q);
 FUNC_6(VAR_5->host_lock, VAR_6);




 FUNC_1(&VAR_4->rcu, VAR_3);
}
