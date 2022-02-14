
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {void (* sk_user_data ) (struct sock*) ;void (* sk_data_ready ) (struct sock*) ;scalar_t__ sk_state; int sk_callback_lock; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_3)
{
 void (*VAR_4)(struct sock *VAR_5);

 FUNC_1(&VAR_3->sk_callback_lock);
 VAR_4 = VAR_3->sk_user_data;
 if (VAR_4 == ((void*)0)) {
  VAR_4 = VAR_3->sk_data_ready;
  goto out;
 }
 if (VAR_3->sk_state == VAR_0) {
  FUNC_0(VAR_2, &VAR_1);
 } else {
  VAR_4 = ((void*)0);
 }

out:
 FUNC_2(&VAR_3->sk_callback_lock);
 if (VAR_4 != ((void*)0))
  VAR_4(VAR_3);
}
