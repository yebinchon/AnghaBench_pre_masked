
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_rport {unsigned long dev_loss_tmo; scalar_t__ port_state; int fast_io_fail_tmo; int dev_loss_work; int fail_io_work; int dev; int flags; } ;
struct Scsi_Host {int host_lock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (struct Scsi_Host*,int *,unsigned long) ;
 struct Scsi_Host* FUNC_1 (struct fc_rport*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;

void
FUNC_5(struct fc_rport *VAR_4)
{
 struct Scsi_Host *VAR_5 = FUNC_1(VAR_4);
 unsigned long VAR_6 = VAR_4->dev_loss_tmo;
 unsigned long VAR_7;
 FUNC_3(VAR_5->host_lock, VAR_7);

 if (VAR_4->port_state != VAR_1) {
  FUNC_4(VAR_5->host_lock, VAR_7);
  return;
 }
 VAR_4->port_state = VAR_0;

 VAR_4->flags |= VAR_2;

 FUNC_4(VAR_5->host_lock, VAR_7);

 FUNC_2(&VAR_4->dev);


 if ((VAR_4->fast_io_fail_tmo != -1) &&
     (VAR_4->fast_io_fail_tmo < VAR_6))
  FUNC_0(VAR_5, &VAR_4->fail_io_work,
     VAR_4->fast_io_fail_tmo * VAR_3);


 FUNC_0(VAR_5, &VAR_4->dev_loss_work, VAR_6 * VAR_3);
}
