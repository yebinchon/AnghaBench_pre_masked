
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ctl_src_addr; } ;
struct fnic {scalar_t__ state; int fnic_lock; TYPE_1__ ctlr; } ;
struct fc_lport {int dummy; } ;
typedef enum fnic_state { ____Placeholder_fnic_state } fnic_state ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct fnic*) ;
 int FUNC_1 (struct fnic*,int ) ;
 struct fnic* FUNC_2 (struct fc_lport*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 scalar_t__ FUNC_7 (int) ;

void FUNC_8(struct fc_lport *VAR_1)
{
 unsigned long VAR_2;
 enum fnic_state VAR_3;
 struct fnic *VAR_4 = FUNC_2(VAR_1);


retry_fw_reset:
 FUNC_5(&VAR_4->fnic_lock, VAR_2);
 if (FUNC_7(VAR_4->state == VAR_0)) {

  FUNC_6(&VAR_4->fnic_lock, VAR_2);
  FUNC_4(FUNC_3(100));
  goto retry_fw_reset;
 }
 VAR_3 = VAR_4->state;
 VAR_4->state = VAR_0;
 FUNC_1(VAR_4, VAR_4->ctlr.ctl_src_addr);
 FUNC_6(&VAR_4->fnic_lock, VAR_2);

 if (FUNC_0(VAR_4)) {
  FUNC_5(&VAR_4->fnic_lock, VAR_2);
  if (VAR_4->state == VAR_0)
   VAR_4->state = VAR_3;
  FUNC_6(&VAR_4->fnic_lock, VAR_2);
 }

}
