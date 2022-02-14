
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int svm_cid; } ;
struct vsock_sock {int peer_shutdown; scalar_t__ close_work_scheduled; TYPE_1__ remote_addr; } ;
struct sock {int (* sk_error_report ) (struct sock*) ;int sk_err; int sk_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sock*,int ) ;
 int FUNC_1 (struct sock*) ;
 scalar_t__ FUNC_2 (int ) ;
 struct vsock_sock* FUNC_3 (struct sock*) ;

__attribute__((used)) static void FUNC_4(struct sock *VAR_4)
{
 struct vsock_sock *VAR_5 = FUNC_3(VAR_4);







 if (FUNC_2(VAR_5->remote_addr.svm_cid))
  return;




 if (VAR_5->close_work_scheduled)
  return;

 FUNC_0(VAR_4, VAR_2);
 VAR_5->peer_shutdown = VAR_1;
 VAR_4->sk_state = VAR_3;
 VAR_4->sk_err = VAR_0;
 VAR_4->sk_error_report(VAR_4);
}
