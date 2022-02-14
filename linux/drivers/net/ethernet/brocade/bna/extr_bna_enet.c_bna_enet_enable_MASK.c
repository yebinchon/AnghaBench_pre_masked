
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bna_enet {scalar_t__ fsm; int flags; } ;
typedef scalar_t__ bfa_sm_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bna_enet*,int ) ;
 scalar_t__ VAR_3 ;

void
FUNC_1(struct bna_enet *VAR_4)
{
 if (VAR_4->fsm != (bfa_sm_t)VAR_3)
  return;

 VAR_4->flags |= VAR_0;

 if (VAR_4->flags & VAR_1)
  FUNC_0(VAR_4, VAR_2);
}
