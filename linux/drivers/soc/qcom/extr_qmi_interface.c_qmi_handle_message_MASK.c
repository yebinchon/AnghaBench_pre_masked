
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp_txn ;
struct sockaddr_qrtr {int dummy; } ;
struct qmi_txn {int result; int id; int lock; int completion; scalar_t__ dest; scalar_t__ ei; } ;
struct qmi_header {scalar_t__ type; int txn_id; } ;
struct qmi_handle {int txn_lock; int txns; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 struct qmi_txn* FUNC_1 (int *,int ) ;
 int FUNC_2 (struct qmi_txn*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (void const*,size_t,scalar_t__,scalar_t__) ;
 int FUNC_7 (struct qmi_handle*,struct sockaddr_qrtr*,struct qmi_txn*,void const*,size_t) ;

__attribute__((used)) static void FUNC_8(struct qmi_handle *VAR_1,
          struct sockaddr_qrtr *VAR_2,
          const void *VAR_3, size_t VAR_4)
{
 const struct qmi_header *VAR_5;
 struct qmi_txn VAR_6;
 struct qmi_txn *VAR_7 = ((void*)0);
 int VAR_8;

 if (VAR_4 < sizeof(*VAR_5)) {
  FUNC_5("ignoring short QMI packet\n");
  return;
 }

 VAR_5 = VAR_3;


 if (VAR_5->type == VAR_0) {
  FUNC_3(&VAR_1->txn_lock);
  VAR_7 = FUNC_1(&VAR_1->txns, VAR_5->txn_id);


  if (!VAR_7) {
   FUNC_4(&VAR_1->txn_lock);
   return;
  }

  FUNC_3(&VAR_7->lock);
  FUNC_4(&VAR_1->txn_lock);

  if (VAR_7->dest && VAR_7->ei) {
   VAR_8 = FUNC_6(VAR_3, VAR_4, VAR_7->ei, VAR_7->dest);
   if (VAR_8 < 0)
    FUNC_5("failed to decode incoming message\n");

   VAR_7->result = VAR_8;
   FUNC_0(&VAR_7->completion);
  } else {
   FUNC_7(VAR_1, VAR_2, VAR_7, VAR_3, VAR_4);
  }

  FUNC_4(&VAR_7->lock);
 } else {

  FUNC_2(&VAR_6, 0, sizeof(VAR_6));
  VAR_6.id = VAR_5->txn_id;

  FUNC_7(VAR_1, VAR_2, &VAR_6, VAR_3, VAR_4);
 }
}
