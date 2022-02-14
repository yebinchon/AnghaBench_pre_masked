
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_callback_lock; } ;
struct iscsi_conn {int login_flags; TYPE_1__* sock; } ;
struct TYPE_2__ {struct sock* sk; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sock*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static bool FUNC_4(struct iscsi_conn *VAR_1)
{
 bool VAR_2 = 0;

 if (VAR_1->sock) {
  struct sock *VAR_3 = VAR_1->sock->sk;

  FUNC_1(&VAR_3->sk_callback_lock);
  VAR_2 = (FUNC_0(VAR_3) ||
    FUNC_3(VAR_0, &VAR_1->login_flags));
  FUNC_2(&VAR_3->sk_callback_lock);
 }
 return VAR_2;
}
