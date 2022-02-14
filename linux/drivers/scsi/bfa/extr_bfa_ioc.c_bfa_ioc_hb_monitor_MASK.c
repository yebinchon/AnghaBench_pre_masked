
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int heartbeat; } ;
struct bfa_ioc_s {TYPE_1__ ioc_regs; int hb_count; } ;


 int FUNC_0 (struct bfa_ioc_s*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct bfa_ioc_s *VAR_0)
{
 VAR_0->hb_count = FUNC_1(VAR_0->ioc_regs.heartbeat);
 FUNC_0(VAR_0);
}
