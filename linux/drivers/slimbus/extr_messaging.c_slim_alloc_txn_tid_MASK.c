
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slim_msg_txn {int tid; } ;
struct slim_controller {int txn_lock; int tid_idr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct slim_msg_txn*,int ,int ,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int FUNC_3(struct slim_controller *VAR_2, struct slim_msg_txn *VAR_3)
{
 unsigned long VAR_4;
 int VAR_5 = 0;

 FUNC_1(&VAR_2->txn_lock, VAR_4);
 VAR_5 = FUNC_0(&VAR_2->tid_idr, VAR_3, 0,
    VAR_1, VAR_0);
 if (VAR_5 < 0) {
  FUNC_2(&VAR_2->txn_lock, VAR_4);
  return VAR_5;
 }
 VAR_3->tid = VAR_5;
 FUNC_2(&VAR_2->txn_lock, VAR_4);
 return 0;
}
