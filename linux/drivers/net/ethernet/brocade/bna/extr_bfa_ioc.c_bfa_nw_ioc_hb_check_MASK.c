
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int heartbeat; } ;
struct bfa_ioc {scalar_t__ hb_count; int hb_timer; TYPE_1__ ioc_regs; } ;


 int VAR_0 ;
 int FUNC_0 (struct bfa_ioc*) ;
 int FUNC_1 (struct bfa_ioc*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;

void
FUNC_5(struct bfa_ioc *VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_4(VAR_2->ioc_regs.heartbeat);
 if (VAR_2->hb_count == VAR_3) {
  FUNC_1(VAR_2);
  return;
 } else {
  VAR_2->hb_count = VAR_3;
 }

 FUNC_0(VAR_2);
 FUNC_2(&VAR_2->hb_timer, VAR_1 +
  FUNC_3(VAR_0));
}
