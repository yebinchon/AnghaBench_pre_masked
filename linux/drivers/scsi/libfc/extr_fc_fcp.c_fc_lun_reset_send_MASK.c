
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct TYPE_3__ {scalar_t__ (* fcp_cmd_send ) (struct fc_lport*,struct fc_fcp_pkt*,int ) ;} ;
struct fc_lport {TYPE_1__ tt; } ;
struct TYPE_4__ {void (* function ) (struct timer_list*) ;} ;
struct fc_fcp_pkt {TYPE_2__ timer; int recov_retry; struct fc_lport* lp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct fc_fcp_pkt*) ;
 int FUNC_1 (struct fc_fcp_pkt*,int ) ;
 int FUNC_2 (struct fc_fcp_pkt*) ;
 int VAR_1 ;
 struct fc_fcp_pkt* FUNC_3 (int ,struct timer_list*,int ) ;
 struct fc_fcp_pkt* VAR_2 ;
 int FUNC_4 (struct fc_fcp_pkt*) ;
 scalar_t__ FUNC_5 (struct fc_lport*,struct fc_fcp_pkt*,int ) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_6(struct timer_list *VAR_4)
{
 struct fc_fcp_pkt *VAR_5 = FUNC_3(VAR_5, VAR_4, VAR_3);
 struct fc_lport *VAR_6 = VAR_5->lp;

 if (VAR_6->tt.fcp_cmd_send(VAR_6, VAR_5, VAR_1)) {
  if (VAR_5->recov_retry++ >= VAR_0)
   return;
  if (FUNC_0(VAR_5))
   return;
  VAR_5->timer.function = FUNC_6;
  FUNC_1(VAR_5, FUNC_4(VAR_5));
  FUNC_2(VAR_5);
 }
}
