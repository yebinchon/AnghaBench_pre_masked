
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ctl_src_addr; } ;
struct fnic {scalar_t__ state; int fnic_lock; TYPE_2__* lport; int * remove_wait; TYPE_1__ ctlr; } ;
struct fc_lport {int dummy; } ;
typedef enum fnic_state { ____Placeholder_fnic_state } fnic_state ;
struct TYPE_4__ {int host; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,char*,char*) ;
 int VAR_3 ;
 int FUNC_2 (struct fnic*) ;
 int FUNC_3 (struct fnic*,int ) ;
 struct fnic* FUNC_4 (struct fc_lport*) ;
 int FUNC_5 (int) ;
 int VAR_4 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int *,int ) ;

void FUNC_11(struct fc_lport *VAR_5)
{
 int VAR_6 = 0;
 unsigned long VAR_7;
 enum fnic_state VAR_8;
 struct fnic *VAR_9 = FUNC_4(VAR_5);
 FUNC_0(VAR_4);


retry_fw_reset:
 FUNC_7(&VAR_9->fnic_lock, VAR_7);
 if (FUNC_9(VAR_9->state == VAR_1)) {

  FUNC_8(&VAR_9->fnic_lock, VAR_7);
  FUNC_6(FUNC_5(100));
  goto retry_fw_reset;
 }

 VAR_9->remove_wait = &VAR_4;
 VAR_8 = VAR_9->state;
 VAR_9->state = VAR_1;
 FUNC_3(VAR_9, VAR_9->ctlr.ctl_src_addr);
 FUNC_8(&VAR_9->fnic_lock, VAR_7);

 VAR_6 = FUNC_2(VAR_9);
 if (VAR_6) {
  FUNC_7(&VAR_9->fnic_lock, VAR_7);
  if (VAR_9->state == VAR_1)
   VAR_9->state = VAR_8;
  VAR_9->remove_wait = ((void*)0);
  FUNC_8(&VAR_9->fnic_lock, VAR_7);
  return;
 }


 FUNC_10(&VAR_4,
        FUNC_5(VAR_2));

 FUNC_7(&VAR_9->fnic_lock, VAR_7);
 VAR_9->remove_wait = ((void*)0);
 FUNC_1(VAR_3, VAR_9->lport->host,
        "fnic_scsi_abort_io %s\n",
        (VAR_9->state == VAR_0) ?
        "SUCCESS" : "FAILED");
 FUNC_8(&VAR_9->fnic_lock, VAR_7);

}
