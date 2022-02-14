
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_qrtr {int dummy; } ;
struct qmi_txn {int dummy; } ;
struct qmi_msg_handler {scalar_t__ type; scalar_t__ msg_id; int (* fn ) (struct qmi_handle*,struct sockaddr_qrtr*,struct qmi_txn*,void*) ;int ei; int decoded_size; } ;
struct qmi_header {scalar_t__ type; scalar_t__ msg_id; } ;
struct qmi_handle {struct qmi_msg_handler* handlers; } ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (void const*,size_t,int ,void*) ;
 int FUNC_4 (struct qmi_handle*,struct sockaddr_qrtr*,struct qmi_txn*,void*) ;

__attribute__((used)) static void FUNC_5(struct qmi_handle *VAR_1, struct sockaddr_qrtr *VAR_2,
          struct qmi_txn *VAR_3, const void *VAR_4, size_t VAR_5)
{
 const struct qmi_msg_handler *VAR_6;
 const struct qmi_header *VAR_7 = VAR_4;
 void *VAR_8;
 int VAR_9;

 if (!VAR_1->handlers)
  return;

 for (VAR_6 = VAR_1->handlers; VAR_6->fn; VAR_6++) {
  if (VAR_6->type == VAR_7->type &&
      VAR_6->msg_id == VAR_7->msg_id)
   break;
 }

 if (!VAR_6->fn)
  return;

 VAR_8 = FUNC_1(VAR_6->decoded_size, VAR_0);
 if (!VAR_8)
  return;

 VAR_9 = FUNC_3(VAR_4, VAR_5, VAR_6->ei, VAR_8);
 if (VAR_9 < 0)
  FUNC_2("failed to decode incoming message\n");
 else
  VAR_6->fn(VAR_1, VAR_2, VAR_3, VAR_8);

 FUNC_0(VAR_8);
}
