
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tos ;
struct socket {TYPE_1__* sk; } ;
struct sockaddr {int dummy; } ;
struct nvmet_tcp_queue {int write_space; int state_change; int data_ready; int sockaddr_peer; int sockaddr; struct socket* sock; } ;
struct linger {int l_onoff; int l_linger; } ;
struct inet_sock {int rcv_tos; } ;
typedef int sol ;
struct TYPE_2__ {int sk_callback_lock; int sk_write_space; int sk_state_change; int sk_data_ready; struct nvmet_tcp_queue* sk_user_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct inet_sock* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct socket*,struct sockaddr*) ;
 int FUNC_2 (struct socket*,struct sockaddr*) ;
 int FUNC_3 (struct socket*,int ,int ,char*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct nvmet_tcp_queue *VAR_7)
{
 struct socket *VAR_8 = VAR_7->sock;
 struct inet_sock *VAR_9 = FUNC_0(VAR_8->sk);
 struct linger VAR_10 = { .l_onoff = 1, .l_linger = 0 };
 int VAR_11;

 VAR_11 = FUNC_2(VAR_8,
  (struct sockaddr *)&VAR_7->sockaddr);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 = FUNC_1(VAR_8,
  (struct sockaddr *)&VAR_7->sockaddr_peer);
 if (VAR_11 < 0)
  return VAR_11;






 VAR_11 = FUNC_3(VAR_8, VAR_2, VAR_3,
   (char *)&VAR_10, sizeof(VAR_10));
 if (VAR_11)
  return VAR_11;


 if (VAR_9->rcv_tos > 0) {
  int VAR_12 = VAR_9->rcv_tos;

  VAR_11 = FUNC_3(VAR_8, VAR_1, VAR_0,
    (char *)&VAR_12, sizeof(VAR_12));
  if (VAR_11)
   return VAR_11;
 }

 FUNC_4(&VAR_8->sk->sk_callback_lock);
 VAR_8->sk->sk_user_data = VAR_7;
 VAR_7->data_ready = VAR_8->sk->sk_data_ready;
 VAR_8->sk->sk_data_ready = VAR_4;
 VAR_7->state_change = VAR_8->sk->sk_state_change;
 VAR_8->sk->sk_state_change = VAR_5;
 VAR_7->write_space = VAR_8->sk->sk_write_space;
 VAR_8->sk->sk_write_space = VAR_6;
 FUNC_5(&VAR_8->sk->sk_callback_lock);

 return 0;
}
