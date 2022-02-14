
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_qrtr {int dummy; } ;
struct qmi_txn {int dummy; } ;
struct qmi_handle {int dummy; } ;
struct qmi_elem_info {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct qmi_handle*,struct sockaddr_qrtr*,struct qmi_txn*,int ,int,size_t,struct qmi_elem_info*,void const*) ;
 int FUNC_1 (struct qmi_txn*) ;
 int FUNC_2 (struct qmi_handle*,struct qmi_txn*,int *,int *) ;

ssize_t FUNC_3(struct qmi_handle *VAR_1, struct sockaddr_qrtr *VAR_2,
       int VAR_3, size_t VAR_4, struct qmi_elem_info *VAR_5,
       const void *VAR_6)
{
 struct qmi_txn VAR_7;
 ssize_t VAR_8;
 int VAR_9;

 VAR_9 = FUNC_2(VAR_1, &VAR_7, ((void*)0), ((void*)0));
 if (VAR_9 < 0)
  return VAR_9;

 VAR_8 = FUNC_0(VAR_1, VAR_2, &VAR_7, VAR_0, VAR_3, VAR_4, VAR_5,
    VAR_6);


 FUNC_1(&VAR_7);

 return VAR_8;
}
