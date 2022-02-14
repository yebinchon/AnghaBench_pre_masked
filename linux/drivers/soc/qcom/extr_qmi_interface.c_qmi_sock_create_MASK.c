
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {TYPE_1__* sk; } ;
struct sockaddr_qrtr {int dummy; } ;
struct sockaddr {int dummy; } ;
struct qmi_handle {int dummy; } ;
struct TYPE_2__ {void* sk_error_report; void* sk_data_ready; struct qmi_handle* sk_user_data; } ;


 int VAR_0 ;
 struct socket* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct socket*,struct sockaddr*) ;
 void* VAR_4 ;
 int FUNC_2 (int *,int ,int ,int ,struct socket**) ;
 int FUNC_3 (struct socket*) ;

__attribute__((used)) static struct socket *FUNC_4(struct qmi_handle *VAR_5,
          struct sockaddr_qrtr *VAR_6)
{
 struct socket *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_2(&VAR_3, VAR_0, VAR_2,
          VAR_1, &VAR_7);
 if (VAR_8 < 0)
  return FUNC_0(VAR_8);

 VAR_8 = FUNC_1(VAR_7, (struct sockaddr *)VAR_6);
 if (VAR_8 < 0) {
  FUNC_3(VAR_7);
  return FUNC_0(VAR_8);
 }

 VAR_7->sk->sk_user_data = VAR_5;
 VAR_7->sk->sk_data_ready = VAR_4;
 VAR_7->sk->sk_error_report = VAR_4;

 return VAR_7;
}
