
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qmi_txn {int lock; int id; struct qmi_handle* qmi; } ;
struct qmi_handle {int txn_lock; int txns; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct qmi_txn *VAR_0)
{
 struct qmi_handle *VAR_1 = VAR_0->qmi;

 FUNC_1(&VAR_1->txn_lock);
 FUNC_1(&VAR_0->lock);
 FUNC_0(&VAR_1->txns, VAR_0->id);
 FUNC_2(&VAR_0->lock);
 FUNC_2(&VAR_1->txn_lock);
}
