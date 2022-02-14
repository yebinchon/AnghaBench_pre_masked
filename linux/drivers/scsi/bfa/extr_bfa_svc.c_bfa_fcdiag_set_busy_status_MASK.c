
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_fcport_s {int diag_busy; } ;
struct TYPE_2__ {scalar_t__ lock; } ;
struct bfa_fcdiag_s {TYPE_1__ lb; int bfa; } ;


 int VAR_0 ;
 struct bfa_fcport_s* FUNC_0 (int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_1(struct bfa_fcdiag_s *VAR_2)
{
 struct bfa_fcport_s *VAR_3 = FUNC_0(VAR_2->bfa);

 if (VAR_2->lb.lock)
  VAR_3->diag_busy = VAR_1;
 else
  VAR_3->diag_busy = VAR_0;
}
