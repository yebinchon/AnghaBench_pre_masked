
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {TYPE_1__* device; } ;
struct fnic {int internal_reset_inprogress; int fnic_lock; TYPE_2__* lport; } ;
struct fc_lport {scalar_t__ state; scalar_t__ link_up; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_4__ {int host; } ;
struct TYPE_3__ {struct Scsi_Host* host; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct Scsi_Host*) ;
 unsigned long VAR_6 ;
 struct fnic* FUNC_2 (struct fc_lport*) ;
 struct fc_lport* FUNC_3 (struct Scsi_Host*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (unsigned long,unsigned long) ;

int FUNC_8(struct scsi_cmnd *VAR_7)
{
 int VAR_8;
 unsigned long VAR_9;
 struct Scsi_Host *VAR_10 = VAR_7->device->host;
 struct fc_lport *VAR_11 = FUNC_3(VAR_10);
 struct fnic *VAR_12 = FUNC_2(VAR_11);
 unsigned long VAR_13;

 FUNC_4(&VAR_12->fnic_lock, VAR_13);
 if (VAR_12->internal_reset_inprogress == 0) {
  VAR_12->internal_reset_inprogress = 1;
 } else {
  FUNC_5(&VAR_12->fnic_lock, VAR_13);
  FUNC_0(VAR_3, VAR_12->lport->host,
   "host reset in progress skipping another host reset\n");
  return VAR_5;
 }
 FUNC_5(&VAR_12->fnic_lock, VAR_13);






 VAR_8 = (FUNC_1(VAR_10) == 0) ? VAR_5 : VAR_0;
 if (VAR_8 == VAR_5) {
  VAR_9 = VAR_6 + VAR_1 * VAR_2;
  VAR_8 = VAR_0;
  while (FUNC_7(VAR_6, VAR_9)) {
   if ((VAR_11->state == VAR_4) &&
       (VAR_11->link_up)) {
    VAR_8 = VAR_5;
    break;
   }
   FUNC_6(1);
  }
 }

 FUNC_4(&VAR_12->fnic_lock, VAR_13);
 VAR_12->internal_reset_inprogress = 0;
 FUNC_5(&VAR_12->fnic_lock, VAR_13);
 return VAR_8;
}
