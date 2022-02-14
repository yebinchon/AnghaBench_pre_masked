
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fc_fcp_pkt {int state; unsigned long timer_delay; int timer; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct fc_fcp_pkt *VAR_2, unsigned long VAR_3)
{
 if (!(VAR_2->state & VAR_0)) {
  FUNC_0(&VAR_2->timer, VAR_1 + VAR_3);
  VAR_2->timer_delay = VAR_3;
 }
}
