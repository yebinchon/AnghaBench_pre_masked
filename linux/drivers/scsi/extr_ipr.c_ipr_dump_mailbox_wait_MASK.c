
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sense_interrupt_reg; } ;
struct ipr_ioa_cfg {scalar_t__ sdt_state; int work_q; scalar_t__ sis64; scalar_t__ dump_timeout; TYPE_2__* pdev; TYPE_1__ regs; } ;
struct TYPE_6__ {scalar_t__ time_left; } ;
struct ipr_cmnd {TYPE_3__ u; int job_step; struct ipr_ioa_cfg* ioa_cfg; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct ipr_cmnd*,scalar_t__) ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct ipr_cmnd *VAR_10)
{
 struct ipr_ioa_cfg *VAR_11 = VAR_10->ioa_cfg;

 VAR_0;

 if (VAR_11->sdt_state != VAR_1)
  return VAR_4;

 if (!VAR_11->sis64 || !VAR_10->u.time_left ||
     (FUNC_2(VAR_11->regs.sense_interrupt_reg) &
      VAR_3)) {

  if (!VAR_10->u.time_left)
   FUNC_0(&VAR_11->pdev->dev,
    "Timed out waiting for Mailbox register.\n");

  VAR_11->sdt_state = VAR_8;
  VAR_11->dump_timeout = 0;
  if (VAR_11->sis64)
   FUNC_1(VAR_10, VAR_6);
  else
   FUNC_1(VAR_10, VAR_5);
  VAR_10->job_step = VAR_9;
  FUNC_3(&VAR_11->work_q);

 } else {
  VAR_10->u.time_left -= VAR_2;
  FUNC_1(VAR_10,
          VAR_2);
 }

 VAR_7;
 return VAR_4;
}
