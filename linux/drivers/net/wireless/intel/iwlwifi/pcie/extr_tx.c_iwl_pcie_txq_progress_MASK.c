
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_txq {scalar_t__ read_ptr; scalar_t__ write_ptr; scalar_t__ wd_timeout; int stuck_timer; scalar_t__ frozen; int lock; } ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__) ;

__attribute__((used)) static inline void FUNC_3(struct iwl_txq *VAR_1)
{
 FUNC_1(&VAR_1->lock);

 if (!VAR_1->wd_timeout)
  return;





 if (VAR_1->frozen)
  return;





 if (VAR_1->read_ptr == VAR_1->write_ptr)
  FUNC_0(&VAR_1->stuck_timer);
 else
  FUNC_2(&VAR_1->stuck_timer, VAR_0 + VAR_1->wd_timeout);
}
