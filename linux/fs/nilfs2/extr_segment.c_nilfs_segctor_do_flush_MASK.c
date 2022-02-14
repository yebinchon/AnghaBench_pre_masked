
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_sc_info {int sc_flush_request; int sc_state_lock; int sc_wait_daemon; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct nilfs_sc_info *VAR_0, int VAR_1)
{
 FUNC_1(&VAR_0->sc_state_lock);
 if (!(VAR_0->sc_flush_request & FUNC_0(VAR_1))) {
  unsigned long VAR_2 = VAR_0->sc_flush_request;

  VAR_0->sc_flush_request |= FUNC_0(VAR_1);
  if (!VAR_2)
   FUNC_3(&VAR_0->sc_wait_daemon);
 }
 FUNC_2(&VAR_0->sc_state_lock);
}
