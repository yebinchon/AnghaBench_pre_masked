
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_state; int sk_callback_lock; struct nvmet_tcp_queue* sk_user_data; } ;
struct nvmet_tcp_queue {int idx; } ;





 int FUNC_0 (struct nvmet_tcp_queue*) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct sock *VAR_0)
{
 struct nvmet_tcp_queue *VAR_1;

 FUNC_2(&VAR_0->sk_callback_lock);
 VAR_1 = VAR_0->sk_user_data;
 if (!VAR_1)
  goto done;

 switch (VAR_0->sk_state) {
 case 128:
 case 129:
 case 130:

  VAR_0->sk_user_data = ((void*)0);
  FUNC_0(VAR_1);
  break;
 default:
  FUNC_1("queue %d unhandled state %d\n",
   VAR_1->idx, VAR_0->sk_state);
 }
done:
 FUNC_3(&VAR_0->sk_callback_lock);
}
