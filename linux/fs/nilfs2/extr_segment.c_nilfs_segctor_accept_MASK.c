
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_sc_info {int sc_timer; int sc_state_lock; int sc_seq_request; int sc_seq_accepted; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct nilfs_sc_info *VAR_0)
{
 FUNC_1(&VAR_0->sc_state_lock);
 VAR_0->sc_seq_accepted = VAR_0->sc_seq_request;
 FUNC_2(&VAR_0->sc_state_lock);
 FUNC_0(&VAR_0->sc_timer);
}
