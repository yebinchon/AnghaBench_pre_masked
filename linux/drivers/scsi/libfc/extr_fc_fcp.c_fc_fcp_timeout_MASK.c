
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct fc_rport_libfc_priv {int flags; } ;
struct fc_rport {struct fc_rport_libfc_priv* dd_data; } ;
struct TYPE_6__ {void (* function ) (struct timer_list*) ;} ;
struct TYPE_4__ {scalar_t__ fc_tm_flags; } ;
struct fc_fcp_pkt {int state; int timer_delay; TYPE_3__ timer; TYPE_2__* lp; TYPE_1__ cdb_cmd; struct fc_rport* rport; } ;
struct TYPE_5__ {scalar_t__ qfull; } ;


 int FUNC_0 (struct fc_fcp_pkt*,char*,int ,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct fc_fcp_pkt*) ;
 scalar_t__ FUNC_2 (struct fc_fcp_pkt*) ;
 int FUNC_3 (struct fc_fcp_pkt*) ;
 int FUNC_4 (struct fc_fcp_pkt*,int ) ;
 int FUNC_5 (struct fc_fcp_pkt*,int ) ;
 int FUNC_6 (struct fc_fcp_pkt*) ;
 struct fc_fcp_pkt* FUNC_7 (int ,struct timer_list*,int ) ;
 struct fc_fcp_pkt* VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_8(struct timer_list *VAR_6)
{
 struct fc_fcp_pkt *VAR_7 = FUNC_7(VAR_7, VAR_6, VAR_5);
 struct fc_rport *VAR_8 = VAR_7->rport;
 struct fc_rport_libfc_priv *VAR_9 = VAR_8->dd_data;

 if (FUNC_2(VAR_7))
  return;

 if (VAR_7->cdb_cmd.fc_tm_flags)
  goto unlock;

 if (VAR_7->lp->qfull) {
  FUNC_0(VAR_7, "fcp timeout, resetting timer delay %d\n",
      VAR_7->timer_delay);
  VAR_7->timer.function = FUNC_8;
  FUNC_5(VAR_7, VAR_7->timer_delay);
  goto unlock;
 }
 FUNC_0(VAR_7, "fcp timeout, delay %d flags %x state %x\n",
     VAR_7->timer_delay, VAR_9->flags, VAR_7->state);
 VAR_7->state |= VAR_1;

 if (VAR_9->flags & VAR_0)
  FUNC_3(VAR_7);
 else if (VAR_7->state & VAR_2)
  FUNC_1(VAR_7);
 else
  FUNC_4(VAR_7, VAR_3);
 VAR_7->state &= ~VAR_1;
unlock:
 FUNC_6(VAR_7);
}
