
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_callback_lock; } ;
struct iscsi_login {int dummy; } ;
struct iscsi_conn {int login_work; int login_flags; TYPE_1__* sock; } ;
struct TYPE_2__ {struct sock* sk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct iscsi_conn*) ;
 int FUNC_2 (struct iscsi_conn*,struct iscsi_login*) ;
 int FUNC_3 (struct iscsi_conn*) ;
 int FUNC_4 (struct iscsi_conn*) ;
 scalar_t__ FUNC_5 (struct iscsi_conn*,int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(
 struct iscsi_login *VAR_2,
 struct iscsi_conn *VAR_3)
{
 int VAR_4;

 if (VAR_3->sock) {
  struct sock *VAR_5 = VAR_3->sock->sk;

  FUNC_7(&VAR_5->sk_callback_lock);
  FUNC_6(VAR_1, &VAR_3->login_flags);
  FUNC_6(VAR_0, &VAR_3->login_flags);
  FUNC_8(&VAR_5->sk_callback_lock);
 }
 VAR_4 = FUNC_2(VAR_3, VAR_2);
 if (!VAR_4 && FUNC_5(VAR_3, VAR_0))
  VAR_4 = -1;

 if (VAR_4 < 0) {
  FUNC_0(&VAR_3->login_work);
  FUNC_4(VAR_3);
  FUNC_1(VAR_3);
 }
 if (VAR_4 != 0)
  FUNC_3(VAR_3);

 return VAR_4;
}
