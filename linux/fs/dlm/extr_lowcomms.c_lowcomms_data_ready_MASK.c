
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_callback_lock; } ;
struct connection {int rwork; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 struct connection* FUNC_3 (struct sock*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_2)
{
 struct connection *VAR_3;

 FUNC_1(&VAR_2->sk_callback_lock);
 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3 && !FUNC_4(VAR_0, &VAR_3->flags))
  FUNC_0(VAR_1, &VAR_3->rwork);
 FUNC_2(&VAR_2->sk_callback_lock);
}
