
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct srp_rport {scalar_t__ fast_io_fail_tmo; scalar_t__ dev_loss_tmo; } ;
struct srp_internal {TYPE_1__* f; } ;
struct scsi_device {int sdev_gendev; struct Scsi_Host* host; } ;
struct scsi_cmnd {struct scsi_device* device; } ;
struct Scsi_Host {int transportt; } ;
typedef enum blk_eh_timer_return { ____Placeholder_blk_eh_timer_return } blk_eh_timer_return ;
struct TYPE_2__ {scalar_t__ reset_timer_if_blocked; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (struct scsi_device*) ;
 struct srp_rport* FUNC_3 (struct Scsi_Host*) ;
 struct srp_internal* FUNC_4 (int ) ;

enum blk_eh_timer_return FUNC_5(struct scsi_cmnd *VAR_2)
{
 struct scsi_device *VAR_3 = VAR_2->device;
 struct Scsi_Host *VAR_4 = VAR_3->host;
 struct srp_internal *VAR_5 = FUNC_4(VAR_4->transportt);
 struct srp_rport *VAR_6 = FUNC_3(VAR_4);

 FUNC_1("timeout for sdev %s\n", FUNC_0(&VAR_3->sdev_gendev));
 return VAR_6 && VAR_6->fast_io_fail_tmo < 0 &&
  VAR_6->dev_loss_tmo < 0 &&
  VAR_5->f->reset_timer_if_blocked && FUNC_2(VAR_3) ?
  VAR_1 : VAR_0;
}
