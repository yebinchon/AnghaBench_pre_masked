
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qmi_txn {int id; void* dest; struct qmi_elem_info* ei; struct qmi_handle* qmi; int completion; int lock; } ;
struct qmi_handle {int txn_lock; int txns; } ;
struct qmi_elem_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct qmi_txn*,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct qmi_txn*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;

int FUNC_7(struct qmi_handle *VAR_2, struct qmi_txn *VAR_3,
   struct qmi_elem_info *VAR_4, void *VAR_5)
{
 int VAR_6;

 FUNC_2(VAR_3, 0, sizeof(*VAR_3));

 FUNC_3(&VAR_3->lock);
 FUNC_1(&VAR_3->completion);
 VAR_3->qmi = VAR_2;
 VAR_3->ei = VAR_4;
 VAR_3->dest = VAR_5;

 FUNC_4(&VAR_2->txn_lock);
 VAR_6 = FUNC_0(&VAR_2->txns, VAR_3, 0, VAR_1, VAR_0);
 if (VAR_6 < 0)
  FUNC_6("failed to allocate transaction id\n");

 VAR_3->id = VAR_6;
 FUNC_5(&VAR_2->txn_lock);

 return VAR_6;
}
