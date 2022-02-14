
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {void (* sk_data_ready ) (struct sock*) ;int sk_callback_lock; struct o2net_sock_container* sk_user_data; } ;
struct o2net_sock_container {void (* sc_data_ready ) (struct sock*) ;int sc_rx_work; } ;


 int FUNC_0 (struct o2net_sock_container*,int *) ;
 int FUNC_1 (struct o2net_sock_container*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct o2net_sock_container*,char*) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_0)
{
 void (*VAR_1)(struct sock *VAR_2);
 struct o2net_sock_container *VAR_3;

 FUNC_2(&VAR_0->sk_callback_lock);
 VAR_3 = VAR_0->sk_user_data;
 if (VAR_3) {
  FUNC_4(VAR_3, "data_ready hit\n");
  FUNC_1(VAR_3);
  FUNC_0(VAR_3, &VAR_3->sc_rx_work);
  VAR_1 = VAR_3->sc_data_ready;
 } else {
  VAR_1 = VAR_0->sk_data_ready;
 }
 FUNC_3(&VAR_0->sk_callback_lock);

 VAR_1(VAR_0);
}
