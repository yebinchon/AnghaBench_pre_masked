
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_callback_lock; TYPE_1__* sk_socket; struct nvmet_tcp_queue* sk_user_data; } ;
struct nvmet_tcp_queue {scalar_t__ state; int io_work; int cpu; int (* write_space ) (struct sock*) ;} ;
struct TYPE_2__ {int flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct sock *VAR_3)
{
 struct nvmet_tcp_queue *VAR_4;

 FUNC_2(&VAR_3->sk_callback_lock);
 VAR_4 = VAR_3->sk_user_data;
 if (FUNC_6(!VAR_4))
  goto out;

 if (FUNC_6(VAR_4->state == VAR_0)) {
  VAR_4->write_space(VAR_3);
  goto out;
 }

 if (FUNC_4(VAR_3)) {
  FUNC_0(VAR_1, &VAR_3->sk_socket->flags);
  FUNC_1(VAR_4->cpu, VAR_2, &VAR_4->io_work);
 }
out:
 FUNC_3(&VAR_3->sk_callback_lock);
}
