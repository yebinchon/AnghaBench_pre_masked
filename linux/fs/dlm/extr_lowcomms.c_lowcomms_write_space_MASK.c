
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int sk_callback_lock; } ;
struct connection {int swork; TYPE_2__* sock; int flags; } ;
struct TYPE_4__ {int flags; TYPE_1__* sk; } ;
struct TYPE_3__ {int sk_write_pending; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 struct connection* FUNC_4 (struct sock*) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct sock *VAR_4)
{
 struct connection *VAR_5;

 FUNC_2(&VAR_4->sk_callback_lock);
 VAR_5 = FUNC_4(VAR_4);
 if (!VAR_5)
  goto out;

 FUNC_0(VAR_2, &VAR_5->sock->flags);

 if (FUNC_5(VAR_0, &VAR_5->flags)) {
  VAR_5->sock->sk->sk_write_pending--;
  FUNC_0(VAR_1, &VAR_5->sock->flags);
 }

 FUNC_1(VAR_3, &VAR_5->swork);
out:
 FUNC_3(&VAR_4->sk_callback_lock);
}
