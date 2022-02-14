
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xenbus_device {int dummy; } ;
struct TYPE_5__ {int register_work; } ;
struct sock_mapping {void* bytes; TYPE_3__* sock; int irq; scalar_t__ ring; TYPE_2__ ioworker; int release; int saved_data_ready; } ;
struct pvcalls_fedata {int dummy; } ;
struct TYPE_6__ {TYPE_1__* sk; } ;
struct TYPE_4__ {int sk_callback_lock; int sk_data_ready; int * sk_user_data; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sock_mapping*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int ,struct sock_mapping*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct xenbus_device*,void*) ;

__attribute__((used)) static int FUNC_9(struct xenbus_device *VAR_0,
           struct pvcalls_fedata *VAR_1,
           struct sock_mapping *VAR_2)
{
 FUNC_1(VAR_2->irq);
 if (VAR_2->sock->sk != ((void*)0)) {
  FUNC_6(&VAR_2->sock->sk->sk_callback_lock);
  VAR_2->sock->sk->sk_user_data = ((void*)0);
  VAR_2->sock->sk->sk_data_ready = VAR_2->saved_data_ready;
  FUNC_7(&VAR_2->sock->sk->sk_callback_lock);
 }

 FUNC_0(&VAR_2->release, 1);
 FUNC_2(&VAR_2->ioworker.register_work);

 FUNC_8(VAR_0, VAR_2->bytes);
 FUNC_8(VAR_0, (void *)VAR_2->ring);
 FUNC_5(VAR_2->irq, VAR_2);

 FUNC_4(VAR_2->sock);
 FUNC_3(VAR_2);

 return 0;
}
