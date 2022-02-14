
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int intr_mask; } ;
struct TYPE_4__ {TYPE_1__ bfa_regs; } ;
struct bfa_s {TYPE_2__ iocfc; int intr_enabled; } ;


 int VAR_0 ;
 int FUNC_0 (struct bfa_s*,int ) ;
 int FUNC_1 (struct bfa_s*) ;
 int FUNC_2 (long,int ) ;

void
FUNC_3(struct bfa_s *VAR_1)
{
 VAR_1->intr_enabled = VAR_0;
 FUNC_0(VAR_1, VAR_0);
 FUNC_2(-1L, VAR_1->iocfc.bfa_regs.intr_mask);
 FUNC_1(VAR_1);
}
