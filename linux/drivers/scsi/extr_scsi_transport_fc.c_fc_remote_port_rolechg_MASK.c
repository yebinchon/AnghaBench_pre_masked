
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fc_rport {int scsi_target_id; int roles; int flags; int scan_work; int dev; int dev_loss_work; int fail_io_work; } ;
struct fc_host_attrs {int next_target_id; } ;
struct Scsi_Host {int host_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct Scsi_Host*) ;
 int FUNC_2 (struct Scsi_Host*) ;
 struct Scsi_Host* FUNC_3 (struct fc_rport*) ;
 int FUNC_4 (struct Scsi_Host*,int *) ;
 int FUNC_5 (int *,int ) ;
 struct fc_host_attrs* FUNC_6 (struct Scsi_Host*) ;
 int FUNC_7 (int ,unsigned long) ;
 int FUNC_8 (int ,unsigned long) ;

void
FUNC_9(struct fc_rport *VAR_6, u32 VAR_7)
{
 struct Scsi_Host *VAR_8 = FUNC_3(VAR_6);
 struct fc_host_attrs *VAR_9 = FUNC_6(VAR_8);
 unsigned long VAR_10;
 int VAR_11 = 0;

 FUNC_7(VAR_8->host_lock, VAR_10);
 if (VAR_7 & VAR_0) {
  if (VAR_6->scsi_target_id == -1) {
   VAR_6->scsi_target_id = VAR_9->next_target_id++;
   VAR_11 = 1;
  } else if (!(VAR_6->roles & VAR_0))
   VAR_11 = 1;
 }

 VAR_6->roles = VAR_7;

 FUNC_8(VAR_8->host_lock, VAR_10);

 if (VAR_11) {
  if (!FUNC_0(&VAR_6->fail_io_work))
   FUNC_1(VAR_8);
  if (!FUNC_0(&VAR_6->dev_loss_work))
   FUNC_1(VAR_8);

  FUNC_7(VAR_8->host_lock, VAR_10);
  VAR_6->flags &= ~(VAR_3 |
      VAR_2 |
      VAR_1);
  FUNC_8(VAR_8->host_lock, VAR_10);


  FUNC_2(VAR_8);

  FUNC_5(&VAR_6->dev, VAR_5);

  FUNC_7(VAR_8->host_lock, VAR_10);
  VAR_6->flags |= VAR_4;
  FUNC_4(VAR_8, &VAR_6->scan_work);
  FUNC_8(VAR_8->host_lock, VAR_10);
 }
}
