
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xenbus_device {int dummy; } ;
struct sockpass_mapping {int wq; TYPE_2__* sock; int saved_data_ready; } ;
struct pvcalls_fedata {int dummy; } ;
struct TYPE_4__ {TYPE_1__* sk; } ;
struct TYPE_3__ {int sk_callback_lock; int sk_data_ready; int * sk_user_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sockpass_mapping*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct xenbus_device *VAR_0,
     struct pvcalls_fedata *VAR_1,
     struct sockpass_mapping *VAR_2)
{
 if (VAR_2->sock->sk != ((void*)0)) {
  FUNC_4(&VAR_2->sock->sk->sk_callback_lock);
  VAR_2->sock->sk->sk_user_data = ((void*)0);
  VAR_2->sock->sk->sk_data_ready = VAR_2->saved_data_ready;
  FUNC_5(&VAR_2->sock->sk->sk_callback_lock);
 }
 FUNC_3(VAR_2->sock);
 FUNC_1(VAR_2->wq);
 FUNC_0(VAR_2->wq);
 FUNC_2(VAR_2);

 return 0;
}
