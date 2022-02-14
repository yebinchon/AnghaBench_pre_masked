
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
 int FUNC_1 (unsigned int,int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static bool FUNC_5(struct iscsi_conn *VAR_1, unsigned int VAR_2)
{
 bool VAR_3 = 0;

 if (VAR_1->sock) {
  struct sock *VAR_4 = VAR_1->sock->sk;

  FUNC_3(&VAR_4->sk_callback_lock);
  VAR_3 = (FUNC_0(VAR_4) ||
    FUNC_2(VAR_0, &VAR_1->login_flags));
  if (!VAR_3)
   FUNC_1(VAR_2, &VAR_1->login_flags);
  FUNC_4(&VAR_4->sk_callback_lock);
 }
 return VAR_3;
}
