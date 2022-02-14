
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bna_ioceth {scalar_t__ fsm; TYPE_1__* bna; } ;
typedef scalar_t__ bfa_fsm_t ;
struct TYPE_2__ {int bnad; } ;


 int VAR_0 ;
 int FUNC_0 (struct bna_ioceth*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;

void
FUNC_2(struct bna_ioceth *VAR_3)
{
 if (VAR_3->fsm == (bfa_fsm_t)VAR_1) {
  FUNC_1(VAR_3->bna->bnad);
  return;
 }

 if (VAR_3->fsm == (bfa_fsm_t)VAR_2)
  FUNC_0(VAR_3, VAR_0);
}
