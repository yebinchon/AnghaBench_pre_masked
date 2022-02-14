
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int heartbeat; } ;
struct bfa_ioc {int hb_timer; TYPE_1__ ioc_regs; int hb_count; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct bfa_ioc *VAR_2)
{
 VAR_2->hb_count = FUNC_2(VAR_2->ioc_regs.heartbeat);
 FUNC_0(&VAR_2->hb_timer, VAR_1 +
  FUNC_1(VAR_0));
}
