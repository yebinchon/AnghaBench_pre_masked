
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct connection {int sock_mutex; struct connection* othercon; TYPE_2__* sock; int flags; } ;
struct TYPE_4__ {TYPE_1__* sk; } ;
struct TYPE_3__ {int sk_callback_lock; int * sk_user_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct connection *VAR_3, bool VAR_4)
{
 FUNC_0(&VAR_3->sock_mutex);
 FUNC_2(VAR_0, &VAR_3->flags);
 FUNC_2(VAR_1, &VAR_3->flags);
 FUNC_2(VAR_2, &VAR_3->flags);
 if (VAR_3->sock && VAR_3->sock->sk) {
  FUNC_3(&VAR_3->sock->sk->sk_callback_lock);
  VAR_3->sock->sk->sk_user_data = ((void*)0);
  FUNC_4(&VAR_3->sock->sk->sk_callback_lock);
 }
 if (VAR_3->othercon && VAR_4)
  FUNC_5(VAR_3->othercon, 0);
 FUNC_1(&VAR_3->sock_mutex);
}
