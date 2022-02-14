
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bna_rx {scalar_t__ fsm; int rx_flags; } ;
typedef scalar_t__ bfa_sm_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bna_rx*,int ) ;
 scalar_t__ VAR_3 ;

void
FUNC_1(struct bna_rx *VAR_4)
{
 if (VAR_4->fsm != (bfa_sm_t)VAR_3)
  return;

 VAR_4->rx_flags |= VAR_0;
 if (VAR_4->rx_flags & VAR_1)
  FUNC_0(VAR_4, VAR_2);
}
