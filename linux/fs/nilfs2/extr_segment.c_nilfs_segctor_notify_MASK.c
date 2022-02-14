
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int expires; } ;
struct nilfs_sc_info {int sc_state; int sc_state_lock; TYPE_1__ sc_timer; int sc_flush_request; int sc_seq_accepted; int sc_seq_done; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_6 ;
 int FUNC_1 (struct nilfs_sc_info*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct nilfs_sc_info *VAR_7, int VAR_8, int VAR_9)
{

 FUNC_2(&VAR_7->sc_state_lock);

 if (VAR_8 == VAR_5) {
  VAR_7->sc_state &= ~VAR_2;
  VAR_7->sc_seq_done = VAR_7->sc_seq_accepted;
  FUNC_1(VAR_7, VAR_9);
  VAR_7->sc_flush_request = 0;
 } else {
  if (VAR_8 == VAR_4)
   VAR_7->sc_flush_request &= ~VAR_1;
  else if (VAR_8 == VAR_3)
   VAR_7->sc_flush_request &= ~VAR_0;


  if ((VAR_7->sc_state & VAR_2) &&
      FUNC_4(VAR_6, VAR_7->sc_timer.expires))
   FUNC_0(&VAR_7->sc_timer);
 }
 FUNC_3(&VAR_7->sc_state_lock);
}
