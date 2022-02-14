
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int rxqueue_timer; int txqueue_timer; } ;
struct velocity_info {scalar_t__ rev_id; int mii_status; TYPE_1__* mac_regs; TYPE_2__ options; } ;
struct TYPE_3__ {int RQETMR; int TQETMR; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(struct velocity_info *VAR_3)
{

 if (VAR_3->rev_id >= VAR_0) {
  u8 VAR_4 = 0;
  u8 VAR_5 = 0;

  if (VAR_3->mii_status & (VAR_2 |
    VAR_1)) {
   VAR_4 = VAR_3->options.txqueue_timer;
   VAR_5 = VAR_3->options.rxqueue_timer;
  }

  FUNC_0(VAR_4, &VAR_3->mac_regs->TQETMR);
  FUNC_0(VAR_5, &VAR_3->mac_regs->RQETMR);
 }
}
