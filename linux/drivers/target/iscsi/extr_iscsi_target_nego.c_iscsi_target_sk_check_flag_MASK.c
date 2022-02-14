
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_callback_lock; } ;
struct iscsi_conn {int login_flags; TYPE_1__* sock; } ;
struct TYPE_2__ {struct sock* sk; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (unsigned int,int *) ;

__attribute__((used)) static bool FUNC_3(struct iscsi_conn *VAR_0, unsigned int VAR_1)
{
 bool VAR_2 = 0;

 if (VAR_0->sock) {
  struct sock *VAR_3 = VAR_0->sock->sk;

  FUNC_0(&VAR_3->sk_callback_lock);
  VAR_2 = FUNC_2(VAR_1, &VAR_0->login_flags);
  FUNC_1(&VAR_3->sk_callback_lock);
 }
 return VAR_2;
}
