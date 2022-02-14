
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int lost_iaa; } ;
struct fotg210_hcd {scalar_t__ rh_state; TYPE_2__* regs; TYPE_1__ stats; scalar_t__ async_iaa; } ;
struct TYPE_4__ {int status; int command; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct fotg210_hcd*) ;
 int FUNC_2 (struct fotg210_hcd*,char*,int,int) ;
 int FUNC_3 (struct fotg210_hcd*,int *) ;
 int FUNC_4 (struct fotg210_hcd*,int,int *) ;

__attribute__((used)) static void FUNC_5(struct fotg210_hcd *VAR_3)
{
 if (VAR_3->rh_state != VAR_1)
  return;







 if (VAR_3->async_iaa) {
  u32 VAR_4, VAR_5;







  VAR_4 = FUNC_3(VAR_3, &VAR_3->regs->command);
  VAR_5 = FUNC_3(VAR_3, &VAR_3->regs->status);
  if ((VAR_5 & VAR_2) || !(VAR_4 & VAR_0)) {
   FUNC_0(VAR_3->stats.lost_iaa);
   FUNC_4(VAR_3, VAR_2,
     &VAR_3->regs->status);
  }

  FUNC_2(VAR_3, "IAA watchdog: status %x cmd %x\n",
    VAR_5, VAR_4);
  FUNC_1(VAR_3);
 }
}
