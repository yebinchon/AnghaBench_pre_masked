
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qmi_txn {int result; int lock; int id; int completion; struct qmi_handle* qmi; } ;
struct qmi_handle {int txn_lock; int txns; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;

int FUNC_4(struct qmi_txn *VAR_1, unsigned long VAR_2)
{
 struct qmi_handle *VAR_3 = VAR_1->qmi;
 int VAR_4;

 VAR_4 = FUNC_3(&VAR_1->completion, VAR_2);

 FUNC_1(&VAR_3->txn_lock);
 FUNC_1(&VAR_1->lock);
 FUNC_0(&VAR_3->txns, VAR_1->id);
 FUNC_2(&VAR_1->lock);
 FUNC_2(&VAR_3->txn_lock);

 if (VAR_4 == 0)
  return -VAR_0;
 else
  return VAR_1->result;
}
