
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int sk_callback_lock; TYPE_1__* sk_socket; struct nvme_tcp_queue* sk_user_data; } ;
struct nvme_tcp_queue {int io_work; int io_cpu; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct sock*) ;

__attribute__((used)) static void FUNC_6(struct sock *VAR_2)
{
 struct nvme_tcp_queue *VAR_3;

 FUNC_3(&VAR_2->sk_callback_lock);
 VAR_3 = VAR_2->sk_user_data;
 if (FUNC_1(VAR_3 && FUNC_5(VAR_2))) {
  FUNC_0(VAR_0, &VAR_2->sk_socket->flags);
  FUNC_2(VAR_3->io_cpu, VAR_1, &VAR_3->io_work);
 }
 FUNC_4(&VAR_2->sk_callback_lock);
}
