
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int sk_state; int sk_callback_lock; struct nvme_tcp_queue* sk_user_data; } ;
struct nvme_tcp_queue {int (* state_change ) (struct sock*) ;TYPE_1__* ctrl; } ;
struct TYPE_4__ {int device; } ;
struct TYPE_3__ {TYPE_2__ ctrl; } ;







 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct nvme_tcp_queue*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct sock*) ;

__attribute__((used)) static void FUNC_6(struct sock *VAR_0)
{
 struct nvme_tcp_queue *VAR_1;

 FUNC_3(&VAR_0->sk_callback_lock);
 VAR_1 = VAR_0->sk_user_data;
 if (!VAR_1)
  goto done;

 switch (VAR_0->sk_state) {
 case 132:
 case 131:
 case 128:
 case 130:
 case 129:

  FUNC_1(&VAR_1->ctrl->ctrl);
  break;
 default:
  FUNC_0(VAR_1->ctrl->ctrl.device,
   "queue %d socket state %d\n",
   FUNC_2(VAR_1), VAR_0->sk_state);
 }

 VAR_1->state_change(VAR_0);
done:
 FUNC_4(&VAR_0->sk_callback_lock);
}
