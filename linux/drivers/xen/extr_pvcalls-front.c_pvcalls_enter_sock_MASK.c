
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {TYPE_1__* sk; } ;
struct sock_mapping {int refcount; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {scalar_t__ sk_send_head; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sock_mapping* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 () ;
 TYPE_2__* VAR_2 ;

__attribute__((used)) static inline struct sock_mapping *FUNC_4(struct socket *VAR_3)
{
 struct sock_mapping *VAR_4;

 if (!VAR_2 ||
  FUNC_2(&VAR_2->dev) == ((void*)0))
  return FUNC_0(-VAR_0);

 VAR_4 = (struct sock_mapping *)VAR_3->sk->sk_send_head;
 if (VAR_4 == ((void*)0))
  return FUNC_0(-VAR_1);

 FUNC_3();
 FUNC_1(&VAR_4->refcount);
 return VAR_4;
}
