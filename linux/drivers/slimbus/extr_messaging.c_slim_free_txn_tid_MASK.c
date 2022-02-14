
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slim_msg_txn {int tid; } ;
struct slim_controller {int txn_lock; int tid_idr; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct slim_controller *VAR_0, struct slim_msg_txn *VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(&VAR_0->txn_lock, VAR_2);
 FUNC_0(&VAR_0->tid_idr, VAR_1->tid);
 FUNC_2(&VAR_0->txn_lock, VAR_2);
}
