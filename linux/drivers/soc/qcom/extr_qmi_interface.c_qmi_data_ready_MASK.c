
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {struct qmi_handle* sk_user_data; } ;
struct qmi_handle {int work; int wq; } ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(struct sock *VAR_0)
{
 struct qmi_handle *VAR_1 = VAR_0->sk_user_data;





 if (!VAR_1)
  return;

 FUNC_0(VAR_1->wq, &VAR_1->work);
}
