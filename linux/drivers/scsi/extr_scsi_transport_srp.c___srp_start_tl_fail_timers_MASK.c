
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srp_rport {int reconnect_delay; int fast_io_fail_tmo; int dev_loss_tmo; int dev_loss_work; int fast_io_fail_work; int state; int reconnect_work; int mutex; } ;
struct Scsi_Host {int shost_gendev; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (int ,int *,unsigned long) ;
 struct Scsi_Host* FUNC_4 (struct srp_rport*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct srp_rport*,int ) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_7(struct srp_rport *VAR_4)
{
 struct Scsi_Host *VAR_5 = FUNC_4(VAR_4);
 int VAR_6, VAR_7, VAR_8;

 FUNC_1(&VAR_4->mutex);

 VAR_6 = VAR_4->reconnect_delay;
 VAR_7 = VAR_4->fast_io_fail_tmo;
 VAR_8 = VAR_4->dev_loss_tmo;
 FUNC_2("%s current state: %d\n", FUNC_0(&VAR_5->shost_gendev),
   VAR_4->state);

 if (VAR_4->state == VAR_2)
  return;
 if (VAR_6 > 0)
  FUNC_3(VAR_3, &VAR_4->reconnect_work,
       1UL * VAR_6 * VAR_0);
 if ((VAR_7 >= 0 || VAR_8 >= 0) &&
     FUNC_6(VAR_4, VAR_1) == 0) {
  FUNC_2("%s new state: %d\n", FUNC_0(&VAR_5->shost_gendev),
    VAR_4->state);
  FUNC_5(&VAR_5->shost_gendev);
  if (VAR_7 >= 0)
   FUNC_3(VAR_3,
        &VAR_4->fast_io_fail_work,
        1UL * VAR_7 * VAR_0);
  if (VAR_8 >= 0)
   FUNC_3(VAR_3,
        &VAR_4->dev_loss_work,
        1UL * VAR_8 * VAR_0);
 }
}
