
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_qrtr {int dummy; } ;
struct qmi_txn {int id; } ;
struct qmi_handle {int sock_lock; scalar_t__ sock; } ;
struct qmi_elem_info {int dummy; } ;
struct msghdr {int msg_namelen; struct sockaddr_qrtr* msg_name; } ;
struct kvec {size_t iov_len; void* iov_base; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (scalar_t__,struct msghdr*,struct kvec*,int,size_t) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 void* FUNC_7 (int,int,size_t*,int ,struct qmi_elem_info*,void const*) ;

__attribute__((used)) static ssize_t FUNC_8(struct qmi_handle *VAR_1,
    struct sockaddr_qrtr *VAR_2, struct qmi_txn *VAR_3,
    int VAR_4, int VAR_5, size_t VAR_6,
    struct qmi_elem_info *VAR_7, const void *VAR_8)
{
 struct msghdr VAR_9 = {};
 struct kvec VAR_10;
 void *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_7(VAR_4,
     VAR_5, &VAR_6,
     VAR_3->id, VAR_7,
     VAR_8);
 if (FUNC_0(VAR_11))
  return FUNC_1(VAR_11);

 VAR_10.iov_base = VAR_11;
 VAR_10.iov_len = VAR_6;

 if (VAR_2) {
  VAR_9.msg_name = VAR_2;
  VAR_9.msg_namelen = sizeof(*VAR_2);
 }

 FUNC_4(&VAR_1->sock_lock);
 if (VAR_1->sock) {
  VAR_12 = FUNC_2(VAR_1->sock, &VAR_9, &VAR_10, 1, VAR_6);
  if (VAR_12 < 0)
   FUNC_6("failed to send QMI message\n");
 } else {
  VAR_12 = -VAR_0;
 }
 FUNC_5(&VAR_1->sock_lock);

 FUNC_3(VAR_11);

 return VAR_12 < 0 ? VAR_12 : 0;
}
