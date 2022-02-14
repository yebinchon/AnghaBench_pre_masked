
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_callback_lock; struct nvmet_tcp_queue* sk_user_data; } ;
struct nvmet_tcp_queue {int io_work; int cpu; } ;


 scalar_t__ FUNC_0 (struct nvmet_tcp_queue*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct sock *VAR_1)
{
 struct nvmet_tcp_queue *VAR_2;

 FUNC_2(&VAR_1->sk_callback_lock);
 VAR_2 = VAR_1->sk_user_data;
 if (FUNC_0(VAR_2))
  FUNC_1(VAR_2->cpu, VAR_0, &VAR_2->io_work);
 FUNC_3(&VAR_1->sk_callback_lock);
}
